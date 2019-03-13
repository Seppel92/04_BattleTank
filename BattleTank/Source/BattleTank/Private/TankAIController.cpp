// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possessing a tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController possessing %s"), *ControlledTank->GetName())
	}
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AIController Begin Play"))
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}