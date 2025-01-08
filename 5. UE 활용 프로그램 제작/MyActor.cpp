// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Math/UnrealMathUtility.h" // FMath 사용을 위한 헤더

// Sets default values
AMyActor::AMyActor()
{
	x = 0;
	y = 0;
    StepCount = 10;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

    move();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

int32_t AMyActor::step()
{
   return FMath::RandRange(0, 1);   
};

void AMyActor::move()
{
    UE_LOG(LogTemp, Warning, TEXT("시작 좌표 : (%d, %d)"), x, y);

    float Total_dist = 0;
    int32 EventCount = 0;
    int32 prevX = x;
    int32 prevY = y;
    
    for (int i = 0; i < StepCount; i++)
    {
        x += step();
        y += step();

        if (prevX != x || prevY != y)
        {
            UE_LOG(LogTemp, Log, TEXT("Event Triggered!"));
            EventCount++;
        }
        else
        {
            UE_LOG(LogTemp, Log, TEXT("Event Not Triggered"));
        }

        FVector2D Point_Prev(prevX, prevY);
        FVector2D Point_Curr(x, y);

        UE_LOG(LogTemp, Warning, TEXT("이동 횟수 : %d번, 현재 좌표 : (%d, %d)"), i + 1, x, y);

        float dist = distance(Point_Prev, Point_Curr);

        Total_dist += dist;

        UE_LOG(LogTemp, Warning, TEXT("두 좌표간의 거리 : %f"), dist);

        prevX = x;
        prevY = y;
    }
    UE_LOG(LogTemp, Warning, TEXT("총 이동거리는 : %f, 총 이벤트 발생 횟수 : %d"), Total_dist, EventCount);
}

// 두 좌표간 거리를 구하기
float AMyActor::distance(FVector2D first, FVector2D second)
{
	float dx = first.X - second.X;
	float dy = first.Y - second.Y;
	return FMath::Sqrt(dx * dx + dy * dy);
}