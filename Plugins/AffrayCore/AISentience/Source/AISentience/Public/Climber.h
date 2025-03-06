#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
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

