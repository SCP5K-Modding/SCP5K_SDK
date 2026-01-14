#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "GameplayTagStack.h"
#include "GameplayTagStackContainer.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagStackContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagStack> Stacks;
    
public:
    STORYLETS_API FGameplayTagStackContainer();
};

