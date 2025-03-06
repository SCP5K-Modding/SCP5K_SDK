#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameActions -ObjectName=GameAction -FallbackName=GameAction
#include "SetWaterLevelGameAction.generated.h"

class AWaterLevelController;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API USetWaterLevelGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWaterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterLevelController* WaterLevelController;
    
    USetWaterLevelGameAction();

};

