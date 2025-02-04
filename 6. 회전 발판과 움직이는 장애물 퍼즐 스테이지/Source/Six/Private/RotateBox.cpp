PRAGMA_DISABLE_OPTIMIZATION // 디버깅 목적으로 컴파일러의 최적화를 비활성하는데 사용하는 매크로

#include "RotateBox.h"
ARotateBox::ARotateBox()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder <UStaticMesh>  MeshAsset(TEXT("/Game/Resources/Props/Floor_400x400.Floor_400x400"));
	if (MeshAsset.Succeeded())
	{
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder <UMaterial> MaterialAsset(TEXT("/Game/Resources/Materials/M_Tech_Panel.M_Tech_Panel"));
	if (MaterialAsset.Succeeded())
	{
		StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}

	SetActorScale3D(FVector(0.5));	
}

void ARotateBox::BeginPlay()
{
	Super::BeginPlay();

	StaticMeshComp->SetRelativeLocation(FVector(X, Y, Z));
}

void ARotateBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FQuat NewRotation = FQuat::MakeFromEuler(FVector(RollRotationSpeed * DeltaTime, PitchRotationSpeed * DeltaTime, YawRotationSpeed * DeltaTime)); // 짐벌락 현상을 방지
	AddActorWorldRotation(NewRotation);
}