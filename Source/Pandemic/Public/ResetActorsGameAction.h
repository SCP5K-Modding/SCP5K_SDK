#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "ResetActorsGameAction.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API UResetActorsGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToReset;
    
    UResetActorsGameAction();

};

