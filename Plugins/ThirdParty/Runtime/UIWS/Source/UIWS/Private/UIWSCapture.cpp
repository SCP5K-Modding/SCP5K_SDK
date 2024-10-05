#include "UIWSCapture.h"
#include "Components/BoxComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"

AUIWSCapture::AUIWSCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->SceneCaptureComp = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Scene Capture Comp"));
    this->PPVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("PPVolume"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->DrawMID = NULL;
    this->RTPersistent = NULL;
    this->RTCapture = NULL;
    this->DynamicDrawToPMat = NULL;
    this->PostProcessComp = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComp"));
    this->SceneCaptureComp->SetupAttachment(RootComponent);
    this->PPVolume->SetupAttachment(RootComponent);
    this->PostProcessComp->SetupAttachment(PPVolume);
}


