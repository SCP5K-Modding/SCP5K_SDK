#pragma once
#include "CoreMinimal.h"
#include "EMapUnlockCondition.h"
#include "IndividualMapData.generated.h"

class AGameModeBase;
class UMapData;

USTRUCT(BlueprintType)
struct FIndividualMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMapData> MapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGameModeBase> OverrideGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapUnlockCondition UnlockCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMapData> UnlockMapData;
    
    PANDEMIC_API FIndividualMapData();
};

