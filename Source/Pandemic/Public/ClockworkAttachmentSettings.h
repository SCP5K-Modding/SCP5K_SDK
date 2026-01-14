#pragma once
#include "CoreMinimal.h"
#include "ClockworkAttachmentSettings.generated.h"

USTRUCT(BlueprintType)
struct FClockworkAttachmentSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttachments;
    
    PANDEMIC_API FClockworkAttachmentSettings();
};

