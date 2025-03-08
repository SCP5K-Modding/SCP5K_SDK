#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_DefaultFocus.h"
#include "BTService_LookFocus.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTService_LookFocus : public UBTService_DefaultFocus {
    GENERATED_BODY()
public:
    UBTService_LookFocus();

};

