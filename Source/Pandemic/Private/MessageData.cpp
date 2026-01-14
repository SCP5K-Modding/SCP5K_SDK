#include "MessageData.h"

FMessageData::FMessageData() {
    this->bUseMessageStartTime = false;
    this->TimeUntilMessageStarts = 0.00f;
    this->bUseMessageDuration = false;
    this->TimeUntilMessageEnds = 0.00f;
}

