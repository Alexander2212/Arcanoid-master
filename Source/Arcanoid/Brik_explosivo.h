// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brik.h"
#include "Brik_explosivo.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API ABrik_explosivo : public ABrik
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
};
