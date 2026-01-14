#include "TestingChamberChallengeMetadata.h"

UTestingChamberChallengeMetadata::UTestingChamberChallengeMetadata() {
    this->ChallengeWeight = 1.00f;
    this->bUseQueryInsteadOfTags = false;
    this->ScoreRewardOnlyAlive = true;
    this->TokenRewardOnlyAlive = true;
    this->PlayerScoreReward = 10;
    this->bUseDefaultChamberReward = false;
    this->TeamScoreReward = 2;
    this->TokenReward = 2;
}

int32 UTestingChamberChallengeMetadata::GetTokenReward(const ATestingChamberManager* TestingChamber) const {
    return 0;
}

int32 UTestingChamberChallengeMetadata::GetTeamScoreReward(const ATestingChamberManager* TestingChamber) const {
    return 0;
}


