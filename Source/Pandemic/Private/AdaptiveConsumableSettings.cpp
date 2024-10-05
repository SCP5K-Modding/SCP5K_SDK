#include "AdaptiveConsumableSettings.h"

UAdaptiveConsumableSettings::UAdaptiveConsumableSettings() {
    this->NearbyConsumableRange = 3000.00f;
    this->TargetAmmoPercentage = 0.65f;
    this->PartialAmmoPickupWeight = 0.25f;
    this->FullAmmoPickupWeight = 0.50f;
    this->MinAdditionalMags = 0;
    this->MaxAdditionalMags = 3;
    this->TargetHealthPercentage = 0.50f;
    this->MinAdditionalHealth = 0;
    this->MaxAdditionalHealth = 2;
    this->HealthPickupWeight = 0.50f;
}


