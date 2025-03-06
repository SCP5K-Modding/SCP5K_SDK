#include "FPSWeaponData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType

UFPSWeaponData::UFPSWeaponData() {
    this->Damage = 20.00f;
    this->AttackDelay = 0.10f;
    this->DamageType = UDamageType::StaticClass();
}


