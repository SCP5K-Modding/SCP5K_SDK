#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_DisableCollision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROOTMOVEMENT_API UAnimNotifyState_DisableCollision : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_DisableCollision();

};

