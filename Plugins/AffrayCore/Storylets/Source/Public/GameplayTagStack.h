#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

#include "GameplayTagStack.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagStack : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
public:
    STORYLETS_API FGameplayTagStack();
};

