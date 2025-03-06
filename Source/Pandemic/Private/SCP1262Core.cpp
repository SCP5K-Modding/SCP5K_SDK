#include "SCP1262Core.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=HealthComponent -FallbackName=HealthComponent
#include "Net/UnrealNetwork.h"

ASCP1262Core::ASCP1262Core(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->WeakPoint = CreateDefaultSubobject<USphereComponent>(TEXT("WeakPoint"));
    this->MeshComponent = NULL;
    this->ConnectedSwitch = NULL;
    this->WaterLevelController = NULL;
    this->bIsOpen = false;
    this->bIsInPuzzle = false;
    this->Stage = 0;
    this->DestroyedTargets = 0;
    this->InitialStage = 0;
    this->bFailPuzzleOnStageFail = true;
    this->bUpdateWaterLevelCompletion = false;
    this->TargetWaterLevel = 0.00f;
    this->OpenSound = NULL;
    this->CloseSound = NULL;
    this->LoopingAliveSound = NULL;
    this->OpenDuringPuzzleSound = NULL;
    this->LoopingAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("LoopingAudio"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Audio"));
    this->LoopingAudioComponent->SetupAttachment(RootComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
    this->WeakPoint->SetupAttachment(RootComponent);
}

void ASCP1262Core::StartStage(int32 InStage) {
}

void ASCP1262Core::StartPuzzle() {
}




void ASCP1262Core::OnRep_Stage() {
}

void ASCP1262Core::OnRep_bIsOpen() {
}

void ASCP1262Core::OnRep_bIsInPuzzle() {
}

void ASCP1262Core::OnHealthComponentHealthChanged(UHealthComponent* InHealthComponent, float Health) {
}

void ASCP1262Core::OnHealthComponentDied_Implementation(UHealthComponent* InHealthComponent) {
}

void ASCP1262Core::OnHealthComponentDamaged(UHealthComponent* Component, FSimpleHitData HitData) {
}


float ASCP1262Core::GetSmoothHealthPercent() const {
    return 0.0f;
}

bool ASCP1262Core::GetIsOpen() const {
    return false;
}

void ASCP1262Core::FailStage() {
}

void ASCP1262Core::EndPuzzle(bool bSucceeded) {
}

void ASCP1262Core::CompleteStage() {
}

void ASCP1262Core::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP1262Core, bIsOpen);
    DOREPLIFETIME(ASCP1262Core, bIsInPuzzle);
    DOREPLIFETIME(ASCP1262Core, Stage);
}


