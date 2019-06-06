// Copyright Andrew Bruce 2019

#include "Grabber.h"

#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"

// Blank macro
#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
	FindPhysicsHandleComponent();
	SetupInputComponent();
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// If physics handle is attached
		// move the object that we're holding
}

// Grab method
void UGrabber::Grab()
{
	UE_LOG(LogTemp, Warning, TEXT("Grab Pressed"));

	// LINE TRACE and and check if we can reach any actors with physics body collision channel set
	GetFirstPhysicsBodyInReach();

	// If we hit something attach a physics handle
}

// Release grabber
void UGrabber::Release()
{
	UE_LOG(LogTemp, Warning, TEXT("Grab Released"));
	// Release physics handle
}

// Look for attached physics handle
void UGrabber::FindPhysicsHandleComponent()
{
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (!PhysicsHandle)
		UE_LOG(LogTemp, Error, TEXT("Cannot find physics handle on component: %s"), *GetOwner()->GetName());
}

// Look for attached input component
void UGrabber::SetupInputComponent()
{
	InputComp = GetOwner()->FindComponentByClass <UInputComponent>();
	if (InputComp)
	{
		UE_LOG(LogTemp, Error, TEXT("Input component found"));

		// Bind the input actions
		InputComp->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		InputComp->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot find input component on %s"), *GetOwner()->GetName());
	}
}

// Return hit for first physics body in reach
const FHitResult UGrabber::GetFirstPhysicsBodyInReach()
{
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	// Assigns the value of the GetPlayerViewPoint to our OUT variables
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);

	// Sets the end of the line trace
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;

	// Setup query params - ignores oursevles, the false is to detailed collision, false means simple
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());

	// Ray-cast out to reach distance
	FHitResult Hit;
	GetWorld()->LineTraceSingleByObjectType(
		OUT Hit,
		PlayerViewPointLocation,
		LineTraceEnd,
		// Means it will only collide with object that are of the type physics body
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	AActor* ActorHit = Hit.GetActor();
	if (ActorHit)
		UE_LOG(LogTemp, Warning, TEXT("Grab: %s"), *(ActorHit->GetName()))
	
	return FHitResult();
}

