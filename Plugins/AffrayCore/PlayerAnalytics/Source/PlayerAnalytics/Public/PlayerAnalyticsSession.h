#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "PlayerAnalyticsEvent.h"
#include "PlayerAnalyticsPlayer.h"
#include "PlayerAnalyticsSession.generated.h"

USTRUCT(BlueprintType)
struct PLAYERANALYTICS_API FPlayerAnalyticsSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerAnalyticsPlayer> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerAnalyticsEvent> GlobalEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime RecordingStartTime;
    
    FPlayerAnalyticsSession();
};

