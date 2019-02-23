// Copyright Andrew Bruce 2019
#include "OpenDoor.h"
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
	
	// We are searching top down here. Getting the world, then the player controller (mind), then the pawn (body)
	// We can assign this to Actor that opens because pawn inherits from actor
	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
}

void UOpenDoor::OpenDoor()
{
	// Sets the the actors rotation on z axis
	for (float i = 0; i <= OpenAngle; i ++) {
		Owner->SetActorRotation(FRotator(0.f, i, 0.f));
	}
}

void UOpenDoor::CloseDoor()
{
	// Sets the the actors rotation on z axis
	Owner->SetActorRotation(FRotator(0.f, CloseAngle, 0.f));
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Poll trigger volume every frame
	if (PressurePlate->IsOverlappingActor(ActorThatOpens)) {
		OpenDoor();

		// Stored when door opened
		LastDoorOpenTime = GetWorld()->GetTimeSeconds();
	}

	// Closes the door after a set delay
	if (LastDoorOpenTime + DoorCloseDelay <= GetWorld()->GetTimeSeconds()) {
		CloseDoor();
	}
}

