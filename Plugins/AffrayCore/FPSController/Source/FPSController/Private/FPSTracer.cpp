#include "FPSTracer.h"

AFPSTracer::AFPSTracer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectPool = NULL;
    this->Data = NULL;
    this->Time = 0.00f;
    this->TracerSpeed = 1.00f;
    this->bHasPlayedCrack = false;
    this->CrackDistance = 400.00f;
    this->CrackDotThreshold = 0.20f;
    this->MaxBulletTime = 1.00f;
    this->SuppressionAmount = 1.00f;
}

void AFPSTracer::Start(FVector Location, TArray<FBallisticHitData> InHits, UFPSRangedWeaponData* InData, AFPSCharacterBase* InOwner) {
}

void AFPSTracer::PlayCrack_Implementation() {
}

void AFPSTracer::FollowPath_Implementation() {
}

void AFPSTracer::Finished_Implementation() {
}


