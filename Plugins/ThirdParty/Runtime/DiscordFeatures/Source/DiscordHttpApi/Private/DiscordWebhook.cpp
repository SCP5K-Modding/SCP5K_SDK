#include "DiscordWebhook.h"

FDiscordWebhook::FDiscordWebhook() {
    this->ID = 0;
    this->Type = EDiscordWebhookType::None;
    this->GuildId = 0;
    this->ChannelId = 0;
}

