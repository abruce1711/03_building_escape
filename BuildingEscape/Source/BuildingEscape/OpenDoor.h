// Copyright Andrew Bruce 2019

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDoorRequest);

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

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	AActor* Owner = nullptr;

	// Pressure plate that triggers door open
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate = nullptr;

	// Amout of time is open
	UPROPERTY(EditAnywhere)
	float TriggerMass = 30.f;

	UPROPERTY(BlueprintAssignable)
	FDoorRequest OnOpenRequest;

	UPROPERTY(BlueprintAssignable)
	FDoorRequest OnCloseRequest;

	// Gets current mass on plate
	float GetTotalMassOnPlate();
		
};
