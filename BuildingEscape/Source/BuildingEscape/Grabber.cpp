// Copyright Andrew Bruce 2019

#include "Grabber.h"

#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

// Blank macro
#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Get Player viewpoint
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	// We are marking our out parameters with our blank OUT macro, it won't do anything it's just a reminder
	// an out parameter will be changed by the function we pass them in to, it doesn't return anything it just changes what we pass in to it
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
	// Log out every tick
	UE_LOG(LogTemp, Warning, TEXT("Location: %s, Direction: %s"), *PlayerViewPointLocation.ToString(), *PlayerViewPointRotation.ToString());

	// Ray-cast out to reach distance

	// See what we hit
}

