// Fill out your copyright notice in the Description page of Project Settings.


#include "HanifRPGTask/Wira/WiraCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HanifRPGTask/Components/HealthComponent.h"

// Sets default values //anyhing changes in constructor can click compile in UE
AWiraCharacter::AWiraCharacter()  //start UnrealEngine
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Wira Camera"));
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;  //enable this to picth and yaw

	SwordMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sword Mesh"));
	SwordMesh->SetupAttachment(GetMesh(), FName("SwordSocket"));

}

// Called when the game starts or when spawned
void AWiraCharacter::BeginPlay()	//this when the game start
{
	Super::BeginPlay();
	
}

// Called every frame
void AWiraCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWiraCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) //keyboard@controller funtion
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAxis("MoveForward", this, &AWiraCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AWiraCharacter::MoveRight);

	PlayerInputComponent->BindAxis("TurnCamera", this, &AWiraCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AWiraCharacter::LookUp);

	PlayerInputComponent->BindAction("Attack1", IE_Pressed, this, &AWiraCharacter::StartAttack1);
	PlayerInputComponent->BindAction("Attack2", IE_Pressed, this, &AWiraCharacter::StartAttack2);

}

void AWiraCharacter::MoveForward(float InputValue)
{
	FVector ForwardDirection = GetActorForwardVector();  //get forward basic direction
	AddMovementInput(ForwardDirection, InputValue);  //changes char forward location and its input value(1/-1)
}

void AWiraCharacter::MoveRight(float InputValue)
{
	FVector RightDirection = GetActorRightVector();	//get right basic direction
	AddMovementInput(RightDirection, InputValue);	//changes char right location and its input value(1/-1)
}

void AWiraCharacter::Turn(float InputValue)
{
	AddControllerYawInput(InputValue);
}

void AWiraCharacter::LookUp(float InputValue)
{	
	AddControllerPitchInput(InputValue);
}

void AWiraCharacter::StartAttack1()
{
	//Call attack by sword animation
	if(AttackAnimaton && !bIsAttacking)  
	{
		GetMesh()->PlayAnimation(AttackAnimaton, false);
		bIsAttacking = true; //set flag to avoid twice attack
	}
}

void AWiraCharacter::LineTrace()
{
	//Deal damage to enemy in range

	// Get socket locations
	FVector StartLocation = SwordMesh->GetSocketLocation(FName("Start"));
	FVector EndLocation = SwordMesh->GetSocketLocation(FName("End"));

	// Setup linetrace
	FHitResult HitResult;
	FCollisionQueryParams TraceParams;
	TraceParams.AddIgnoredActor(this);

	// Linetrace
	GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, TraceParams);

	// Debug lines
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, 1, 0, 1);

	if (HitResult.bBlockingHit)
	{
		AActor* ActorHit = HitResult.GetActor();
		//ActorHit->Destroy();
		UHealthComponent* EnemyHit = ActorHit->FindComponentByClass<UHealthComponent>();

		if (IsValid(EnemyHit))
		{
			EnemyHit->TakeDamage(Damage);
		}
	}
}

void AWiraCharacter::StartAttack2()
{
	//Call attack by kick animation
}


