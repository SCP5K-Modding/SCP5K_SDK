#include "TestingChamberChallengeComponent.h"

UTestingChamberChallengeComponent::UTestingChamberChallengeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UTestingChamberChallengeComponent::OnChallengesSelected_Implementation(UTestingChamberChallengeMetadata* OptionalChallenge, UTestingChamberChallengeMetadata* KioskChallenge) {
}

void UTestingChamberChallengeComponent::LoadChallenges(const TSoftObjectPtr<UTestingChamberMetadata>& Chamber) {
}


