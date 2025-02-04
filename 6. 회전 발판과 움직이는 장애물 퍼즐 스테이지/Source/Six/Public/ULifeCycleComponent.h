#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ULifeCycleComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SIX_API ULifeCycleComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	ULifeCycleComponent();

	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeCycle")
	float Lifetime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeCycle")
	float RespawnDelay = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeCycle")
	bool IsVisible = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LifeCycle")
	bool bUseLifeCycle = false;

	FTimerHandle LifeTimerHandle;
	FTimerHandle RespawnTimerHandle;

	void HideActor();
	void RespawnActor();
};
