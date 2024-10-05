#include "FPSWeaponData.h"
#include "GameFramework/DamageType.h"

UFPSWeaponData::UFPSWeaponData() {
    this->Damage = 20.00f;
    this->AttackDelay = 0.10f;
    this->DamageType = UDamageType::StaticClass();
}


