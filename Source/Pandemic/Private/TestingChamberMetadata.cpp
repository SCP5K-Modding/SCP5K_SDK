#include "TestingChamberMetadata.h"

UTestingChamberMetadata::UTestingChamberMetadata() {
    this->DefaultChallengeKioskTeamScoreReward = 2;
    this->DefaultChallengeKioskTokenReward = 2;
    this->DefaultChallengeSecondaryTeamScoreReward = 2;
    this->DefaultChallengeSecondaryTokenReward = 2;
    this->bShowInLists = true;
}

bool UTestingChamberMetadata::DoesChamberSupportQuestion(const FTestingChamberQuestion& Question) const {
    return false;
}

bool UTestingChamberMetadata::DoesChamberSupportChallenge(const UTestingChamberChallengeMetadata* ChallengeMetadata) const {
    return false;
}


