#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "DoorInteraction.generated.h"

class AElectronicDoor;
class UNavLinkCustomComponent;

UINTERFACE(Blueprintable)
class UDoorInteraction : public UInterface {
    GENERATED_BODY()
};

class IDoorInteraction : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractDoor(FVector TravelDirection, FVector TravelDestination, AElectronicDoor* Door, const UNavLinkCustomComponent* NavLinkComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteractWithDoor(const AElectronicDoor* Door) const;
    
};

