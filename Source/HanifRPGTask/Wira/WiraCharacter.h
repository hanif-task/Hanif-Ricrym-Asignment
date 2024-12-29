// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WiraCharacter.generated.h"

UCLASS()
class HANIFRPGTASK_API AWiraCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWiraCharacter();

protected:  //anything within the player class
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	UPROPERTY(VisibleAnywhere) //add camera into bpwira character
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)  //add sword into bpwira character
	class UStaticMeshComponent* SwordMesh;

	UPROPERTY(EditAnywhere)
	class UAnimSequence* AttackAnimaton;

	void MoveForward(float InputValue);
	void MoveRight(float InputValue);

	void Turn(float InputValue);
	void LookUp(float InputValue);

	//Attack
	UPROPERTY(EditAnywhere)
	int Damage;

	void StartAttack1();  //for sword

	void StartAttack2();

public:

	UFUNCTION(BlueprintCallable)
	void LineTrace(); //need to call this when attack animation //sword

	UPROPERTY(BlueprintReadWrite)
	bool bIsAttacking;

};
