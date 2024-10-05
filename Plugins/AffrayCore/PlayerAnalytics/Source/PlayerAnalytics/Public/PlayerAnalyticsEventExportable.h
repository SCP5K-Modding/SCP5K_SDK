#pragma once
#include "CoreMinimal.h"
#include "PlayerAnalyticsEvent.h"
#include "PlayerAnalyticsEventExportable.generated.h"

USTRUCT(BlueprintType)
struct PLAYERANALYTICS_API FPlayerAnalyticsEventExportable : public FPlayerAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerID;
    
    FPlayerAnalyticsEventExportable();
};

