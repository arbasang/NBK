#include "ULifeCycleComponent.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"

ULifeCycleComponent::ULifeCycleComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void ULifeCycleComponent::BeginPlay()
{
	Super::BeginPlay();

	if (AActor* Owner = GetOwner())
	{
		if (IsVisible && bUseLifeCycle)
		{
			// 액터가 처음부터 보이게 설정
			GetOwner()->SetActorHiddenInGame(false);
			GetOwner()->SetActorEnableCollision(true);
	
			// 일정 시간이 지나면 액터 숨김 처리
			GetWorld()->GetTimerManager().SetTimer(LifeTimerHandle, this, &ULifeCycleComponent::HideActor, Lifetime, false);
		}
	}
}

void ULifeCycleComponent::HideActor()
{
	if (AActor* Owner = GetOwner())
	{
		Owner->SetActorHiddenInGame(true);       // 화면에서 숨김
		Owner->SetActorEnableCollision(false);   // 충돌 비활성화
		IsVisible = false;

		// 일정 시간이 지나면 다시 나타나게 함
		GetWorld()->GetTimerManager().SetTimer(RespawnTimerHandle, this, &ULifeCycleComponent::RespawnActor, RespawnDelay, false);
	}
}

void ULifeCycleComponent::RespawnActor()
{
	if (AActor* Owner = GetOwner())
	{
		Owner->SetActorHiddenInGame(false);      // 다시 보이게 함
		Owner->SetActorEnableCollision(true);    // 충돌 활성화
		IsVisible = true;

		GetWorld()->GetTimerManager().SetTimer(LifeTimerHandle, this, &ULifeCycleComponent::HideActor, Lifetime, false);
	}
}
