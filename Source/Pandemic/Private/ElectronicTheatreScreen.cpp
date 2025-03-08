#include "ElectronicTheatreScreen.h"
#include "Components/StaticMeshComponent.h"
#include "TheatreScreenComponent.h"

AElectronicTheatreScreen::AElectronicTheatreScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->BrokenParameterName = TEXT("Broken");
    this->AlertDamageThreshold = 30.00f;
    this->ScreenComponent = CreateDefaultSubobject<UTheatreScreenComponent>(TEXT("ScreenComponent"));
    this->MeshComponent->SetupAttachment(RootComponent);
    this->ScreenComponent->SetupAttachment(MeshComponent);
}

void AElectronicTheatreScreen::OnUnpossessedByAnomaly_Implementation(ATheatreAnomaly* TheatreAnomaly) {
}

void AElectronicTheatreScreen::OnPossessedByAnomaly_Implementation(ATheatreAnomaly* TheatreAnomaly) {
}


