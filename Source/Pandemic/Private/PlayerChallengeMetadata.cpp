#include "PlayerChallengeMetadata.h"

UPlayerChallengeMetadata::UPlayerChallengeMetadata() {
    this->ChallengeDifficulty = 1;
    this->ChallengeBP = NULL;
    this->bUsesFlowAsset = true;
}

APlayerChallenge* UPlayerChallengeMetadata::InstantiateChallenge(const UObject* WorldContextObject) {
    return NULL;
}

void UPlayerChallengeMetadata::CancelChallenge(APlayerChallenge* ChallengeToCancel) {
}


