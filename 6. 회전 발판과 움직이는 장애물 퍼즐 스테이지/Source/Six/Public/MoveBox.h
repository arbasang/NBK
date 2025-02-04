#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveBox.generated.h"

class ULifeCycleComponent;

UCLASS()
class SIX_API AMoveBox : public AActor
{
	GENERATED_BODY()
	
public:	
	AMoveBox();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FVector PatrolDirection;

protected:

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FVector StartLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "LifeCycle")
	ULifeCycleComponent* LifeCycleComp;

	bool CanTurn = false;

public:	
	virtual void Tick(float DeltaTime) override;
};