#include "MyPlayerController.h"
#include "MyGameState.h"
#include "MyGameInstance.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "EnhancedInputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

AMyPlayerController::AMyPlayerController()
	:InputMappingContext(nullptr),
	MoveAction(nullptr),
	JumpAction(nullptr),
	LookAction(nullptr),
	SprintAction(nullptr),
	PressTabAction(nullptr),
	HUDWidgetClass(nullptr),
	HUDWidgetInstance(nullptr),
	MainMenuWidgetClass(nullptr),
	MainMenuWidgetInstance(nullptr),
	TapMenuWidgetClass(nullptr),
	TapMenuWidgetInstance(nullptr)
{
}

UUserWidget* AMyPlayerController::GetHUDWidget() const
{
	return HUDWidgetInstance;
}

void AMyPlayerController::ShowGameHUD()
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (TapMenuWidgetInstance)
	{
		TapMenuWidgetInstance->RemoveFromParent();
		TapMenuWidgetInstance = nullptr;
	}

	if (HUDWidgetClass)
	{
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();

			bShowMouseCursor = false;
			SetInputMode(FInputModeGameOnly());
		}

		AMyGameState* MyGameState = GetWorld() ? GetWorld()->GetGameState<AMyGameState>() : nullptr;
		if (MyGameState)
		{
			MyGameState->UpdateHUD();
		}
	}
}

void AMyPlayerController::ShowMainMenu(bool bIsRestart)
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (MainMenuWidgetClass)
	{
		MainMenuWidgetInstance = CreateWidget<UUserWidget>(this, MainMenuWidgetClass);
		if (MainMenuWidgetInstance)
		{
			MainMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
		}

		if (UTextBlock* ButtonText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName(TEXT("StartButtonText"))))
		{
			if (bIsRestart)
			{
				ButtonText->SetText(FText::FromString(TEXT("Restart")));
			}
			else
			{
				ButtonText->SetText(FText::FromString(TEXT("Start")));
			}
		}

		if (bIsRestart)
		{
			UFunction* PlayAnimFunc = MainMenuWidgetInstance->FindFunction(FName("PlayGameOverAnim"));
			if (PlayAnimFunc)
			{
				MainMenuWidgetInstance->ProcessEvent(PlayAnimFunc, nullptr); // 매개변수 없으면 nullptr
			}

			if (UTextBlock* TotalScoreText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName("TotalScoreText")))
			{
				if (UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(this)))
				{
					TotalScoreText->SetText(FText::FromString(
						FString::Printf(TEXT("Total Score: %d"), MyGameInstance->TotalScore)
					));
				}
			}
		}
	}
}

void AMyPlayerController::ShowTabMenu(const FInputActionValue& Value)
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (TapMenuWidgetInstance)
	{
		TapMenuWidgetInstance->RemoveFromParent();
		TapMenuWidgetInstance = nullptr;
	}

	if (TapMenuWidgetClass)
	{
		TapMenuWidgetInstance = CreateWidget<UUserWidget>(this, TapMenuWidgetClass);
		if (TapMenuWidgetInstance)
		{
			TapMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
			SetPause(true);
		}
	}
}

void AMyPlayerController::StartGame()
{
	if (UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		MyGameInstance->CurrentLevelIndex = 0;
		MyGameInstance->TotalScore = 0;
		MyGameInstance->CurrentHealth = 100;
	}

	UGameplayStatics::OpenLevel(GetWorld(), FName("BasicLevel"));
	SetPause(false);
}

void AMyPlayerController::ExitGame()
{
	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);
}

void AMyPlayerController::ContinueGame()
{
	if (TapMenuWidgetInstance)
	{
		TapMenuWidgetInstance->RemoveFromParent();
		TapMenuWidgetInstance = nullptr;
	}

	if (HUDWidgetClass)
	{
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();

			bShowMouseCursor = false;
			SetInputMode(FInputModeGameOnly());
		}
	}
	SetPause(false);
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}

	FString CurrentMapName = GetWorld()->GetMapName();
	if (CurrentMapName.Contains("MenuLevel"))
	{
		ShowMainMenu(false);
	}
}