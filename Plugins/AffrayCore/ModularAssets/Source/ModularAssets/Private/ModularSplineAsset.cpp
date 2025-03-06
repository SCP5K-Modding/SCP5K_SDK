#include "ModularSplineAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AModularSplineAsset::AModularSplineAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->ForwardAxis = ESplineMeshAxis::X;
    this->Roll = 0.00f;
    this->Mesh = NULL;
    this->EndMesh = NULL;
    this->MaxAssetLength = 400;
    this->MaxElements = 100;
    this->bCastShadow = true;
    this->VirtualTextureRenderPassType = ERuntimeVirtualTextureMainPassType::Never;
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AModularSplineAsset::SetSplinePoint(int32 Index, FVector Location) {
}

void AModularSplineAsset::RefreshAsset() {
}

float AModularSplineAsset::GetDistanceToEndOfMesh() const {
    return 0.0f;
}

void AModularSplineAsset::EditorTick_Implementation(const float DeltaTime) {
}


