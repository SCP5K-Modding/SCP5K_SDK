#pragma once
#include "CoreMinimal.h"
#include "Storylet.h"
#include "StoryletLevelDefinition.generated.h"

USTRUCT(BlueprintType)
struct STORYLETS_API FStoryletLevelDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStorylet> ActiveDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStorylet> InactiveDefinitions;
    
    FStoryletLevelDefinition();
};

