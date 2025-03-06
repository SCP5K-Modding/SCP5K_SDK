#include "SCP3199Controller.h"
#include "SCP3199NavigationQueryFilter.h"

ASCP3199Controller::ASCP3199Controller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultNavigationFilterClass = USCP3199NavigationQueryFilter::StaticClass();
    this->AgentAttackKeyName = TEXT("bDidAgentRecentlyAttack");
    this->AgentDamagedKeyName = TEXT("bWasAgentRecentlyDamaged");
    this->AttackBlockKeyName = TEXT("bIsPlayingAttackBlockAnim");
    this->AgentSeenKeyName = TEXT("bIsAgentSeen");
    this->AgentPanickingKeyName = TEXT("bIsPanicking");
    this->ChargeCrashingKeyName = TEXT("bIsCrashing");
    this->EatingKeyName = TEXT("bIsEating");
    this->TraversalRangeKeyName = TEXT("TraversalPathRange");
    this->ChargeRangeKeyName = TEXT("ChargePathRange");
    this->AttackRangeKeyName = TEXT("AttackPathRange");
    this->ActionStateKeyName = TEXT("CurrentActionState");
    this->ChargeLocationKeyName = TEXT("ChargeLocation");
    this->TargetHealthWeight = 1.20f;
    this->RelevantNavmeshTargetsCount = 5;
    this->GeneralSightLineCost = 200.00f;
    this->DirectSightLineCost = 400.00f;
    this->DirectSightLineDot = 0.87f;
    this->NearProximityCost = 200.00f;
    this->NearProximityRange = 500.00f;
    this->bHasAttackedRecently = false;
    this->AttackRecencyDelay = 2.00f;
    this->bWasDamagedRecently = false;
    this->DamagedRecencyDelay = 1.50f;
    this->bIsSeenByTargets = false;
    this->TraversalPathRange = 0.00f;
    this->ChargePathRange = 0.00f;
    this->AttackPathRange = 0.00f;
    this->PathingSightWeight = 0.00f;
    this->PathingProximityWeight = 0.00f;
    this->PathingInlineWeight = 0.00f;
    this->MovementSpeedThreatCap = 1000.00f;
    this->DistanceWeight = 0.25f;
    this->DesperationWeight = 0.25f;
    this->ThreatWeight = 0.50f;
    this->AlertIdleStateMultiplier = 1.00f;
    this->AttackingStateMultiplier = 1.00f;
    this->CalmIdleStateMultiplier = 1.00f;
    this->ChargingStateMultiplier = 1.00f;
    this->CrashingStateMultiplier = 0.00f;
    this->PanickingStateMultiplier = 1.00f;
    this->InvestigatingStateMultiplier = 1.00f;
    this->RunAwayStateMultiplier = 1.00f;
    this->StalkingStateMultiplier = 1.00f;
    this->DetectableChargeObjectTypes.AddDefaulted(2);
}

void ASCP3199Controller::WasDamagedRecently_Delayed(bool bDamaged) {
}

void ASCP3199Controller::SetWasDamagedRecently(bool bWasDamaged) {
}

void ASCP3199Controller::SetIsSeenByTargets(bool bIsSeen) {
}

void ASCP3199Controller::SetHasAttackedRecently(bool bHasAttacked) {
}

TArray<FSCP3199NavmeshTarget> ASCP3199Controller::SelectBestNavmeshTargets(int32 DesiredAmount) const {
    return TArray<FSCP3199NavmeshTarget>();
}

void ASCP3199Controller::OnUpdatedActionState(ESCP3199ActionState NewActionState) {
}

void ASCP3199Controller::OnSCP3199TargetLost(ASAIController* Controller, const FSAITarget& LostTarget) {
}

void ASCP3199Controller::OnSCP3199TargetDied(ASAIController* Controller, const FSAITarget& KilledTarget) {
}

void ASCP3199Controller::OnSCP3199TargetAdded(ASAIController* Controller, const FSAITarget& Target) {
}

void ASCP3199Controller::OnSCP3199AllySpawned(APawn* Ally, int32 AllyCount) {
}

void ASCP3199Controller::OnSCP3199AllyDied(APawn* Ally, int32 AllyCount) {
}

void ASCP3199Controller::OnSAIMeleeAttackCompleted(USAIMeleeComponent* AttackingComponent, AActor* AttackedActor, uint8 AttackIndex, FAIMeleeAttackType Attack) {
}

void ASCP3199Controller::OnPlayingAttackBlockAnim(bool bIsPlayingAnim) {
}

void ASCP3199Controller::OnChargeCrashed(bool bIsAICrashing) {
}

void ASCP3199Controller::OnAIPanicking(bool bIsAIPanicking) {
}

void ASCP3199Controller::OnAIEating(bool bIsAIEating) {
}

bool ASCP3199Controller::IsAIFacingTarget() {
    return false;
}

void ASCP3199Controller::HasAttackedRecently_Delayed(bool bAttacked) {
}

bool ASCP3199Controller::GetWasDamagedRecently() const {
    return false;
}

float ASCP3199Controller::GetTargetHealthWeight() const {
    return 0.0f;
}

TArray<ASCP3199Character*> ASCP3199Controller::GetSCP3199CharacterAllies() const {
    return TArray<ASCP3199Character*>();
}

bool ASCP3199Controller::GetIsSeenByTargets() const {
    return false;
}

bool ASCP3199Controller::GetHasAttackedRecently() const {
    return false;
}

float ASCP3199Controller::GetGeneralSightLineCost() const {
    return 0.0f;
}

float ASCP3199Controller::GetDirectSightLineDot() const {
    return 0.0f;
}

float ASCP3199Controller::GetDirectSightLineCost() const {
    return 0.0f;
}

int32 ASCP3199Controller::FindLowestFloatValueIndex(TArray<float>& FloatArray) const {
    return 0;
}

FVector ASCP3199Controller::FindChargeLocation() {
    return FVector{};
}

bool ASCP3199Controller::CheckSeenByTargets() const {
    return false;
}

bool ASCP3199Controller::CanAIChargeTo(const FVector& ChargeLocation) {
    return false;
}


