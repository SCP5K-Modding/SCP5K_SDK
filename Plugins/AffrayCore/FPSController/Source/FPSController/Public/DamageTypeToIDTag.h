#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "DamageTypeToIDTag.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FPSCONTROLLER_API FDamageTypeToIDTag : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    FDamageTypeToIDTag();
};

