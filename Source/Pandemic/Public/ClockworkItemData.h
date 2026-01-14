#pragma once
#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "EClockworkItemCategory.h"
#include "ClockworkItemData.generated.h"

USTRUCT(BlueprintType)
struct FClockworkItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClockworkItemCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ObjectRankTag;
    
    PANDEMIC_API FClockworkItemData();
};

