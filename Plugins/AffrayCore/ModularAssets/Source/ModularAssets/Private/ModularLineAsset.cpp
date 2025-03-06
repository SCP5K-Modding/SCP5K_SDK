#include "ModularLineAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HierarchicalInstancedStaticMeshComponent -FallbackName=HierarchicalInstancedStaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

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


