#include "Electronic.h"
#include "Components/SceneComponent.h"
#include "FMODAudioComponent.h"
#include "Net/UnrealNetwork.h"

AElectronic::AElectronic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->bEnabled = false;
    this->bPowered = true;
    this->bBroken = false;
    this->bLocked = false;
    this->bAutoLockOnDisable = false;
    this->AutoLockTime = 3.00f;
    this->bCanBreakWhenLocked = false;
    this->bUpdateEnabledOnPower = true;
    this->bOneUse = false;
    this->bHasBeenUsed = false;
    this->bOneShot = false;
    this->bAutoDisable = false;
    this->AutoDisableTime = 0.10f;
    this->bRunConstructionScript = true;
    this->bUpdateEnabledOnBreak = true;
    this->bEnableOnBreak = false;
    this->bCanBeBroken = true;
    this->MaxHealth = 100.00f;
    this->bOverrideStartingHealth = false;
    this->Health = 100.00f;
    this->MostRecentInstigator = NULL;
    this->bUseDamageTypes = false;
    this->OneUseParticle = NULL;
    this->OneUseSound = NULL;
    this->BreakParticle = NULL;
    this->EnableSound = NULL;
    this->DisableSound = NULL;
    this->EnabledSound = NULL;
    this->BreakSound = NULL;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->LoopingAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("LoopingAudio"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Audio"));
    this->BeginPlayAction = NULL;
    this->EndPlayAction = NULL;
    this->EnableAction = NULL;
    this->DisableAction = NULL;
    this->PowerAction = NULL;
    this->UnPowerAction = NULL;
    this->BreakAction = NULL;
    this->LockAction = NULL;
    this->UnLockAction = NULL;
    this->LoopingAudioComponent->SetupAttachment(RootComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
}

void AElectronic::UnPower(AActor* Caller) {
}

void AElectronic::Unlock() {
}

void AElectronic::UnBreak() {
}

void AElectronic::Toggle(AActor* Caller) {
}

void AElectronic::StartLoopingSound_Implementation(bool bRandomPosition) {
}

void AElectronic::SetPowered(bool bPower, AActor* Caller) {
}

void AElectronic::SetHasBeenUsed(bool bNewHasBeenUsed) {
}

void AElectronic::SetEnabled(bool bEnable, AActor* Caller) {
}

void AElectronic::ServerUnPower_Implementation(AActor* Caller) {
}

void AElectronic::ServerUnlock_Implementation() {
}

void AElectronic::ServerPower_Implementation(AActor* Caller) {
}

void AElectronic::ServerLock_Implementation() {
}

void AElectronic::ServerEnable_Implementation(AActor* Caller) {
}

void AElectronic::ServerDisable_Implementation(AActor* Caller) {
}

void AElectronic::ServerBreak_Implementation(AActor* Caller) {
}







void AElectronic::Power(AActor* Caller) {
}

void AElectronic::PlayEnableSound_Implementation() {
}

void AElectronic::PlayDisableSound_Implementation() {
}

void AElectronic::OnUnlock() {
}

void AElectronic::OnRep_Health() {
}

void AElectronic::OnRep_bPowered() {
}

void AElectronic::OnRep_bLocked() {
}

void AElectronic::OnRep_bHasBeenUsed() {
}

void AElectronic::OnRep_bEnabled() {
}

void AElectronic::OnRep_bBroken() {
}

void AElectronic::OnLock() {
}

void AElectronic::OnHealthChanged_Implementation() {
}

void AElectronic::OnFirstUse() {
}

void AElectronic::OnEnable() {
}

void AElectronic::OnDisable() {
}

void AElectronic::OnBreak() {
}

void AElectronic::MulticastEnable_Implementation(AActor* Caller) {
}

void AElectronic::MulticastDisable_Implementation(AActor* Caller) {
}

void AElectronic::MulticastBreak_Implementation(AActor* Caller) {
}

void AElectronic::Lock() {
}

bool AElectronic::IsPowered() const {
    return false;
}

bool AElectronic::IsOneUse() const {
    return false;
}

bool AElectronic::IsEnabled() const {
    return false;
}

bool AElectronic::IsBroken() const {
    return false;
}

bool AElectronic::HasBeenUsed() const {
    return false;
}

bool AElectronic::GetEnableOnBreak() const {
    return false;
}

bool AElectronic::GetCanBreak() const {
    return false;
}

bool AElectronic::GetCanBeBroken() const {
    return false;
}

void AElectronic::Enable(AActor* Caller) {
}

void AElectronic::Disable(AActor* Caller) {
}

bool AElectronic::CanEnable(AActor* Caller) {
    return false;
}

bool AElectronic::CanDisable(AActor* Caller) {
    return false;
}

void AElectronic::Break(AActor* Caller) {
}

void AElectronic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElectronic, bEnabled);
    DOREPLIFETIME(AElectronic, bPowered);
    DOREPLIFETIME(AElectronic, bBroken);
    DOREPLIFETIME(AElectronic, bLocked);
    DOREPLIFETIME(AElectronic, bHasBeenUsed);
    DOREPLIFETIME(AElectronic, MaxHealth);
    DOREPLIFETIME(AElectronic, Health);
}


