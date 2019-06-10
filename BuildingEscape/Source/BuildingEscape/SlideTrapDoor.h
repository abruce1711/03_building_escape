// Copyright Andrew Bruce 2019

#pragma once
#include "Engine/TriggerVolume.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SlideTrapDoor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTrapDoorRequest);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API USlideTrapDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USlideTrapDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate = nullptr;

	// Amount of weight it takes to open the door
	UPROPERTY(EditAnywhere)
		float TriggerMass = 30.f;

	UPROPERTY(BlueprintAssignable)
		FTrapDoorRequest OnOpenRequest;

	UPROPERTY(BlueprintAssignable)
		FTrapDoorRequest OnCloseRequest;

	// Gets current mass on plate
	float GetTotalMassOnPlate();
};
