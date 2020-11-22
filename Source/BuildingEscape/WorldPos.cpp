// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPos.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPos::UWorldPos()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPos::BeginPlay()
{
	Super::BeginPlay();

	FString ObjectName = GetOwner()->GetName();

	UE_LOG(LogTemp, Warning, TEXT("Object name is: %s"), *GetOwner()->GetName());

	FString ObjectPosition = GetOwner()->GetActorLocation().ToString();

	UE_LOG(LogTemp, Warning, TEXT("%st position inworld is: %s"), *ObjectName, *ObjectPosition );



	// FString Log = TEXT("Hello!");
	// FString* PrtLog = &Log;
	// Log.Len();
	// (*PrtLog).Len();
	// PrtLog->Len();
	// UE_LOG(LogTemp, Warning, TEXT("%s"), **PrtLog);


}


// Called every frame
void UWorldPos::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

