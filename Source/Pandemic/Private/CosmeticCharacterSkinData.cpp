#include "CosmeticCharacterSkinData.h"

UCosmeticCharacterSkinData::UCosmeticCharacterSkinData() {
    this->bAllowGenderSlider = true;
    this->bAllowSkinToneSlider = true;
    this->SkinToneCurve = NULL;
    this->bHasWatch = true;
    this->WatchMaterialIndex = 0;
}

bool UCosmeticCharacterSkinData::FindSlot(FGameplayTag SlotTag, FCosmeticSlot& Slot) {
    return false;
}


