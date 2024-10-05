#include "FPSItemData.h"

UFPSItemData::UFPSItemData() {
    this->InternalName = TEXT("MyItem");
    this->TargetSlot = 1;
    this->ItemType = EItemType::Generic;
    this->ItemWeightCategory = EItemWeight::Medium;
    this->MovementSpeedMultiplier = 1.00f;
    this->EquipTime = 0.50f;
    this->DequipTime = 0.50f;
    this->CheckAmmoTime = 1.00f;
    this->ItemWeight = 5.00f;
    this->InspectTime = 3.00f;
    this->bCanBash = true;
    this->BashDamage = 40.00f;
    this->BashRange = 250.00f;
    this->BashDelay = 0.20f;
    this->BashTime = 0.65f;
    this->BashFailTime = 0.60f;
    this->KickTime = 0.45f;
    this->BashDamageType = NULL;
    this->BashSound = NULL;
    this->BashFailSound = NULL;
    this->EquipSound = NULL;
    this->DequipSound = NULL;
    this->DefaultCosmetic = -1;
}


