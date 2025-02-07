#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotateBox.generated.h"

UCLASS()
class SIX_API ARotateBox : public AActor
{
	GENERATED_BODY()

public:
	ARotateBox();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float PitchRotationSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float YawRotationSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float RollRotationSpeed = 0.0f;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FVector Radius = FVector(0.0f, 0.0f, 0.0f); // 회전 반경

public:
	virtual void Tick(float DeltaTime) override;
};