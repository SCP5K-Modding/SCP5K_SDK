#pragma once
#include "CoreMinimal.h"
#include "EClockworkDialSetting.h"
#include "ClockworkDialPressureSettings.generated.h"

USTRUCT(BlueprintType)
struct FClockworkDialPressureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClockworkDialSetting DialSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TokenCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePressure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressureIncrementation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPressure;
    
    PANDEMIC_API FClockworkDialPressureSettings();
};

