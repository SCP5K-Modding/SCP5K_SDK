#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_LookAround.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTService_LookAround : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookSpeed;
    
    UBTService_LookAround();

};

