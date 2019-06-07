// Copyright Andrew Bruce 2019
#include "OpenDoor.h"
#define OUT
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	//Gets the Actor linked with this component
	Owner = GetOwner();
	if (!PressurePlate)
		UE_LOG(LogTemp, Error, TEXT("Cannot find pressure plate on %s"), *GetOwner()->GetName());
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// Poll trigger volume every frame
	if (GetTotalMassOnPlate() > TriggerMass)
	{
		OnOpenRequest.Broadcast();
	}
	else 
	{
		OnCloseRequest.Broadcast();
	}
}

float UOpenDoor::GetTotalMassOnPlate()
{
	float TotalMass = 0.f;

	// Find overlapping actors
	TArray<AActor*> OverlappingActors;
	if (!PressurePlate) return TotalMass;
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	//Iterate through them adding masses
	for (const auto& actor : OverlappingActors)
	{
		TotalMass += actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}

	return TotalMass;
}

