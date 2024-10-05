#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "CompositeGameAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEACTIONS_API UCompositeGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameAction*> Actions;
    
    UCompositeGameAction();

};

