#include "SCP098.h"
#include "SAIMeleeComponent.h"
#include "FMODAudioComponent.h"
#include "InterruptibleAnimComponent.h"
#include "Net/UnrealNetwork.h"
#include "SCP098AIController.h"

ASCP098::ASCP098(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIControllerClass = ASCP098AIController::StaticClass();
    this->AIController = NULL;
    this->MeleeComponent = CreateDefaultSubobject<USAIMeleeComponent>(TEXT("SAIMelee"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Audio"));
    this->InterruptibleAnimComponent = CreateDefaultSubobject<UInterruptibleAnimComponent>(TEXT("InterruptibleAnimComponent"));
    this->bIsDead = false;
    this->bIsAlert = false;
    this->CurrentHealth = 300.00f;
    this->MaxHealth = 300.00f;
    this->bEating = false;
    this->bInCorner = false;
    this->AlertSound = NULL;
    this->IdleSound = NULL;
    this->DamageDelay = 1.00f;
    this->bInitializedRevealAnimations = false;
    this->IdleAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("IdleAudio"));
    this->IdleAudioComponent->SetupAttachment(RootComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
}

void ASCP098::SetInCorner(bool bNewInCorner) {
}

void ASCP098::SetEating(bool bNewEating) {
}

void ASCP098::SetAlert(bool bNewAlert) {
}

void ASCP098::OnRep_IsDead_Implementation() {
}

void ASCP098::OnRep_IsAlert_Implementation() {
}

void ASCP098::OnRep_InCorner_Implementation() {
}

void ASCP098::OnRep_Eating_Implementation() {
}

void ASCP098::OnRep_CurrentHealth_Implementation() {
}

void ASCP098::OnDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void ASCP098::Multicast_StopRevealAnimation_Implementation() {
}

void ASCP098::Multicast_SetRevealAnimation_Implementation(UAnimSequence* RevealAnimation) {
}

void ASCP098::Die_Implementation(AActor* Causer, AController* InstigatedBy) {
}

void ASCP098::CosmeticDie_Implementation() {
}

void ASCP098::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP098, bIsDead);
    DOREPLIFETIME(ASCP098, bIsAlert);
    DOREPLIFETIME(ASCP098, CurrentHealth);
    DOREPLIFETIME(ASCP098, bEating);
    DOREPLIFETIME(ASCP098, bInCorner);
    DOREPLIFETIME(ASCP098, bInitializedRevealAnimations);
}


