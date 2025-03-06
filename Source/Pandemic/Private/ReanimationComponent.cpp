#include "ReanimationComponent.h"
#include "Net/UnrealNetwork.h"

UReanimationComponent::UReanimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningCharacter = NULL;
    this->SkeletalMesh = NULL;
    this->bIsReanimating = false;
    this->bIsAutomaticallyReanimated = false;
    this->AutomaticReanimationVelocityCheck = 300.00f;
    this->AutomaticReanimationDuration = 2.00f;
    this->bUseClientPose = false;
    this->RagdollBlendOutSpeed = 25.00f;
    this->ReanimationForwardApex = 0.70f;
    this->ReanimationBackwardApex = 0.70f;
    this->DefaultForwardReanimationMontage = NULL;
    this->DefaultBackwardReanimationMontage = NULL;
    this->PelvisForwardAxis = EAxis::Y;
    this->PelvisUpAxis = EAxis::X;
    this->bFlipForwardAxis = false;
    this->bFlipUpAxis = false;
    this->bIsRagdollGrounded = false;
    this->DebugTraceMode = EDrawDebugTrace::None;
    this->PelvisBoneName = TEXT("pelvis");
    this->MaxPelvisGroundDistance = 20.00f;
    this->bIsPelvisOffsetFound = false;
    this->LastPlayedMontage = NULL;
}

void UReanimationComponent::SetServerPoseRepMovement(FVector_NetQuantize ServerLocation, FRotator ServerRotation) {
}

void UReanimationComponent::SetOwningSkeletalComponent(USkeletalMeshComponent* SkeletalComponent) {
}

void UReanimationComponent::SetOwningCharacter(ACharacter* Owner) {
}

void UReanimationComponent::SetIsReanimating(bool bReanimating) {
}

void UReanimationComponent::SetIsRagdollGrounded(bool bGrounded) {
}

void UReanimationComponent::ServerStartReanimation_Implementation(bool bIsUsingAnimation, UAnimMontage* ReanimationMontage) {
}

void UReanimationComponent::ServerFindPelvisOffset(FVector& OutOffset) {
}

float UReanimationComponent::ReanimateRagdoll(bool bIsUsingAnimation, EStaggerDirection PoseDirection, float PoseRotationYaw, FVector ReanimationVelocity, FVector TargetCapsuleLocation, UAnimMontage* ReanimationMontage) {
    return 0.0f;
}

void UReanimationComponent::ReanimateImmediate() {
}

void UReanimationComponent::OnRep_ServerPoseRepMovement_Implementation() {
}

void UReanimationComponent::OnRep_OwningCharacter_Implementation() {
}

void UReanimationComponent::MulticastStartReanimation_Implementation(bool bIsUsingAnimation, EStaggerDirection PoseDirection, float PoseRotationYaw, FVector ReanimationVelocity, FVector TargetCapsuleLocation, UAnimMontage* ReanimationMontage) {
}

void UReanimationComponent::MulticastEndRagdollReanimation_Implementation() {
}

FVector UReanimationComponent::GetPelvisOffset() const {
    return FVector{};
}

USkeletalMeshComponent* UReanimationComponent::GetOwningSkeletalComponent() const {
    return NULL;
}

ACharacter* UReanimationComponent::GetOwningCharacter() const {
    return NULL;
}

bool UReanimationComponent::GetIsReanimating() const {
    return false;
}

bool UReanimationComponent::GetIsRagdollGrounded() const {
    return false;
}

bool UReanimationComponent::GetIsPelvisOffsetFound() const {
    return false;
}

void UReanimationComponent::CompleteReanimation() {
}

EStaggerDirection UReanimationComponent::CalculateRagdollRotationDirection(float& OutPelvisYaw) {
    return EStaggerDirection::None;
}

FVector UReanimationComponent::CalculateCharacterVelocity(bool bIsRagdollVelocity) const {
    return FVector{};
}

void UReanimationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReanimationComponent, bIsReanimating);
    DOREPLIFETIME(UReanimationComponent, ServerPoseRepMovement);
    DOREPLIFETIME(UReanimationComponent, bIsRagdollGrounded);
}


