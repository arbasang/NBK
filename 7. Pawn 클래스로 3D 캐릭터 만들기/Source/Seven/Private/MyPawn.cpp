#include "MyPawn.h"
#include "MyPlayerController.h"
#include "EnhancedInputComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

AMyPawn::AMyPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Capsule"));
	RootComponent = BoxComp;
	BoxComp->SetBoxExtent(FVector(13.0f, 26.0f, 13.0f)); // 박스 컴포넌트 크기 설정
	BoxComp->SetSimulatePhysics(false);

	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMeshComp->SetupAttachment(RootComponent);
	SkeletalMeshComp->SetSimulatePhysics(false);
	SkeletalMeshComp->SetRelativeScale3D(FVector(1.0f, 2.0f, 1.0f));

	static ConstructorHelpers::FObjectFinder <USkeletalMesh> SkeletalMeshAsset(TEXT("/Script/Engine.SkeletalMesh'/Engine/EngineMeshes/SkeletalCube.SkeletalCube'"));
	if (SkeletalMeshAsset.Succeeded())
	{
		SkeletalMeshComp->SetSkeletalMesh(SkeletalMeshAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder <UMaterial> MaterialAsset(TEXT("/Script/Engine.Material'/Engine/MapTemplates/Materials/BasicAsset03.BasicAsset03'"));
	if (MaterialAsset.Succeeded())
	{
		SkeletalMeshComp->SetMaterial(0, MaterialAsset.Object);
	}

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->SocketOffset = FVector(0.0f, 0.0f, 100.0f);
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = true;
}

void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (AMyPlayerController* PlayerController = Cast<AMyPlayerController>(GetController()))
		{
			if (PlayerController->MoveForwardAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveForwardAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::MoveForward
				);
			}

			if (PlayerController->MoveRightAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveRightAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::MoveRight
				);
			}

			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::Look
				);
			}

			if (PlayerController->UpAction)
			{
				EnhancedInput->BindAction(
					PlayerController->UpAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::Up
				);
			}

			if (PlayerController->DownAction)
			{
				EnhancedInput->BindAction(
					PlayerController->DownAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::Down
				);
			}

			if (PlayerController->DroneMoveAction)
			{
				EnhancedInput->BindAction(
					PlayerController->DroneMoveAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::DroneMove
				);
			}

			if (PlayerController->DroneLookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->DroneLookAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::DroneLook
				);
			}

			if (PlayerController->DroneWheelAction)
			{
				EnhancedInput->BindAction(
					PlayerController->DroneWheelAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::DroneWheel
				);
			}

			if (PlayerController->HoveringAction)
			{
				EnhancedInput->BindAction(
					PlayerController->HoveringAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::Hovering
				);
			}
		}
	}
}

void AMyPawn::MoveForward(const FInputActionValue& value)
{
	if (!Controller) return;
	const FVector2D MoveInput = value.Get<FVector2D>();

	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		AddActorLocalOffset(FVector(MoveInput.X * MoveSpeed * GetWorld()->GetDeltaSeconds(), 0.0f, 0.0f));
	}
}

void AMyPawn::MoveRight(const FInputActionValue& value)
{
	if (!Controller) return;
	const FVector2D MoveInput = value.Get<FVector2D>();

	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		AddActorLocalOffset(FVector(0.0F, MoveInput.Y * MoveSpeed * GetWorld()->GetDeltaSeconds(), 0.0F));
	}
}

void AMyPawn::Look(const FInputActionValue& value)
{
	if (!Controller) return;

	FVector2D LookInput = value.Get<FVector2D>();

	FRotator CurrentRotation = GetActorRotation();
	CurrentRotation.Yaw += LookInput.X * LookSpeed;
	SetActorRotation(CurrentRotation);
	Controller->SetControlRotation(CurrentRotation);
}

void AMyPawn::Up(const FInputActionValue& value)
{
	if (value.Get<bool>())
	{
		AddActorLocalOffset(FVector(0.0f, 0.0f, UpSpeed * GetWorld()->GetDeltaSeconds()));
	}
}

void AMyPawn::Down(const FInputActionValue& value)
{
	if (value.Get<bool>())
	{
		AddActorLocalOffset(FVector(0.0f, 0.0f, DownSpeed * GetWorld()->GetDeltaSeconds()));
	}
}

void AMyPawn::DroneMove(const FInputActionValue& value)
{
	if (!Controller) return;
	const FVector MoveInput = value.Get<FVector>();

	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		FVector MoveDirection = FVector(0, 1, 0);
		FRotator CurrentRotation = GetActorRotation();

		float NewPitch = CurrentRotation.Pitch - MoveInput.X;
		NewPitch = FMath::Clamp(NewPitch, -45.0f, 45.0f);
		SetActorRotation(FRotator(NewPitch, CurrentRotation.Yaw, CurrentRotation.Roll));
		AddActorLocalOffset(FVector(MoveInput.X * MoveSpeed * GetWorld()->GetDeltaSeconds(), 0.0f, 0.0f));
	}

	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		FVector MoveDirection = FVector(0, 1, 0);
		FRotator CurrentRotation = GetActorRotation();

		float NewRoll = CurrentRotation.Roll + MoveInput.Y;
		NewRoll = FMath::Clamp(NewRoll, -45.0f, 45.0f);
		SetActorRotation(FRotator(CurrentRotation.Pitch, CurrentRotation.Yaw, NewRoll));
		AddActorLocalOffset(FVector(0.0F, MoveInput.Y * MoveSpeed * GetWorld()->GetDeltaSeconds(), 0.0F));
	}

	if (!FMath::IsNearlyZero(MoveInput.Z))
	{
		AddActorLocalOffset(FVector(0.0F, 0.0F, MoveInput.Z * MoveSpeed * GetWorld()->GetDeltaSeconds()));
	}
}

void AMyPawn::DroneLook(const FInputActionValue& value)
{
	if (!Controller) return;

	FVector2D LookInput = value.Get<FVector2D>();

	FRotator CurrentRotation = GetActorRotation();
	CurrentRotation.Yaw += LookInput.X;
	CurrentRotation.Pitch = FMath::Clamp(CurrentRotation.Pitch - LookInput.Y, -89.0f, 89.0f);
	SetActorRotation(CurrentRotation);
	Controller->SetControlRotation(CurrentRotation);
}

void AMyPawn::DroneWheel(const FInputActionValue& value)
{
	float WheelAxis = value.Get<float>();

	if (FMath::IsNearlyZero(WheelAxis))
	{
		return;
	}

	// 현재 회전 값 가져오기
	FRotator CurrentRotation = GetActorRotation();

	// 마우스 휠 방향에 따라 Roll 값 변경
	CurrentRotation.Roll += WheelAxis * RollSpeed;

	// 적용
	SetActorRotation(CurrentRotation);
}

void AMyPawn::Hovering(const FInputActionValue& value)
{
	if (value.Get<bool>())
	{
		UE_LOG(LogTemp, Warning, TEXT("Hovering action triggered!"));
		if (GEngine) // 언리얼 엔진의 전역 엔진 객체
		{
			if (AMyPlayerController* PlayerController = Cast<AMyPlayerController>(GetController()))
			{
				PlayerController->OnToggleHovering(); // 컨트롤러에 호버링 전환 요청
			}
		}
	}
}

void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector StartLocation = GetActorLocation();
	FVector EndLocation = StartLocation + FVector(0.0f, 0.0f, -20.0f); // 바닥 감지 거리

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		ECC_Visibility,
		QueryParams
	);

	FVector NextPosition = StartLocation;

	AMyPlayerController* PlayerController = Cast<AMyPlayerController>(GetController());
	// PlayerController가 존재하지 않을 때 접근했을 때 예외 방지
	bool bIsHovering = PlayerController ? PlayerController->bIsHovering : false;

	MoveSpeed = bIsHovering ? initialSpeed : (bHit ? initialSpeed : initialSpeed * AirControl); // 에어 컨트롤

	if (bIsHovering)
	{
		// 호버 상태면 중력 적용 X
		GravitySpeed = 0.0f;
	}
	else if (bHit)
	{
		// 땅에 닿으면 중력 속도 초기화
		GravitySpeed = 0.0f;
		SetActorRotation(FRotator(GetActorRotation().Pitch, GetActorRotation().Yaw, GetActorRotation().Roll));

		MoveSpeed = initialSpeed; // 초기 속도로 설정
	}
	else
	{
		// 중력 적용
		GravitySpeed += Gravity * DeltaTime;
		GravitySpeed = FMath::Clamp(GravitySpeed, -4000.0f, 0.0f);
		NextPosition.Z += GravitySpeed * DeltaTime;
		GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Green, *FString::Printf(TEXT("GravitySpeed: %.2f, Gravity: %.2f, DeltaTime: %.2f"), GravitySpeed, Gravity, DeltaTime));

	}

	// 최종 위치 적용
	SetActorLocation(NextPosition, true);
}
