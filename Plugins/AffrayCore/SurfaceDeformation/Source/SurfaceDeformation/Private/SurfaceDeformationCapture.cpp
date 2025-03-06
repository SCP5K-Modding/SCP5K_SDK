#include "SurfaceDeformationCapture.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASurfaceDeformationCapture::ASurfaceDeformationCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InteractionDistance = 4096.00f;
    this->MinHeight = -500.00f;
    this->MaxHeight = 1000.00f;
    this->ParameterCollection = NULL;
    this->CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponent"));
    this->SurfaceCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SurfaceCaptureComponent"));
    this->RenderTexture = NULL;
    this->CompositeTexture = NULL;
    this->SurfaceTexture = NULL;
    this->NormalsTexture = NULL;
    this->Blur = 1.00f;
    this->SurfaceThickness = 10.00f;
    this->Accumulation = 0.05f;
    this->bPopulateHiddenActorsFromStaticOnPlay = false;
    this->CaptureComponent->SetupAttachment(RootComponent);
    this->SurfaceCaptureComponent->SetupAttachment(RootComponent);
}

void ASurfaceDeformationCapture::RunComputeShader(float DeltaTime) {
}

void ASurfaceDeformationCapture::Reposition(FVector Location) {
}

void ASurfaceDeformationCapture::AddStaticActorsToHiddenArray() {
}


