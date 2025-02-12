#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"
UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

class GAMEPROJECT_API IItemInterface
{
	GENERATED_BODY()

public:
	UFUNCTION()
	virtual void OnItemOverlap(
		UPrimitiveComponent* OverlapedComp, // �������� �߻��� �ڽ��� �浹 ������Ʈ
		AActor* OtherActor,				// �ڽŰ� �������� ��� ����
		UPrimitiveComponent* OtherComp,		// ���� ������ �浹 ������Ʈ
		// OtherBodyIndex, bFromSweep, SweepResult ���� �ùķ��̼ǰ� ����
		int32 OtherBodyIndex,				// �浹�� �ٵ� �ε���
		bool bFromSweep,					// ���� ��� �浹���� ����
		const FHitResult& SweepResult) = 0; // �浹 �� ����
	UFUNCTION()
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlapedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) = 0;
	virtual void ActivateItem(AActor* Activator) = 0;
	virtual FName GetItemType() const = 0; // FString���� ������
};