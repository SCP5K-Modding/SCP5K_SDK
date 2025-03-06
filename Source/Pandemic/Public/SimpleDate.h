#pragma once
#include "CoreMinimal.h"
#include "EBPMonthOfYear.h"
#include "SimpleDate.generated.h"

USTRUCT(BlueprintType)
struct FSimpleDate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBPMonthOfYear Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DayOfMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Hour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Minute;
    
    PANDEMIC_API FSimpleDate();
};

