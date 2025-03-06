#include "FPSMeleeWeaponData.h"
#include "EItemType.h"

UFPSMeleeWeaponData::UFPSMeleeWeaponData() {
    this->ItemType = EItemType::Melee;
    this->bCanLowReady = false;
    this->PrimaryType = EPrimaryMeleeType::Blunt;
    this->SecondaryType = ESecondaryMeleeType::Long;
    this->TraceThickness = 5.00f;
    this->SuccessfulAttackDelay = 0.30f;
    this->ReadyDelay = 0.20f;
    this->FlowDelayBenefit = 0.20f;
    this->MinHitTime = 0.10f;
    this->MaxHitTimeRemaining = 0.10f;
    this->bResetAttackDirectionOnBash = true;
    this->MaxHitsPerAttack = 2;
    this->AttackShakeClass = NULL;
    this->HitShakeClass = NULL;
    this->HitData = NULL;
    this->PerceptionSoundRadius = 500.00f;
    this->Loudness = 1.00f;
    this->AttackSound = NULL;
    this->HitSound = NULL;
}


