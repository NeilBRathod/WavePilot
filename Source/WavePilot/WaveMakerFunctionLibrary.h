// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WaveMakerFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class WAVEPILOT_API UWaveMakerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	public:

    UFUNCTION(BlueprintCallable, Category="WaveMaker")
    static float GetPawnSpeed(const AActor* Actor);
};
