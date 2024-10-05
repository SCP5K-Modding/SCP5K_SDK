#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
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

