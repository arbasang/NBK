#pragma once

#include "CoreMinimal.h"
#include "ItemSpawnRow.h"
#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

class UBoxComponent;

UCLASS()
class GAMEPROJECT_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawnVolume();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	USceneComponent* Scene;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	UBoxComponent* SpawningBox;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	UDataTable* ItemDataTable;

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	AActor* SpawnRandomItem();							// 랜덤한 아이템을 스폰하는 역할

	FItemSpawnRow* GetRandomItem() const;				// ItemDataTable에서 아이템을 랜덤하게 고르는 역할
	AActor* SpawnItem(TSubclassOf<AActor> ItemClass);	// 실제로 아이템을 스폰하는 역할
	FVector GetRandomPointInVolume() const;				// 아이템을 스폰할 위치를 랜덤하게 선택하는 역할
};
