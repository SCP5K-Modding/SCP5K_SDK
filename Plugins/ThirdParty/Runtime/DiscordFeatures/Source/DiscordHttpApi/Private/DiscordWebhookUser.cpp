#include "DiscordWebhookUser.h"

FDiscordWebhookUser::FDiscordWebhookUser() {
    this->ID = 0;
    this->bBot = false;
    this->bSystem = false;
    this->bMfaEnabled = false;
    this->bVerified = false;
    this->PremiumType = EDiscordWebhookPremiumType::None;
}

