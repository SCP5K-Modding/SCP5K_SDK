#include "ModularLineAsset.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/SplineComponent.h"

AModularLineAsset::AModularLineAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Mesh"));
    this->CornerMeshComponent = NULL;
    this->Mesh = NULL;
    this->OuterCornerMesh = NULL;
    this->InnerCornerMesh = NULL;
    this->UpCornerMesh = NULL;
    this->DownCornerMesh = NULL;
    this->AssetSize = 100.00f;
    this->CornerRadius = 200.00f;
    this->Thickness = 1.00f;
    this->MeshComponent->SetupAttachment(RootComponent);
}

void AModularLineAsset::RefreshAsset() {
}


