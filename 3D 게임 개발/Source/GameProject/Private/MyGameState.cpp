#include "MyGameState.h"
#include "MyGameInstance.h"
#include "MyPlayerController.h"
#include "CoinItem.h"
#include "SpawnVolume.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


AMyGameState::AMyGameState()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	LevelDuration = 9.0f;
	WaveDuration = 3.0f;
	CurrentLevelIndex = 0;
	CurrentWaveIndex = 0;
	MaxLevels = 3;
	MaxWaves = 3;
	ItemToSpawn = 40;
}

void AMyGameState::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Start Level"));
	StartLevel();

	GetWorldTimerManager().SetTimer(
		HUDUpdateTimerHandle,
		this,
		&AMyGameState::UpdateHUD,
		0.1f,
		true
	);
}

int32 AMyGameState::GetScore() const
{
	return Score;
}

void AMyGameState::AddScore(int32 Amount)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GameInstance);
		if (MyGameInstance)
		{
			MyGameInstance->AddToScore(Amount);
		}
	}
}

void AMyGameState::OnGameOver()
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GameInstance))
		{
			MyGameInstance->CurrentHealth = 100;
		}
	}

	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(PlayerController))
		{
			MyPlayerController->SetPause(true); // °ÔÀÓÀÌ ¿ÏÀüÈ÷ ¸ØÃã
			MyPlayerController->ShowMainMenu(true);
		}
	}
}

void AMyGameState::StartLevel()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(PlayerController))
		{
			MyPlayerController->ShowGameHUD();
		}
	}

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GameInstance);
		if (MyGameInstance)
		{
			CurrentLevelIndex = MyGameInstance->CurrentLevelIndex;
		}
	}

	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundVolumes);

	ItemToSpawn -= 2 * CurrentWaveIndex;

	for (int32 i = 0; i < ItemToSpawn; i++)
	{
		if (FoundVolumes.Num() > 0)
		{
			ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[0]);
			AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
			if (SpawnedActor)
			{
				SpawnedActors.Add(SpawnedActor);
			}
			if (SpawnedActor && SpawnedActor->IsA(ACoinItem::StaticClass()))
			{
				SpawnedCoinCount++;
			}
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("ItemToSpawn %d"), ItemToSpawn);

	//UE_LOG(LogTemp, Warning, TEXT("Wave %d Start!"), CurrentWaveIndex + 1);

	if (!GetWorldTimerManager().IsTimerActive(LevelTimerHandle))
	{
		GetWorldTimerManager().SetTimer(
			LevelTimerHandle,
			this,
			&AMyGameState::OnLevelTimeUp,
			LevelDuration,
			false
		);
	}

	GetWorldTimerManager().SetTimer(
		WaveTimerHandle,
		this,
		&AMyGameState::OnWaveTimeUP,
		WaveDuration,
		false
	);
}

void AMyGameState::OnWaveTimeUP()
{
	EndWave();
}

void AMyGameState::OnLevelTimeUp()
{
	EndLevel();
}

void AMyGameState::OnCoinCollected()
{
	CollectedCoinCount++;

	if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
	{
		EndWave();
	}
}

void AMyGameState::EndWave()
{
	GetWorldTimerManager().ClearTimer(WaveTimerHandle);

	for (AActor* Actor : SpawnedActors)
	{
		if (Actor && Actor->IsValidLowLevel())
		{
			Actor->Destroy();
		}
	}
	SpawnedActors.Empty();

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GameInstance);
		if (MyGameInstance)
		{
			AddScore(Score);
		}
	}

	CurrentWaveIndex++;

	StartLevel();
}

void AMyGameState::EndLevel()
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		GetWorldTimerManager().ClearTimer(LevelTimerHandle);
		UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GameInstance);
		if (MyGameInstance)
		{
			AddScore(Score);
			CurrentLevelIndex++;
			MyGameInstance->CurrentLevelIndex = CurrentLevelIndex;
			UE_LOG(LogTemp, Warning, TEXT("Level %d completed. Moving to next Level!"), CurrentLevelIndex);
		}
	}

	if (CurrentLevelIndex >= MaxLevels)
	{
		OnGameOver();
		return;
	}

	if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
	{
		UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
	}
	else
	{
		OnGameOver();
	}
}

void AMyGameState::UpdateHUD()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(PlayerController))
		{
			if (UUserWidget* HUDWidget = MyPlayerController->GetHUDWidget())
			{
				if (UTextBlock* ScoreText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Score"))))
				{
					if (UGameInstance* GameInstance = GetGameInstance())
					{
						if (UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GameInstance))
						{
							ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), MyGameInstance->TotalScore)));
						}
					}
				}

				if (UTextBlock* LevelText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Level"))))
				{
					LevelText->SetText(FText::FromString(FString::Printf(TEXT("Level: %d - %d"), CurrentLevelIndex + 1, CurrentWaveIndex + 1)));
				}

				if (UTextBlock* TimeText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Time"))))
				{
					float RemainingTime = GetWorldTimerManager().GetTimerRemaining(WaveTimerHandle);
					TimeText->SetText(FText::FromString(FString::Printf(TEXT("Time: %.1f"), RemainingTime)));
				}
			}
		}
	}
}