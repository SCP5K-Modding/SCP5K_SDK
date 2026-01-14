#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ProximitySubsystem.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UProximitySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UProximitySubsystem();

};

