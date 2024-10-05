#include "LevelStreamingInfo.h"

FLevelStreamingInfo::FLevelStreamingInfo() {
    this->StreamingState = EStreamingState::Visible;
    this->bBlockOnLoad = false;
}

