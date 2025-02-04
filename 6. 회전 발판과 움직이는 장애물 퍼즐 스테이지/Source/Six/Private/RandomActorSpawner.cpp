#include "RandomActorSpawner.h"
#include "MoveBox.h"
#include "RotateBox.h"

ARandomActorSpawner::ARandomActorSpawner()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ARandomActorSpawner::BeginPlay()
{
    Super::BeginPlay();
    SpawnPlatforms();
}

void ARandomActorSpawner::SpawnPlatforms()
{
    if (!GetWorld())
    {
        UE_LOG(LogTemp, Error, TEXT("GetWorld() is null!"));
        return;
    }

    for (int i = 0; i < NumPlatforms; i++)
    {
        FVector RandomLocation = FVector(FMath::RandRange(MinSpawnRange.X, MaxSpawnRange.X),
            FMath::RandRange(MinSpawnRange.Y, MaxSpawnRange.Y),
            FMath::RandRange(MinSpawnRange.Z, MaxSpawnRange.Z));

        FRotator RandomRotation = FRotator(0, FMath::RandRange(0.0f, 360.0f), 0);

        TSubclassOf<AActor> PlatformClass = (FMath::RandBool()) ? MovePlatformClass : RotatePlatformClass;

        AActor* SpawnedPlatform = GetWorld()->SpawnActor<AActor>(PlatformClass, RandomLocation, RandomRotation);

        if (AMoveBox* MoveBox = Cast<AMoveBox>(SpawnedPlatform))
        {
            MoveBox->MoveSpeed = FMath::RandRange(MinSpeed, MaxSpeed);
            MoveBox->MaxDistance = FMath::RandRange(MinDistance, MaxDistance);

            FVector RandomDirection;
            do {
                RandomDirection = FVector(FMath::RandRange(-1.0f, 1.0f),
                    FMath::RandRange(-1.0f, 1.0f),
                    0).GetSafeNormal();
            } while (RandomDirection.IsNearlyZero());
            MoveBox->PatrolDirection = RandomDirection;
        }
        else if (ARotateBox* RotateBox = Cast<ARotateBox>(SpawnedPlatform))
        {
            RotateBox->PitchRotationSpeed = FMath::RandRange(MinRotationSpeed.Pitch, MaxRotationSpeed.Pitch);
            RotateBox->YawRotationSpeed = FMath::RandRange(MinRotationSpeed.Yaw, MaxRotationSpeed.Yaw);
            RotateBox->RollRotationSpeed = FMath::RandRange(MinRotationSpeed.Roll, MaxRotationSpeed.Roll);
        }
    }
}