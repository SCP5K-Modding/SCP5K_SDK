#include "DiscordGatewayActivity.h"

FDiscordGatewayActivity::FDiscordGatewayActivity() {
    this->Type = EDiscordGatewayActivity::Game;
    this->CreatedAt = 0;
    this->ApplicationId = 0;
    this->bInstance = false;
}

