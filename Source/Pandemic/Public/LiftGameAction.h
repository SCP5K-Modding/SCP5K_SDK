#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameActions -ObjectName=GameAction -FallbackName=GameAction
#include "LiftGameAction.generated.h"

class AElectronicLift;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API ULiftGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElectronicLift* Lift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Floor;
    
    ULiftGameAction();

};

