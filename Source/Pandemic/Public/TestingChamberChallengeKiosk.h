#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TestingChamberChallengeKiosk.generated.h"

class ATestingChamberManager;
class UTestingChamberChallengeMetadata;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class PANDEMIC_API ADEPRECATED_TestingChamberChallengeKiosk : public AActor {
    GENERATED_BODY()
public:
    ADEPRECATED_TestingChamberChallengeKiosk(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnChallengesSelected(UTestingChamberChallengeMetadata* OptionalChallenge, UTestingChamberChallengeMetadata* KioskChallenge);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadChallenges(const ATestingChamberManager* Scenario);
    
};

