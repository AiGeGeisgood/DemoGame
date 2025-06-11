// Fill out your copyright notice in the Description page of Project Settings.


#include "InGame/Character/DemoGameCharacter.h"

#include "InGame/Component/InventoryComponent.h"

// Sets default values
ADemoGameCharacter::ADemoGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));

}

// Called when the game starts or when spawned
void ADemoGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADemoGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADemoGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

