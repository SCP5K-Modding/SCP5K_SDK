#include "HUDElementVisibility.h"

FHUDElementVisibility::FHUDElementVisibility() {
    this->PlayerHealthVisibility = EUIVisibility::AlwaysVisible;
    this->OtherHealthVisibility = EUIVisibility::AlwaysVisible;
    this->AmmoCountVisibility = EUIVisibility::AlwaysVisible;
    this->ItemModeVisibility = EUIVisibility::AlwaysVisible;
    this->HotbarVisibility = EUIVisibility::AlwaysVisible;
    this->PVPScoreVisibility = EUIVisibility::AlwaysVisible;
}

