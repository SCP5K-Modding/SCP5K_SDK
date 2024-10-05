#include "ElectronicLight.h"

AElectronicLight::AElectronicLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->EmissiveIntensity = 5.00f;
    this->bOverrideColor = false;
    this->bUseDynamicMaterialInstance = false;
    this->EmissiveColorParameterName = TEXT("Emissive Color");
    this->EmissiveMaterialIndex = 1;
    this->EmissiveParameterName = TEXT("Emissive Intensity");
    this->LightMaterial = NULL;
    this->MeshComponent = NULL;
    this->PrimaryLight = NULL;
}

void AElectronicLight::SetColor_Implementation(FLinearColor NewColor) {
}


