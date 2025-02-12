#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemSpawnRow.generated.h"

USTRUCT(BlueprintType) // 구조체를 변수로 만들어 낼 수 있음
struct FItemSpawnRow : public  FTableRowBase // 구조체를 테이블의 행으로 씀
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemName;					// 아이템 이름
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ItemClass;	// 아이템 클래스 또는 블루프린트
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnChance;				// 아이템 확률
};