#include "MyPlayerController.h"
#include "EnhancedInputSubsystems.h"

AMyPlayerController::AMyPlayerController()
	:DefaultInputMappingContext(nullptr),
	MoveForwardAction(nullptr),
	MoveRightAction(nullptr),
	LookAction(nullptr),
	UpAction(nullptr),
	DownAction(nullptr),
	HoveringAction(nullptr),
	DroneMoveAction(nullptr),
	DroneLookAction(nullptr),
	DroneWheelAction(nullptr)
{
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (DefaultInputMappingContext)
			{
				Subsystem->AddMappingContext(DefaultInputMappingContext, 0);
			}
		}
	}
}

void AMyPlayerController::OnToggleHovering()
{
	bIsHovering = !bIsHovering; // 호버링 상태 반전
	if (GEngine)
	{
		FString HoverState = bIsHovering ? "Hovering Mode On" : "Hovering Mode Off";
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, HoverState);
	}
	ToggleHoveringMode(bIsHovering);
}

void AMyPlayerController::ToggleHoveringMode(bool bEnableHovering)
{
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (Subsystem->HasMappingContext(bEnableHovering ? DefaultInputMappingContext : HoveringInputMappingContext))
			{
				Subsystem->RemoveMappingContext(bEnableHovering ? DefaultInputMappingContext : HoveringInputMappingContext);
			}
			Subsystem->AddMappingContext(bEnableHovering ? HoveringInputMappingContext : DefaultInputMappingContext, 0);
		}
	}
}