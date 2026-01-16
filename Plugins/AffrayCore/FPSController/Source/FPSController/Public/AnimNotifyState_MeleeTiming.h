#pragma once
#include "CoreMinimal.h"
#include "EMeleeTimingType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_MeleeTiming.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FPSCONTROLLER_API UAnimNotifyState_MeleeTiming : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeleeTimingType Type;
    
    UAnimNotifyState_MeleeTiming();

};

