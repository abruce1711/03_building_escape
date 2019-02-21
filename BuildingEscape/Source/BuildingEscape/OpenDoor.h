// Copyright Andrew Bruce 2019

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();
	void CloseDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	AActor* Owner;

	// Angle the door opens
	UPROPERTY(EditAnywhere)
	float OpenAngle = 0.f;

	// Angle the door closes
	float CloseAngle = 90.f;

	// Pressure plate that triggers door open
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;

	// Amout of time is open
	UPROPERTY(EditAnywhere)
	float DoorCloseDelay = 1.f;

	float LastDoorOpenTime;

	// The actor that trigger the pressure plate
	AActor* ActorThatOpens; // Remember pawn inherits from actor - we are using a pawn at the moment
		
};
