#include "DiscordActivity.h"

FDiscordActivity::FDiscordActivity() {
    this->Type = EDiscordActivityType::Playing;
    this->ApplicationId = 0;
    this->bInstance = false;
}

