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
		UPrimitiveComponent* OverlapedComp, // 오버랩이 발생한 자신의 충돌 컴포넌트
		AActor* OtherActor,				// 자신과 오버랩한 상대 액터
		UPrimitiveComponent* OtherComp,		// 상대방 액터의 충돌 컴포넌트
		// OtherBodyIndex, bFromSweep, SweepResult 물리 시뮬레이션과 연관
		int32 OtherBodyIndex,				// 충돌한 바디 인덱스
		bool bFromSweep,					// 스윕 기반 충돌인지 여부
		const FHitResult& SweepResult) = 0; // 충돌 상세 정보
	UFUNCTION()
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlapedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) = 0;
	virtual void ActivateItem(AActor* Activator) = 0;
	virtual FName GetItemType() const = 0; // FString보다 가벼움
};