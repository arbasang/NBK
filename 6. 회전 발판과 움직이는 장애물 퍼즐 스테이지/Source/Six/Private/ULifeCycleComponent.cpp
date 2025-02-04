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
			// ���Ͱ� ó������ ���̰� ����
			GetOwner()->SetActorHiddenInGame(false);
			GetOwner()->SetActorEnableCollision(true);
	
			// ���� �ð��� ������ ���� ���� ó��
			GetWorld()->GetTimerManager().SetTimer(LifeTimerHandle, this, &ULifeCycleComponent::HideActor, Lifetime, false);
		}
	}
}

void ULifeCycleComponent::HideActor()
{
	if (AActor* Owner = GetOwner())
	{
		Owner->SetActorHiddenInGame(true);       // ȭ�鿡�� ����
		Owner->SetActorEnableCollision(false);   // �浹 ��Ȱ��ȭ
		IsVisible = false;

		// ���� �ð��� ������ �ٽ� ��Ÿ���� ��
		GetWorld()->GetTimerManager().SetTimer(RespawnTimerHandle, this, &ULifeCycleComponent::RespawnActor, RespawnDelay, false);
	}
}

void ULifeCycleComponent::RespawnActor()
{
	if (AActor* Owner = GetOwner())
	{
		Owner->SetActorHiddenInGame(false);      // �ٽ� ���̰� ��
		Owner->SetActorEnableCollision(true);    // �浹 Ȱ��ȭ
		IsVisible = true;

		GetWorld()->GetTimerManager().SetTimer(LifeTimerHandle, this, &ULifeCycleComponent::HideActor, Lifetime, false);
	}
}
