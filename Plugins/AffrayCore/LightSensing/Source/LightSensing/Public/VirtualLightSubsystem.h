#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "VirtualLightSubsystem.generated.h"

UCLASS(Blueprintable)
class LIGHTSENSING_API UVirtualLightSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UVirtualLightSubsystem();

};

