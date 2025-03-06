#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "BTService_LockTarget.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTService_LockTarget : public UBTService {
    GENERATED_BODY()
public:
    UBTService_LockTarget();

};

