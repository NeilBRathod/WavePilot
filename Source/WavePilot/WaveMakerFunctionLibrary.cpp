// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveMakerFunctionLibrary.h"
#include "GameFramework/Actor.h"

float UWaveMakerFunctionLibrary::GetPawnSpeed(const AActor* Actor) {
    if (!Actor) {
        return 0.0f;
    }

    FVector Velocity = Actor->GetVelocity();
    float Speed = Velocity.Size();
    return Speed;
}