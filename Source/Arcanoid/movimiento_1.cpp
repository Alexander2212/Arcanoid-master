// Fill out your copyright notice in the Description page of Project Settings.


#include "movimiento_1.h"

// Sets default values for this component's properties
Umovimiento_1::Umovimiento_1()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	MovementRadius = 5;
	
}


// Called when the game starts
void Umovimiento_1::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void Umovimiento_1::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	AActor* Parent = GetOwner();
	if (Parent)
	{
		// Find a new position for the object to go to
		auto NewPos = Parent->GetActorLocation() +
			FVector
			(
				FMath::FRandRange(2.5, -1) *MovementRadius,
				FMath::FRandRange(4, 0) *MovementRadius,
				FMath::FRandRange(1, 0) *MovementRadius
			);
		// Update the object's position
		Parent->SetActorLocation(NewPos);
	}
}

