#include "FPSMeleeWeaponDirectional.h"
#include "FPSMeleeWeaponData.h"

AFPSMeleeWeaponDirectional::AFPSMeleeWeaponDirectional(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemDataClass = UFPSMeleeWeaponData::StaticClass();
    this->bAttacking = false;
    this->bWantsAttack = false;
    this->bWantsReady = false;
    this->DesiredReadyDirection = AD_None;
    this->bIsReady = false;
    this->ReadyDirection = AD_None;
    this->LastAttackDirection = AD_None;
}

void AFPSMeleeWeaponDirectional::UpdateReady() {
}

void AFPSMeleeWeaponDirectional::TryStartReady(TEnumAsByte<EMeleeAttackDirection> Direction) {
}

void AFPSMeleeWeaponDirectional::TryStartAttack(TEnumAsByte<EMeleeAttackDirection> Direction) {
}

void AFPSMeleeWeaponDirectional::StartAttack(TEnumAsByte<EMeleeAttackDirection> Direction) {
}

void AFPSMeleeWeaponDirectional::ServerStartAttack_Implementation(EMeleeAttackDirection Direction)
{
}

void AFPSMeleeWeaponDirectional::ServerUpdateReady_Implementation(EMeleeAttackDirection Direction, bool bReady)
{
}

void AFPSMeleeWeaponDirectional::ServerCancelAttack_Implementation(EMeleeAttackDirection Direction)
{
}

void AFPSMeleeWeaponDirectional::Ready(TEnumAsByte<EMeleeAttackDirection> Direction) {
}

void AFPSMeleeWeaponDirectional::FlipAttackDirection(TEnumAsByte<EMeleeAttackDirection> CurrentDirection) {
}

void AFPSMeleeWeaponDirectional::CosmeticStartAttack(TEnumAsByte<EMeleeAttackDirection> Direction) {
}

void AFPSMeleeWeaponDirectional::CosmeticCancelAttack(TEnumAsByte<EMeleeAttackDirection> Direction) {
}


