#include "UIWSWaterBody.h"
#include "Components/BoxComponent.h"

AUIWSWaterBody::AUIWSWaterBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivationCollision"));
    this->BoxComp = (UBoxComponent*)RootComponent;
    this->myCaptureActor = NULL;
    this->OverrideWaterMaterials = false;
    this->CustomWaterMaterial = NULL;
    this->CustomWaterMaterialDistant = NULL;
    this->bIsInteractive = true;
    this->bSimulateWhileNotVisible = false;
    this->bDisableAutomaticInteraction = false;
    this->bDisableAutomaticInteractionXbox = false;
    this->bDisableAutomaticInteractionPS4 = false;
    this->bDisableAutomaticInteractionNintendoSwitch = true;
    this->bDisableAutomaticInteractionAndroid = true;
    this->bDisableAutomaticInteractionIOS = true;
    this->CaptureRes = 256;
    this->MaxTileScale = 3;
    this->SimResMin = 512;
    this->bTieSimToFPS = false;
    this->InteractOnDamage = true;
    this->bLimitTickRate = false;
    this->TickRate = 60.00f;
    this->DamageScale = 100.00f;
    this->bSupportsEdgeReflection = true;
    this->EdgeDepth = 30.00f;
    this->CaptureOffset = 30.00f;
    this->DepthTransitionDistance = 149.50f;
    this->ShallowEdgeFadeDistance = 61.20f;
    this->ShallowEdgeFadePower = 1.00f;
    this->bCustomCollisionProfile = false;
    this->bEnableParticleOnDamage = true;
    this->bEnableParticleOnCollision = true;
    this->bOverrideParticleSettings = false;
    this->InteractionEffectScaleMin = 0.30f;
    this->InteractionEffectScaleMax = 0.80f;
    this->DamageEffectScaleMin = 0.40f;
    this->DamageEffectScaleMax = 1.00f;
    this->WaterMeshComp = NULL;
    this->activeheight0 = NULL;
    this->activeheight1 = NULL;
    this->activeheight2 = NULL;
    this->activenormal = NULL;
    this->localheight0 = NULL;
    this->localheight1 = NULL;
    this->localheight2 = NULL;
    this->localnormal = NULL;
    this->myCaptureRT = NULL;
    this->PPUnderWaterMID = NULL;
    this->WaterMID = NULL;
    this->WaterMIDLOD1 = NULL;
    this->WaterVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Post Process Volume"));
    this->HeightSimInst = NULL;
    this->ForceSplatInst = NULL;
    this->ManualSplatInst = NULL;
    this->ComputeNormalInst = NULL;
    this->Canvas = NULL;
    this->CanvasMan = NULL;
    this->WaterVolume->SetupAttachment(RootComponent);
}


void AUIWSWaterBody::SplashAtlocation(FVector SplashLoc, FVector SplachVelocity, float SplashStrengthPercent) {
}

void AUIWSWaterBody::RequestPriorityManual() {
}

void AUIWSWaterBody::RadialDamageSplashAtlocation(FVector SplashLoc, float DamageAmount) {
}

void AUIWSWaterBody::PointDamageSplashAtlocation(FVector SplashLoc, float DamageAmount) {
}

void AUIWSWaterBody::OnWaterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}




void AUIWSWaterBody::ApplyForceAtLocation(float fStrength, float fSizePercent, FVector HitLocation, bool bWithEffect) {
}


