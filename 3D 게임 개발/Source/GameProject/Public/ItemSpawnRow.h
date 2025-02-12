#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemSpawnRow.generated.h"

USTRUCT(BlueprintType) // ����ü�� ������ ����� �� �� ����
struct FItemSpawnRow : public  FTableRowBase // ����ü�� ���̺��� ������ ��
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemName;					// ������ �̸�
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ItemClass;	// ������ Ŭ���� �Ǵ� �������Ʈ
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnChance;				// ������ Ȯ��
};