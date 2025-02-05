// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UBoxComponent;
class USkeletalMeshComponent;
class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class SEVEN_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	AMyPawn();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Capsule");
	UBoxComponent* BoxComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh");
	USkeletalMeshComponent* SkeletalMeshComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera");
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera");
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Speed")
	float initialSpeed = 300.0f; // 초기 속도 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed");
	float MoveSpeed; // 속도 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed");
	float LookSpeed = 5.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed");
	float UpSpeed = 300.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed");
	float DownSpeed = -300.0f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Speed");
	float Gravity = -980.0f; // 중력 가속도
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Speed");
	float GravitySpeed = 0.0f; // 현재 중력 속도
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Speed");
	float AirControl = 0.3f; // 공중에서 움직일 수 있지만 속도를 제한
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Speed");
	float RollSpeed = 10.0f;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void MoveForward(const FInputActionValue& value);

	UFUNCTION()
	void MoveRight(const FInputActionValue& value);

	UFUNCTION()
	void Look(const FInputActionValue& value);

	UFUNCTION()
	void Up(const FInputActionValue& value);

	UFUNCTION()
	void Down(const FInputActionValue& value);

	UFUNCTION()
	void DroneMove(const FInputActionValue& value);

	UFUNCTION()
	void DroneLook(const FInputActionValue& value);

	UFUNCTION()
	void DroneWheel(const FInputActionValue& value);

	UFUNCTION()
	void Hovering(const FInputActionValue& value);

	virtual void Tick(float DeltaTime) override;
};
