#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitAnimCriteria.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct PANDEMIC_API FHitAnimCriteria {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> ValidDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitBodyQuadrantFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ValidHitBones;
    
    FHitAnimCriteria();
};

