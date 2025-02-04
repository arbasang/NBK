#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomActorSpawner.generated.h"

class AMoveBox;
class ARotateBox;

UCLASS()
class SIX_API ARandomActorSpawner : public AActor
{
	GENERATED_BODY()

public:
	ARandomActorSpawner();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	FVector MinSpawnRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	FVector MaxSpawnRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	float MinSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	float MaxSpeed = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	float MinDistance = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	float MaxDistance = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	FRotator MinRotationSpeed = FRotator(30.0f, 30.0f, 30.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	FRotator MaxRotationSpeed = FRotator(180.0f, 180.0f, 180.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner Settings")
	TSubclassOf<class AMoveBox> MovePlatformClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner Settings")
	TSubclassOf<class ARotateBox> RotatePlatformClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner Settings")
	int NumPlatforms = 10;

protected:
	virtual void BeginPlay() override;

private:
	void SpawnPlatforms();
};