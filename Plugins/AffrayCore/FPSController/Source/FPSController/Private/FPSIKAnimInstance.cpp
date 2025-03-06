#include "FPSIKAnimInstance.h"

UFPSIKAnimInstance::UFPSIKAnimInstance() {
    this->Character = NULL;
    this->bUsePelvisOffset = true;
    this->bUseSphereTrace = true;
    this->SphereTraceRadius = 10.00f;
    this->LeftFootIKBone = TEXT("ik_foot_l");
    this->RightFootIKBone = TEXT("ik_foot_r");
    this->IKAlpha = 1.00f;
}

FVector UFPSIKAnimInstance::GetPelvisOffset(float DeltaTime) {
    return FVector{};
}

FVector UFPSIKAnimInstance::GetOffset(FVector FootPosition) {
    return FVector{};
}

void UFPSIKAnimInstance::DoFootIK(float DeltaTime) {
}


