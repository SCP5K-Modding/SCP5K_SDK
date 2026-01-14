#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "GameplayTagContainer.h"
#include "GameAction_NotifyBus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API UGameAction_NotifyBus : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NotifyTags;
    
    UGameAction_NotifyBus();

};

