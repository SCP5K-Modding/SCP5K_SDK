#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "SeasonalEvent.h"
#include "SeasonalEventsSubsystem.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API USeasonalEventsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeasonalEvent> SeasonalEvents;
    
    USeasonalEventsSubsystem();

};

