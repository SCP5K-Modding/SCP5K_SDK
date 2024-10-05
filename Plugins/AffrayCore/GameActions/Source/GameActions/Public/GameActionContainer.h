#pragma once
#include "CoreMinimal.h"
#include "GameActionContainer.generated.h"

class UGameAction;

USTRUCT(BlueprintType)
struct FGameActionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* Action;
    
    GAMEACTIONS_API FGameActionContainer();
};

