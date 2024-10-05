#include "FPSRangedWeaponData.h"
#include "EItemType.h"

UFPSRangedWeaponData::UFPSRangedWeaponData() {
    this->ItemType = EItemType::Rifle;
    this->Range = 5000.00f;
    this->MaxRange = 20000.00f;
    this->KickMultiplier = 1.50f;
    this->WeaponControl = 1.00f;
    this->RecoilNoiseSpeed = 1.70f;
    this->RecoilNoiseAmount = 4.00f;
    this->RecoilNoiseRoll = 3.00f;
    this->AmmoPerMagazine = 30;
    this->Magazines = 6;
    this->ProjectileCount = 1;
    this->BurstCount = 3;
    this->InterruptableBurst = true;
    this->SuppressionAmount = 1.00f;
    this->ReloadType = EReloadType::RT_Magazine;
    this->ReloadTime = 1.00f;
    this->EmptyReloadTime = 1.50f;
    this->StartReloadTime = 0.50f;
    this->EmptyStartReloadTime = 0.50f;
    this->bEmptyStartReloadLoadsRound = true;
    this->EndReloadTime = 0.50f;
    this->bStartReloadEmptiesMagazine = false;
    this->bStartReloadUnloadsRound = false;
    this->bEndReloadLoadsRound = true;
    this->bCanReloadWhileSprinting = true;
    this->bUsePreFireForAutomaticFire = false;
    this->MaxReloadCancelTime = 0.50f;
    this->bClosedBolt = true;
    this->bLockOpenOnEmpty = true;
    this->DoubleActionFireDelay = 0.20f;
    this->ActionTime = 1.00f;
    this->MinimumAmmoToReload = 3;
    this->bCanReloadWhileAiming = false;
    this->bCanMagCheckWhileAiming = true;
    this->bCanNeverReloadWhileAiming = false;
    this->AimingSightDistance = 5.00f;
    this->AimingMovementMultiplier = 0.40f;
    this->AimingRecoilAnimationMultiplier = 0.40f;
    this->AimingRecoilKickMultiplier = 2.00f;
    this->AimingRecoilMultiplier = 0.70f;
    this->AimingFOV = 90.00f;
    this->AimingFreeAimMultiplier = 0.00f;
    this->AimingSmoothAimMultiplier = 0.30f;
    this->AimingSwayMultiplier = 0.40f;
    this->AimingSensitivityMultiplier = 0.50f;
    this->PostMovementSightAlignment = 0.20f;
    this->PostFireSightAlignment = 0.20f;
    this->MuzzleFlashParticle = NULL;
    this->SuppressedMuzzleFlashParticle = NULL;
    this->CasingParticle = NULL;
    this->TracerClass = NULL;
    this->BulletCasingDataMap = NULL;
    this->GunshotCameraShakeClass = NULL;
    this->LastGunshotCameraShakeClass = NULL;
    this->CompensatedShakeClass = NULL;
    this->bUseFullAutoAudio = false;
    this->PerceptionSoundRadius = 20000.00f;
    this->Loudness = 1.00f;
    this->FiringSound = NULL;
    this->PreFireSound = NULL;
    this->SuppressedFiringSound = NULL;
    this->DryFireSound = NULL;
    this->SwitchFireSound = NULL;
    this->SuperSonicWhizSound = NULL;
    this->SubsonicWhizSound = NULL;
    this->AimInSound = NULL;
    this->AimOutSound = NULL;
    this->WeaponLength = 50.00f;
    this->ReloadSpeedMultiplier = 1.00f;
    this->BracedAimTilt = -20.00f;
    this->bAlwaysUseAlternateGripPose = false;
    this->ReloadAmmoOffset = 0;
    this->BulletBoneName = TEXT("Bullet");
    this->CasingBoneName = TEXT("Casing");
    this->SpeedLoaderBoneName = TEXT("SpeedLoader");
    this->MagazineFollowerBoneName = TEXT("Follower");
    this->FireSelectorBoneName = TEXT("Safety");
    this->MagazineBoneName = TEXT("Magazine");
    this->SecondMagazineBoneName = TEXT("Magazine_01");
    this->bAnimateFireSelector = true;
    this->bUseReverseBulletOrder = false;
    this->ReloadAnimationSpeed = 1.00f;
}

int32 UFPSRangedWeaponData::GetFireRate(int32& EffectiveFireRate, int32 FireModeIndex) {
    return 0;
}

UAnimSequence* UFPSRangedWeaponData::GetAlternateGripPose(bool& bWantsAlternateGripPose) {
    return NULL;
}


