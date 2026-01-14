#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "GameplayTagContainer.h"
#include "DespawnGameAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API UDespawnGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnGroupId;
    
    UDespawnGameAction();

};

