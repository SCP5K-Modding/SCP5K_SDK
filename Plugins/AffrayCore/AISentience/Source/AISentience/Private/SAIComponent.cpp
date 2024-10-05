#include "SAIComponent.h"
#include "Net/UnrealNetwork.h"

USAIComponent::USAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCurrentlyInteracting = false;
    this->CurrentMorale = 1.00f;
    this->MoraleMultiplier = 1.00f;
    this->ReactionTime = 0.20f;
    this->DetectionSpeed = 0.00f;
    this->CoverTraceDistance = 200.00f;
    this->MaxCoverCrouchDist = 600.00f;
    this->FireDelayMult = 1.00f;
    this->DesiredTargetActor = NULL;
    this->DetectionRate = 0.00f;
    this->bShouldEverDropAlert = false;
    this->TimeTillCalm = 120.00f;
    this->bHeardNoise = false;
    this->bHasLowerCover = false;
    this->bHasUpperCover = false;
    this->bHasRightCover = false;
    this->bHasLeftCover = false;
    this->CurrentCalmBehavior = ESAIBehaviors_Calm::BE_Idle;
    this->CurrentCombatBehavior = ESAIBehaviors_Combat::BE_Default;
    this->CurrentSquadType = ESAISquad_Types::SQ_Default;
    this->BehaviorSwitchTime = 60.00f;
    this->SkillLevel = 0;
    this->bInCombat = false;
    this->bHasEverBeenInCombat = false;
    this->CombatTension = 0.00f;
    this->bHasNearbyCover = false;
    this->bIsInCover = false;
    this->bIsLeader = false;
    this->MaxSquadMembers = 5;
    this->LeaderPawn = NULL;
    this->PatrolPath = NULL;
    this->PatrolPointWaitTime = 0.00f;
    this->RoamRadius = 500.00f;
    this->RoamWaitTime = 0.00f;
    this->bRoamFromSpawn = false;
}

void USAIComponent::SetSquadType(TEnumAsByte<ESAISquad_Types::Type> NewSquadType) {
}

void USAIComponent::SetSquadRef(FAISquad NewSquadRef) {
}

void USAIComponent::SetSkillLevel(int32 NewSkillLevel) {
}

void USAIComponent::SetRoamRadius(float NewRadius) {
}

void USAIComponent::SetRoamFromSpawn(bool bShouldUseStart) {
}

void USAIComponent::SetPatrolPath(ASAIPatrolPath* NewPatrolPath) {
}

void USAIComponent::SetPatrolDelay(float NewPatrolDelay) {
}

void USAIComponent::SetMoraleMultipler(float NewMultiplier) {
}

void USAIComponent::SetFireDelayMult(float NewFireDelay) {
}

void USAIComponent::SetCurrentMorale(float NewMorale) {
}

void USAIComponent::SetCurrentCalmBehavior(TEnumAsByte<ESAIBehaviors_Calm::Type> NewCalmBehavior) {
}

void USAIComponent::SetAvailableCalmBehaviors(TArray<TEnumAsByte<ESAIBehaviors_Calm::Type>> NewCalmBehaviors) {
}

void USAIComponent::SetAIVoices(FDataTableRowHandle NewVoices) {
}

void USAIComponent::SetAIBehaviorSwitchTime(float NewSwitchTime) {
}



void USAIComponent::NerfMorale(float NerfAmount, bool bPlayVoiceLine) {
}

bool USAIComponent::IsLeader() const {
    return false;
}

bool USAIComponent::HasUpperCover() const {
    return false;
}

bool USAIComponent::HasLowerCover() const {
    return false;
}

bool USAIComponent::HasHeardNoise() const {
    return false;
}

FVector USAIComponent::GetStartLocation() const {
    return FVector{};
}

FAISquad USAIComponent::GetSquadRef() const {
    return FAISquad{};
}

TArray<APawn*> USAIComponent::GetSquadMembers() const {
    return TArray<APawn*>();
}

int32 USAIComponent::GetSkillLevel() const {
    return 0;
}

float USAIComponent::GetRoamWaitTime() const {
    return 0.0f;
}

float USAIComponent::GetRoamRadius() const {
    return 0.0f;
}

float USAIComponent::GetReactionTime() const {
    return 0.0f;
}

float USAIComponent::GetPatrolWaitTime() const {
    return 0.0f;
}

int32 USAIComponent::GetMaxSquadMembers() const {
    return 0;
}

float USAIComponent::GetMaxCoverCrouchDist() const {
    return 0.0f;
}

FVector USAIComponent::GetLastDamageLocation() const {
    return FVector{};
}

float USAIComponent::GetFireDelayMult() const {
    return 0.0f;
}

float USAIComponent::GetDetectionSpeed() const {
    return 0.0f;
}

AActor* USAIComponent::GetDesiredTargetActor() const {
    return NULL;
}

TEnumAsByte<ESAISquad_Types::Type> USAIComponent::GetCurrentSquadType() const {
    return ESAISquad_Types::SQ_Default;
}

FName USAIComponent::GetCurrentPatrolKey() const {
    return NAME_None;
}

float USAIComponent::GetCurrentMorale() const {
    return 0.0f;
}

TEnumAsByte<ESAIBehaviors_Combat::Type> USAIComponent::GetCurrentCombatBehavior() const {
    return ESAIBehaviors_Combat::BE_Default;
}

TEnumAsByte<ESAIBehaviors_Calm::Type> USAIComponent::GetCurrentCalmBehavior() const {
    return ESAIBehaviors_Calm::BE_Idle;
}

float USAIComponent::GetCoverTraceDistance() const {
    return 0.0f;
}

TArray<AActor*> USAIComponent::GetAllKnownTargets() const {
    return TArray<AActor*>();
}





bool USAIComponent::CanRoamFromSpawn() const {
    return false;
}

void USAIComponent::BuffMorale(float BuffAmount, bool bPlayVoiceLine) {
}

void USAIComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USAIComponent, bHasLowerCover);
    DOREPLIFETIME(USAIComponent, bHasUpperCover);
    DOREPLIFETIME(USAIComponent, bHasRightCover);
    DOREPLIFETIME(USAIComponent, bHasLeftCover);
}


