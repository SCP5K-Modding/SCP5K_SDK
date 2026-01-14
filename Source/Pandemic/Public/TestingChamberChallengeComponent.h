#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TestingChamberChallengeComponent.generated.h"

class UTestingChamberChallengeMetadata;
class UTestingChamberMetadata;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UTestingChamberChallengeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTestingChamberChallengeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnChallengesSelected(UTestingChamberChallengeMetadata* OptionalChallenge, UTestingChamberChallengeMetadata* KioskChallenge);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadChallenges(const TSoftObjectPtr<UTestingChamberMetadata>& Chamber);
    
};

