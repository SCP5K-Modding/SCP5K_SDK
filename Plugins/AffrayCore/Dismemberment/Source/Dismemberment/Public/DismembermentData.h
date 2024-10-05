#pragma once
#include "CoreMinimal.h"
#include "EDismembermentType.h"
#include "DismembermentData.generated.h"

USTRUCT(BlueprintType)
struct FDismembermentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDismembermentType> DismembermentType;
    
    DISMEMBERMENT_API FDismembermentData();
};

