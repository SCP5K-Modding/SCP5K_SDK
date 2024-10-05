#pragma once
#include "CoreMinimal.h"
#include "Date.generated.h"

USTRUCT(BlueprintType)
struct FDate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    USERINTERFACE_API FDate();
};

