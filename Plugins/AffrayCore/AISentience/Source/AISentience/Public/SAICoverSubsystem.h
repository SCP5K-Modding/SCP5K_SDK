#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "SAICoverSubsystem.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAICoverSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    USAICoverSubsystem();

};

