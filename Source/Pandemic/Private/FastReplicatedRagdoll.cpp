#include "FastReplicatedRagdoll.h"
#include "Net/UnrealNetwork.h"

UFastReplicatedRagdoll::UFastReplicatedRagdoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RefBoneForwardAxis = EAxisToVector::Y;
    this->bEnableInitialForceCorrection = false;
    this->ForceCorrectionTargetBone = TEXT("head");
    this->TorgueForceMultiplier = 1.00f;
    this->RagdollPhysicalAnimationProfileName = TEXT("ActiveRagdoll");
    this->bDoRagdollPhysicalAnimation = true;
    this->RagdollAnimationSlotName = TEXT("Additive");
    this->RagdollPhysicalAnimationSpeedScale = 0.10f;
    this->RagdollPhysicalAnimationStrengthScale = 1.00f;
    this->bIsControlledRagdollPossible = false;
    this->OwningCharacter = NULL;
    this->OwningSkeletalComponent = NULL;
    this->PelvisBoneName = TEXT("pelvis");
}

void UFastReplicatedRagdoll::StopAndReclaimRagdoll() {
}

void UFastReplicatedRagdoll::SetServerRagdollLocation(FVector_NetQuantize NewLocation) {
}

void UFastReplicatedRagdoll::SetOwningSkeletalComponent(USkeletalMeshComponent* InOwningSkelComponent) {
}

void UFastReplicatedRagdoll::SetOwningCharacter(ACharacter* InOwner) {
}

void UFastReplicatedRagdoll::PrepareRagdoll() {
}

void UFastReplicatedRagdoll::OnRep_ServerRagdollLocation_Implementation() {
}

void UFastReplicatedRagdoll::OnParentReportsShouldRagdoll() {
}

void UFastReplicatedRagdoll::Multicast_RagdollStopAndReclaim_Implementation() {
}

void UFastReplicatedRagdoll::Multicast_RagdollPrepare_Implementation() {
}

void UFastReplicatedRagdoll::Multicast_RagdollInitiate_Implementation(const FVector_NetQuantize InheritedVelocity) {
}

void UFastReplicatedRagdoll::InitiateRagdoll() {
}

USkeletalMeshComponent* UFastReplicatedRagdoll::GetOwningSkeletalComponent() const {
    return NULL;
}

ACharacter* UFastReplicatedRagdoll::GetOwningCharacter() const {
    return NULL;
}

bool UFastReplicatedRagdoll::GetIsRagdolling() const {
    return false;
}

void UFastReplicatedRagdoll::DrawDebugBoneTransforms() const {
}

void UFastReplicatedRagdoll::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFastReplicatedRagdoll, ServerRagdollLocation);
}


