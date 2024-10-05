#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "AFFGameplayTags.generated.h"

UINTERFACE(Blueprintable)
class UAFFGameplayTags : public UInterface {
    GENERATED_BODY()
};

class IAFFGameplayTags : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetGameplayTags();
    
};

