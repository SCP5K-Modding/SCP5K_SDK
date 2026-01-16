#include "FPSMeleeWeapon.h"
#include "Components/SceneComponent.h"
#include "FMODAudioComponent.h"
#include "Net/UnrealNetwork.h"

AFPSMeleeWeapon::AFPSMeleeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraceStart = CreateDefaultSubobject<USceneComponent>(TEXT("Trace Start"));
    this->TraceEnd = CreateDefaultSubobject<USceneComponent>(TEXT("Trace End"));
    this->MeleeWeaponData = NULL;
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("AudioComponent"));
    this->NumHits = 0;
    this->AudioComponent->SetupAttachment(FirstPerson);
    this->TraceEnd->SetupAttachment(FirstPerson);
    this->TraceStart->SetupAttachment(FirstPerson);
}

void AFPSMeleeWeapon::ServerProcessHit_Implementation(FMeleeHitData Hit) {
}

bool AFPSMeleeWeapon::RunWeaponTrace(FHitResult& Hit) {
    return false;
}

void AFPSMeleeWeapon::OnRep_MeleeHitData() {
}

float AFPSMeleeWeapon::GetDamageForHit(FMeleeHitData Hit) const {
    return 0.0f;
}

FVector AFPSMeleeWeapon::GetAttackVector(const FMeleeHitData& Hit) const {
    return FVector{};
}

void AFPSMeleeWeapon::CosmeticHit_Implementation(EMeleeAttackDirection Direction, FMeleeHitData HitData)
{
}

void AFPSMeleeWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFPSMeleeWeapon, MeleeHitData);
}


