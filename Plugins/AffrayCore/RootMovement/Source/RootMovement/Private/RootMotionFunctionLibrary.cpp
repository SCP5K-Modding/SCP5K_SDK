#include "RootMotionFunctionLibrary.h"

URootMotionFunctionLibrary::URootMotionFunctionLibrary() {
}

FTransform URootMotionFunctionLibrary::GetDesiredStartLocation(UAnimMontage* Montage, USkeletalMeshComponent* Component, FTransform Transform) {
    return FTransform{};
}

FTransform URootMotionFunctionLibrary::GetDesiredFinalLocation(UAnimMontage* Montage, USkeletalMeshComponent* Component, FTransform Transform) {
    return FTransform{};
}


