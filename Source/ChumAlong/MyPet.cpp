// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPet.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Sets default values
AMyPet::AMyPet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.bStartWithTickEnabled = true; //플레이하자마자 Tick처리
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyPet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();

	srand((unsigned int)time(NULL));
	CurrentLocation.X += ((float)(rand() % 200) / 100) - 1;
	CurrentLocation.Y += ((float)(rand() % 200) / 100) - 1;
	CurrentLocation.Z += ((float)(rand() % 200) / 100) - 1;
	
	UE_LOG(LogTemp, Log, TEXT("%s"), GetActorLocation().ToString());

	SetActorLocation(CurrentLocation);

}

