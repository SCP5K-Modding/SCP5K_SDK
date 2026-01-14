#pragma once
#include "CoreMinimal.h"
#include "StagingAreaPlayerData.generated.h"

class APlayerState;
class ATestingChamberUpgradeRoom;
class ULevelStreamingDynamic;

USTRUCT(BlueprintType)
struct FStagingAreaPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ULevelStreamingDynamic> StreamingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATestingChamberUpgradeRoom> UpgradeRoom;
    
    PANDEMIC_API FStagingAreaPlayerData();
};

