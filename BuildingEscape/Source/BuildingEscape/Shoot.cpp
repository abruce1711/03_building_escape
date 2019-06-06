// Copyright Andrew Bruce 2019


#include "Shoot.h"

#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UShoot::UShoot()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UShoot::Shoot()
{
	UE_LOG(LogTemp, Warning, TEXT("BANG"));
}

// Called when the game starts
void UShoot::BeginPlay()
{
	Super::BeginPlay();

	// ...
	ShootInput = GetOwner()->FindComponentByClass<UInputComponent>();
	if(ShootInput)
	{
		ShootInput->BindAction("Shoot", IE_Pressed, this, &UShoot::Shoot);
	}
	
}


// Called every frame
void UShoot::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

