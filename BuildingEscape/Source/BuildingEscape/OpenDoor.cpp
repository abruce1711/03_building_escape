// Copyright Andrew Bruce 2019

#include "OpenDoor.h"
#include "GameFramework/Actor.h"

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
	
	//Gets the Actor
	AActor* Actor = GetOwner();

	// Create rotation
	FRotator NewRotation = FRotator(0.0f, 0.0f, 0.0f);

	// Sets the the actors rotation on z axis
	Actor->SetActorRotation(NewRotation);

	UE_LOG(LogTemp, Warning, TEXT("Test"))

	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

