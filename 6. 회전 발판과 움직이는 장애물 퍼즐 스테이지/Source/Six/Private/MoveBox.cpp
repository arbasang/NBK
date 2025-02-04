#include "MoveBox.h"
#include "ULifeCycleComponent.h"

AMoveBox::AMoveBox()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	LifeCycleComp = CreateDefaultSubobject<ULifeCycleComponent>(TEXT("LifeCycleComponent")); // 액터 컴포넌트여서 SetupAttachment() 필요없음

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
	
	SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
	SetActorScale3D(FVector(0.5f));

	MoveSpeed = 0.0f;

	MaxDistance = 0.0f;

	PatrolDirection = FVector(0.0f, 0.0f, 0.0f); // 단위 벡터
}

void AMoveBox::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

void AMoveBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Move = PatrolDirection * MoveSpeed * DeltaTime;

	AddActorLocalOffset(Move);

	float Distance = FVector::Dist(StartLocation, GetActorLocation());

	if (Distance >= MaxDistance && !CanTurn)
	{
		PatrolDirection *= -1.f;
		CanTurn = true;

	}
	else if (Distance < 5.0f && CanTurn)
	{
		PatrolDirection *= -1.f;
		CanTurn = false;
	}
}

/*
void SetTimer(
	FTimerHandle& OutHandle,        // 타이머 핸들
	UObject* Object,                // 함수를 실행할 객체
	FunctionPtr InTimerMethod,      // 호출할 함수
	float Rate,                     // 호출 간격 (초 단위)
	bool bLoop = false,             // 반복 여부
	float FirstDelay = -1.0f        // 초기 지연 시간 (옵션)
);
*/