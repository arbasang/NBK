// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class HELLO_API AMyActor : public AActor
{
	GENERATED_BODY()
private:
	int32 x; // 플레이어의 x좌표
	int32 y; // 플레이어의 y좌표
	int32 StepCount; // 스테이지 횟수

	int32 step(); // x좌표, y좌표 각각 이동할 거리 구하는 함수

	void move(); // 플레이어가 이동하는 함수

	float distance(FVector2D first, FVector2D second); // 플레이어가 이동한 거리 구하는 함수

public:	
	// Sets default values for this actor's properties
	AMyActor();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
