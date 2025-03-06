#include "ResonatorCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIMeleeComponent -FallbackName=SAIMeleeComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
#include "FastCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "ResonatorController.h"

AResonatorCharacter::AResonatorCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFastCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AResonatorController::StaticClass();
    this->MeleeComponent = CreateDefaultSubobject<USAIMeleeComponent>(TEXT("SAIMelee"));
    this->CurrentTarget = NULL;
    this->bIsTargetVisible = false;
    this->bEating = false;
    this->bIsDead = false;
    this->CurrentHealth = 300.00f;
    this->MaxHealth = 300.00f;
    this->CurrentMoveSpeed = 0.00f;
    this->MinimumMovementSpeed = 19.00f;
    this->MaximumMovementSpeed = 400.00f;
    this->MinMoveSpeedVariance = 0.80f;
    this->MaxMoveSpeedVariance = 1.10f;
    this->RandomMoveSpeedVariance = 0.00f;
}

void AResonatorCharacter::SetMinMoveSpeedVariance(float DesiredMinVariance) {
}

void AResonatorCharacter::SetMinimumMovementSpeed(float DesiredMinimum) {
}

void AResonatorCharacter::SetMaxMoveSpeedVariance(float DesiredMaxVariance) {
}

void AResonatorCharacter::SetMaximumMovementSpeed(float DesiredMaximum) {
}

void AResonatorCharacter::SetEating(bool bNewEating) {
}

void AResonatorCharacter::SetCurrentMoveSpeed(float DesiredSpeed) {
}

void AResonatorCharacter::OnRep_IsDead() {
}

void AResonatorCharacter::OnRep_Eating_Implementation() {
}

void AResonatorCharacter::OnRep_CurrentMoveSpeed_Implementation() {
}

float AResonatorCharacter::GetRandomMoveSpeedVariance() const {
    return 0.0f;
}

float AResonatorCharacter::GetMinMoveSpeedVariance() const {
    return 0.0f;
}

float AResonatorCharacter::GetMinimumMovementSpeed() const {
    return 0.0f;
}

float AResonatorCharacter::GetMaxMoveSpeedVariance() const {
    return 0.0f;
}

float AResonatorCharacter::GetMaximumMovementSpeed() const {
    return 0.0f;
}

float AResonatorCharacter::GetCurrentMoveSpeed() const {
    return 0.0f;
}

void AResonatorCharacter::Die_Implementation(AActor* Causer, AController* InstigatedBy) {
}

void AResonatorCharacter::CosmeticDie_Implementation() {
}

void AResonatorCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResonatorCharacter, CurrentTarget);
    DOREPLIFETIME(AResonatorCharacter, bIsTargetVisible);
    DOREPLIFETIME(AResonatorCharacter, LastSeenTargetPosition);
    DOREPLIFETIME(AResonatorCharacter, FocusLocation);
    DOREPLIFETIME(AResonatorCharacter, ControlRotation);
    DOREPLIFETIME(AResonatorCharacter, DesiredRotation);
    DOREPLIFETIME(AResonatorCharacter, bEating);
    DOREPLIFETIME(AResonatorCharacter, bIsDead);
    DOREPLIFETIME(AResonatorCharacter, CurrentHealth);
    DOREPLIFETIME(AResonatorCharacter, CurrentMoveSpeed);
}


