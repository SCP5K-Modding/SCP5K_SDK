#pragma once
#include "CoreMinimal.h"
#include "FPSItemData.h"
#include "FPSUtilityItemData.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class FPSCONTROLLER_API UFPSUtilityItemData : public UFPSItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLimitedUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> UseMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ItemUseMontage;
    
    UFPSUtilityItemData();

};

