#include "ChatMessageContent.h"

FChatMessageContent::FChatMessageContent() {
    this->SelfPlayerState = NULL;
    this->ChatType = EChatType::Everyone;
    this->Team = 0;
    this->TargetPlayerState = NULL;
}

