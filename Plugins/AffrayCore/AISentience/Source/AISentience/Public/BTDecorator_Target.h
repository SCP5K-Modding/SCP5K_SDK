#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_BlackboardBase -FallbackName=BTDecorator_BlackboardBase
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EArithmeticKeyOperation -FallbackName=EArithmeticKeyOperation
#include "EDecoratorTargetTestTypes.h"
#include "BTDecorator_Target.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTDecorator_Target : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDecoratorTargetTestTypes TestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EArithmeticKeyOperation::Type> ArithmeticOperation;
    
    UBTDecorator_Target();

};

