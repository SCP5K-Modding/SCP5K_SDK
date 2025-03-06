#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SeasonalEvent.h"
#include "SeasonalEventsSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class PANDEMIC_API USeasonalEventsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeasonalEvent> SeasonalEvents;
    
    USeasonalEventsSettings();

};

