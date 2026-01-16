#include "FPSItemData.h"

UFPSItemData::UFPSItemData() {
    this->InternalName = TEXT("MyItem");
    this->TargetSlot = 1;
    this->bCanEquipViaScrollWheel = true;
    this->ItemType = EItemType::Generic;
    this->ItemWeightCategory = EItemWeight::Medium;
    this->MovementSpeedMultiplier = 1.00f;
    this->EquipTime = 0.50f;
    this->FirstEquipTime = 2.00f;
    this->DequipTime = 0.50f;
    this->CheckAmmoTime = 1.00f;
    this->bIsTwoHanded = true;
    this->InspectTime = 3.00f;
    this->bRequiresCollision = false;
    this->bCanLowReady = true;
    this->bCanForceLowReady = true;
    this->ItemWeight = 5.00f;
    this->bCanBash = true;
    this->BashDamage = 40.00f;
    this->BashRange = 250.00f;
    this->BashDelay = 0.20f;
    this->BashTime = 0.65f;
    this->BashFailTime = 0.60f;
    this->KickTime = 0.45f;
    this->BashDamageType = NULL;
    this->PickupSound = NULL;
    this->DropSound = NULL;
    this->BashSound = NULL;
    this->BashFailSound = NULL;
    this->EquipSound = NULL;
    this->FirstEquipSound = NULL;
    this->DequipSound = NULL;
    this->DefaultCosmetic = -1;
    this->bUseSimpleThirdPersonBlending = false;
    this->bInvertLeftHandIKCurve = false;
    this->bInvertRightHandIKCurve = false;
    this->bInvertLeftHandFollowCurve = false;
    this->bInvertRightHandFollowCurve = false;
}

int32 UFPSItemData::GetCosmeticIndex(FName CosmeticName) const {
    return 0;
}


