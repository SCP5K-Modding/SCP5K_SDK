#include "KickData.h"

FKickData::FKickData() {
    this->InitiatingPlayer = NULL;
    this->PlayerToKick = NULL;
    this->TeamIndex = 0;
    this->NoVoteCount = 0;
    this->YesVoteCount = 0;
    this->CurrentState = EVoteKickState::Disabled;
    this->VoteResult = 0;
}

