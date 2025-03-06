#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService_DefaultFocus -FallbackName=BTService_DefaultFocus
#include "BTService_LookFocus.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTService_LookFocus : public UBTService_DefaultFocus {
    GENERATED_BODY()
public:
    UBTService_LookFocus();

};

