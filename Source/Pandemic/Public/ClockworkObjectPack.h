#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ClockworkObjectPack.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FClockworkObjectPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, uint8> Objects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RequiredTeamRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiplyNonWeaponsByTeamRank;
    
    PANDEMIC_API FClockworkObjectPack();
};

