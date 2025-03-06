#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RageDamageConfig.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FRageDamageConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    PANDEMIC_API FRageDamageConfig();
};

