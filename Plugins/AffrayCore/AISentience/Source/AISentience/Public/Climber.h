#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EClimbingType.h"
#include "Climber.generated.h"

class ANavLinkProxy;

UINTERFACE(Blueprintable)
class UClimber : public UInterface {
    GENERATED_BODY()
};

class IClimber : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 GetAvailableClimbingModes();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Climb(FVector Destination, FRotator Rotation, ANavLinkProxy* NavLink, EClimbingType Type);
    
};

