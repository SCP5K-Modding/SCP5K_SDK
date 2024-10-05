#include "Vote.h"

FVote::FVote() {
    this->VoteType = EVoteType::None;
    this->RequiredPercentage = 0.00f;
    this->Participants = 0;
    this->bEndWhenAllVoted = false;
    this->StartTime = 0;
    this->EndTime = 0;
}

