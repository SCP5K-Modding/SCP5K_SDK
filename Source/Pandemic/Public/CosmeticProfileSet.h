#pragma once
#include "CoreMinimal.h"
#include "CosmeticProfile.h"
#include "CosmeticProfileSet.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticProfileSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCosmeticProfile> Profiles;
    
    PANDEMIC_API FCosmeticProfileSet();
};

