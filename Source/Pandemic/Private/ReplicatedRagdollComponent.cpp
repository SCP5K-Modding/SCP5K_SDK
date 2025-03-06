#include "ReplicatedRagdollComponent.h"
#include "Net/UnrealNetwork.h"

UReplicatedRagdollComponent::UReplicatedRagdollComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningCharacter = NULL;
    this->OwningSkeletalComponent = NULL;
    this->bIsRagdolling = false;
    this->bIsClientRagdollInitialized = false;
    this->bIsPelvisOffsetFound = false;
    this->PelvisBoneName = TEXT("pelvis");
    this->RagdollBlendInSpeed = 5.00f;
    this->CapsuleInterpSpeed = 10.00f;
    this->RagdollSnapshotSyncRate = 0.16f;
    this->DebugTraceMode = EDrawDebugTrace::None;
    this->MaxPelvisGroundDistance = 20.00f;
}

void UReplicatedRagdollComponent::SetRagdollData(FReplicatedRagdollData Data) {
}

void UReplicatedRagdollComponent::SetOwningSkeletalComponent(USkeletalMeshComponent* SkeletalComponent) {
}

void UReplicatedRagdollComponent::SetOwningCharacter(ACharacter* Owner) {
}

void UReplicatedRagdollComponent::SetIsRagdolling(bool bRagdolling) {
}

void UReplicatedRagdollComponent::ServerUpdateReferences() {
}

void UReplicatedRagdollComponent::ServerStopRagdollSync() {
}

void UReplicatedRagdollComponent::ServerStartRagdollSync() {
}

FPoseSnapshot UReplicatedRagdollComponent::ServerGenerateSnapshot(FName SnapshotName) {
    return FPoseSnapshot{};
}

void UReplicatedRagdollComponent::ServerFindPelvisOffset(FVector& OutOffset) {
}

void UReplicatedRagdollComponent::RefreshRagdoll() {
}

void UReplicatedRagdollComponent::OnRep_IsRagdolling_Implementation() {
}

void UReplicatedRagdollComponent::MulticastUpdateRagdollSnapshots_Implementation(const TArray<FRepTransform>& BoneTransforms) {
}

void UReplicatedRagdollComponent::MulticastUpdateLocation_Implementation() {
}

void UReplicatedRagdollComponent::MulticastStartRagdollSync_Implementation(FVector InitialVelocity) {
}

void UReplicatedRagdollComponent::InitializeRagdollSync(FVector InitialVelocity) {
}

FReplicatedRagdollData UReplicatedRagdollComponent::GetRagdollData() const {
    return FReplicatedRagdollData{};
}

FVector UReplicatedRagdollComponent::GetPelvisOffset() const {
    return FVector{};
}

USkeletalMeshComponent* UReplicatedRagdollComponent::GetOwningSkeletalComponent() const {
    return NULL;
}

ACharacter* UReplicatedRagdollComponent::GetOwningCharacter() const {
    return NULL;
}

bool UReplicatedRagdollComponent::GetIsRagdolling() const {
    return false;
}

bool UReplicatedRagdollComponent::GetIsPelvisOffsetFound() const {
    return false;
}

FPoseSnapshot UReplicatedRagdollComponent::GetClientPoseSnapshot() const {
    return FPoseSnapshot{};
}

FPoseSnapshot UReplicatedRagdollComponent::ClientGenerateSnapshot(TArray<FRepTransform> BoneTransforms, FName SnapshotName) {
    return FPoseSnapshot{};
}

FVector UReplicatedRagdollComponent::CalculateCharacterVelocity(bool bIsRagdollVelocity) const {
    return FVector{};
}

void UReplicatedRagdollComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplicatedRagdollComponent, PelvisReplicatedMovement);
    DOREPLIFETIME(UReplicatedRagdollComponent, OwningCharacter);
    DOREPLIFETIME(UReplicatedRagdollComponent, OwningSkeletalComponent);
    DOREPLIFETIME(UReplicatedRagdollComponent, bIsRagdolling);
    DOREPLIFETIME(UReplicatedRagdollComponent, RagdollData);
}


