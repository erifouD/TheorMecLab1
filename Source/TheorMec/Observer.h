// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Observer.generated.h"

UCLASS()
class THEORMEC_API AObserver : public APawn
{
	GENERATED_BODY()

public:
	AObserver();

protected:
	virtual void BeginPlay() override;
};
