#include "DoorSquidAnimationInstance.h"
#include "Net/UnrealNetwork.h"

UDoorSquidAnimationInstance::UDoorSquidAnimationInstance() {
    this->bAttackFailed = false;
    this->bJittering = false;
    this->bJitterOnCooldown = false;
    this->bAttacking = false;
    this->DoorSquidPawn = NULL;
    this->SquidAttackShortMontage = NULL;
    this->SquidAttackLongStartMontage = NULL;
    this->SquidAttackLongEndFailMontage = NULL;
    this->SquidAttackLongEndSuccessMontage = NULL;
    this->SquidAttackShortFailMontage = NULL;
    this->SquidAttackShortSuccessMontage = NULL;
    this->SquidIdleMontage = NULL;
    this->SquidSuppressionJitterMontage = NULL;
    this->SquidEatingMontage = NULL;
    this->SquidDetectionZoneJitterMontage = NULL;
    this->SquidCurrentJitterMontage = NULL;
    this->ImmediateJitter = TEXT("ImmediateJitter");
    this->Default = TEXT("Default");
    this->AnticipationPoseBlendAlpha = 0.00f;
    this->TongueEndYaw = 0.00f;
    this->AnticipationPoseAngle = 0.00f;
    this->AnticipationPoseDistance = 0.00f;
    this->PostKillExposedTime = 0.50f;
    this->SelectedJitterAnimation = 0;
    this->AnticipationPoseDistanceCurve = NULL;
    this->TongueBaseTargetSocket = TEXT("tonguehookmid");
    this->TongueMidPointTargetSocket = TEXT("tonguehooktip");
    this->TongueControlPoints.AddDefaulted(3);
    this->TongueIsDirectable = false;
    this->TongueDirectableBlendAlpha = 0.00f;
    this->TongueDirectabilityCurveName = TEXT("TongueDirectability");
    this->TongueTargetComponent = NULL;
}

void UDoorSquidAnimationInstance::StopJitterAnimation_Implementation() {
}

void UDoorSquidAnimationInstance::StopAttackAnimationAwaitStopMontages() {
}

void UDoorSquidAnimationInstance::StopAttackAnimationAwaitPosKillDelay() {
}

void UDoorSquidAnimationInstance::StopAttackAnimation_Implementation(const bool bLongRange) {
}

void UDoorSquidAnimationInstance::StartJitterAnimation_Implementation() {
}

void UDoorSquidAnimationInstance::StartEatingAnimation_Implementation() {
}

void UDoorSquidAnimationInstance::StartAttackRecallAnimation_Implementation(const bool bWasLongRange) {
}

void UDoorSquidAnimationInstance::StartAttackAnimationDEBUG() {
}

void UDoorSquidAnimationInstance::StartAttackAnimation_Implementation(AActor* TargetActor, bool bIsLongRange) {
}

void UDoorSquidAnimationInstance::SetRandomJitterAnimation() {
}

void UDoorSquidAnimationInstance::SetJitterAnimation(const int32 JitterAnimIdx) {
}

void UDoorSquidAnimationInstance::SetAttackFailed(const bool bInAttackFailed) {
}

void UDoorSquidAnimationInstance::PlayDetectionZoneJitterAnim_Implementation() {
}

void UDoorSquidAnimationInstance::OnRep_SelectedJitterAnimation_Implementation() {
}

FVector UDoorSquidAnimationInstance::GetTransformTongueEndPointTarget(const UActorComponent* TargetComponent) const {
    return FVector{};
}

FTransform UDoorSquidAnimationInstance::GetTransformLocationToCompensatedSocket(const FName BoneName) const {
    return FTransform{};
}

float UDoorSquidAnimationInstance::GetSelectedJitterMontageSequenceLengthSeconds(const bool bIsImmediateJitter) {
    return 0.0f;
}

float UDoorSquidAnimationInstance::GetSectionLengthByName(UAnimMontage* Montage, FName SectionName) {
    return 0.0f;
}

FTransform UDoorSquidAnimationInstance::GetBoneComponentTransformFromRefPose(const UPoseAsset* PoseAsset, const FName BoneName) const {
    return FTransform{};
}

void UDoorSquidAnimationInstance::ForceJitterAnimationNowUnsuppressedDEBUG() {
}

void UDoorSquidAnimationInstance::ForceJitterAnimationNowSuppressedDEBUG() {
}

void UDoorSquidAnimationInstance::ForceJitterAnimationNow_Implementation(const bool bIsSuppressed) {
}

void UDoorSquidAnimationInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDoorSquidAnimationInstance, AnticipationPoseBlendAlpha);
    DOREPLIFETIME(UDoorSquidAnimationInstance, TongueEndYaw);
    DOREPLIFETIME(UDoorSquidAnimationInstance, SelectedJitterAnimation);
}


