#include "FPSWeapon.h"

AFPSWeapon::AFPSWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponData = NULL;
}

UFPSWeaponData* AFPSWeapon::GetWeaponData() const {
    return NULL;
}

float AFPSWeapon::GetDamage() {
    return 0.0f;
}


