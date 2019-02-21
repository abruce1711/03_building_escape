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

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	// Angle the door opens
	UPROPERTY(VisibleAnywhere)
	float OpenAngle = 90.0f;

	// Pressure plate that triggers door open
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;

	// The actor that trigger the pressure plate
	UPROPERTY(EditAnywhere)
	AActor* ActorThatOpens; // Remember pawn inherits from actor - we are using a pawn at the moment
		
};
