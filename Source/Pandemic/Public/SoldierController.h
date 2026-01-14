#pragma once
#include "CoreMinimal.h"
//#include "RangedAccuracySettings.h"
#include "SAIController.h"
#include "SoldierController.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ASoldierController : public ASAIController {
    GENERATED_BODY()
public:
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FRangedAccuracySettings AccuracySettings;
    
    ASoldierController(const FObjectInitializer& ObjectInitializer);

};

