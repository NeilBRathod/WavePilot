// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveMakerFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"

float UWaveMakerFunctionLibrary::GetPawnSpeed(const AActor* Actor) {
    if (!Actor) {
        return 0.0f;
    }

    FVector Velocity = Actor->GetVelocity();
    float Speed = Velocity.Size();
    return Speed;
}

float UWaveMakerFunctionLibrary::GetDistanceBetweenActors(AActor* ActorA, AActor* ActorB) {
    if (ActorA && ActorB) {
        FVector LocationA = ActorA->GetActorLocation();
        FVector LocationB = ActorB->GetActorLocation();
        return FVector::Dist(LocationA, LocationB);
    }
    return 0.0f;
}