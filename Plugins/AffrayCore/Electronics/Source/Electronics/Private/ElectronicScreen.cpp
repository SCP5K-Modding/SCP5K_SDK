#include "ElectronicScreen.h"

AElectronicScreen::AElectronicScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseOverrideTexture = false;
    this->TextureParameterName = TEXT("Emission");
    this->ViewTimeout = 2.00f;
    this->ViewDistance = 600.00f;
    this->bSetLightTextureFromScreen = false;
}

void AElectronicScreen::UpdateTexture() {
}

void AElectronicScreen::SetTexture(UTexture* Texture) {
}

bool AElectronicScreen::IsBeingViewed() const {
    return false;
}

void AElectronicScreen::AssetLoaded() {
}


