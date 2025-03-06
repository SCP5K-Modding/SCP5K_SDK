#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService_BlackboardBase -FallbackName=BTService_BlackboardBase
#include "BTService_LookAround.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTService_LookAround : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookSpeed;
    
    UBTService_LookAround();

};

