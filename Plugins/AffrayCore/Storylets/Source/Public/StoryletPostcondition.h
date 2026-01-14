#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EStoryletOperationType.h"
#include "StoryletPostcondition.generated.h"

USTRUCT(BlueprintType)
struct FStoryletPostcondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoryletOperationType OperationType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OperationValue;
    
    STORYLETS_API FStoryletPostcondition();
};

