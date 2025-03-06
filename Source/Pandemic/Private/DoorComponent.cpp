#include "DoorComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UDoorComponent::UDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInteractable = true;
    this->bResetDoorRotation = false;
    this->CurrentDoorState = EDoorState::Default;
    this->ClientPreviousDoorState = EDoorState::Default;
    this->DoorStaticMesh = NULL;
    this->InterpolationSpeed = 10.00f;
    this->TimeToRotate = 1.00f;
    this->CurrentRotationPercentage = 0.00f;
    this->CloseDoorInteractionThreshold = 0.55f;
    this->MaxDoorHealth = 100.00f;
    this->bShouldOverrideStartingHealth = false;
    this->CurrentDoorHealth = 100.00f;
    this->bCanBeBroken = true;
    this->bShouldUseDamageTypes = false;
    this->BreakForce = 100.00f;
    this->BreakParticle = NULL;
}

void UDoorComponent::StopMovement() {
}

void UDoorComponent::SetOpenSoundData(FDoorSoundData& SoundData) {
}

void UDoorComponent::SetMaxDoorHealth(float MaximumValue) {
}

void UDoorComponent::SetIsInteractable(bool bInteractable) {
}

void UDoorComponent::SetDoorStaticMesh(UStaticMeshComponent* Mesh) {
}

void UDoorComponent::SetCurrentRotationPercentage(float Percentage) {
}

void UDoorComponent::SetCurrentDoorState(EDoorState State) {
}

void UDoorComponent::SetCurrentDoorHealth(float NewHealth) {
}

void UDoorComponent::SetCloseSoundData(FDoorSoundData& SoundData) {
}

void UDoorComponent::SetCanBeBroken(bool bCanBreak) {
}

void UDoorComponent::SetBreakSoundData(FDoorSoundData& SoundData) {
}

void UDoorComponent::SetBreakParticle(UFXSystemAsset* FXAsset) {
}

void UDoorComponent::SetBreakForceOffset(FVector Offset) {
}

void UDoorComponent::SetBreakForce(float Force) {
}

void UDoorComponent::ServerStartMovement(const EDoorState NewDoorState) {
}

void UDoorComponent::ServerInteractDoor(AActor* EventInstigator) {
}

void UDoorComponent::ServerBreakDoor() {
}

void UDoorComponent::PlayDoorSound(const FDoorSoundData& SoundData, const float TimelinePosition) {
}

void UDoorComponent::PlayDoorParticleEffect(const UFXSystemAsset* SystemAsset) {
}

void UDoorComponent::OnRep_CurrentDoorState_Implementation() {
}

void UDoorComponent::OnRep_CurrentDoorHealth_Implementation() {
}

void UDoorComponent::OnComponentTakeRadialDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser) {
}

void UDoorComponent::OnComponentTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UDoorComponent::MulticastCosmeticMoveDoor_Implementation(const EDoorState CurrentState) {
}

void UDoorComponent::MulticastCosmeticBreakDoor_Implementation() {
}

bool UDoorComponent::IsMoving() const {
    return false;
}

bool UDoorComponent::IsBroken() const {
    return false;
}

void UDoorComponent::InterruptDoorMovement(AActor* EventInstigator) {
}

bool UDoorComponent::GetShouldUseDamageTypes() const {
    return false;
}

bool UDoorComponent::GetShouldOverrideStartingHealth() const {
    return false;
}

FDoorSoundData UDoorComponent::GetOpenSoundData() const {
    return FDoorSoundData{};
}

float UDoorComponent::GetMaxDoorHealth() const {
    return 0.0f;
}

bool UDoorComponent::GetIsInteractable() const {
    return false;
}

TSet<TSubclassOf<UDamageType>> UDoorComponent::GetDamageTypes() const {
    return TSet<TSubclassOf<UDamageType>>();
}

EDoorState UDoorComponent::GetCurrentDoorState() const {
    return EDoorState::Default;
}

float UDoorComponent::GetCurrentDoorHealth() const {
    return 0.0f;
}

FDoorSoundData UDoorComponent::GetCloseSoundData() const {
    return FDoorSoundData{};
}

bool UDoorComponent::GetCanBeBroken() const {
    return false;
}

FDoorSoundData UDoorComponent::GetBreakSoundData() const {
    return FDoorSoundData{};
}

UFXSystemAsset* UDoorComponent::GetBreakParticle() const {
    return NULL;
}

FVector UDoorComponent::GetBreakForceOffset() const {
    return FVector{};
}

float UDoorComponent::GetBreakForce() const {
    return 0.0f;
}

bool UDoorComponent::CanBeDamaged() const {
    return false;
}

float UDoorComponent::CalculateVectorLerpAlpha(const FVector& CurrentLerpValue, const FVector& Initial, const FVector& Desired) const {
    return 0.0f;
}

void UDoorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDoorComponent, CurrentDoorState);
    DOREPLIFETIME(UDoorComponent, MaxDoorHealth);
    DOREPLIFETIME(UDoorComponent, CurrentDoorHealth);
}


