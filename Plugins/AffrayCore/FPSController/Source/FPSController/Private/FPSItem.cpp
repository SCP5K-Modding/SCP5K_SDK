#include "FPSItem.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "FPSItemData.h"
#include "Net/UnrealNetwork.h"

AFPSItem::AFPSItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetUseOwnerRelevancy = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ItemDataClass = UFPSItemData::StaticClass();
    this->bIsEquipped = false;
    this->bIsDisplay = false;
    this->bIsEquipping = false;
    this->bIsAnimationInitialized = false;
    this->bIsInitialized = false;
    this->CurrentCosmetic = -1;
    this->PreviousCosmetic = -1;
    this->MeleeDistanceTolerance = 150.00f;
    this->MeleeAngleTolerance = 90.00f;
    this->bSubtractPingFromMeleeDelay = false;
    this->FPSCharacter = NULL;
    this->ItemData = NULL;
    this->Delay = 0.00f;
    this->DeltaTime = 0.00f;
    this->ArmsAnimationInstance = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->FirstPerson = CreateDefaultSubobject<USceneComponent>(TEXT("FirstPerson"));
    this->ThirdPerson = CreateDefaultSubobject<USceneComponent>(TEXT("ThirdPerson"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh3P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh3P"));
    this->FirstPerson->SetupAttachment(RootComponent);
    this->ThirdPerson->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(FirstPerson);
    this->Mesh3P->SetupAttachment(ThirdPerson);
}

void AFPSItem::ToggleSpecial_Implementation() {
}

void AFPSItem::StopSecondaryAction_Implementation() {
}

void AFPSItem::StopPrimaryAction_Implementation() {
}

void AFPSItem::StartSecondaryAction_Implementation() {
}

void AFPSItem::StartPrimaryAction_Implementation() {
}

void AFPSItem::StartEquip_Implementation() {
}

void AFPSItem::StartDequip_Implementation() {
}

void AFPSItem::StartBash_Implementation() {
}

void AFPSItem::SetupItemData_Implementation(UFPSItemData* Data) {
}

void AFPSItem::SetupAnimationData_Implementation() {
}

void AFPSItem::SetItemVisibility_Implementation(bool bVisible) {
}

void AFPSItem::SetItemPerspective_Implementation(bool bIsFirstPerson) {
}

void AFPSItem::SetIsEquipped(bool bNewIsEquipped) {
}

void AFPSItem::SetFPSCharacter(AFPSCharacterBase* NewCharacter) {
}

void AFPSItem::SetDelay(float NewDelay) {
}

void AFPSItem::SetCurrentCosmetic(int32 NewCosmetic) {
}

void AFPSItem::SetCharacter(AFPSCharacterBase* Character) {
}

void AFPSItem::SetBoneVisibility(FName Name, bool bVisible) {
}

void AFPSItem::ServerStartEquip_Implementation() {
}

void AFPSItem::ServerStartDequip_Implementation() {
}

void AFPSItem::ServerInitItem_Implementation() {
}

void AFPSItem::ServerFinishBash() {
}

void AFPSItem::ServerCheckAmmo_Implementation() {
}

void AFPSItem::ServerBash_Implementation(FMeleeHitData Data, const TArray<FSimpleHitData>& Hits) {
}

void AFPSItem::ServerApplyCosmetic_Implementation(int32 Index) {
}

bool AFPSItem::RemoveAttachMesh(const FAttachmentSlotData& AttachmentSlotData, AFPSAttachment* Attachment) {
    return false;
}

void AFPSItem::OwnerTick_Implementation() {
}

void AFPSItem::OnUpdateSprinting_Implementation(bool bIsSprinting) {
}

void AFPSItem::OnUpdateNightVision_Implementation(bool bIsNightVision) {
}

void AFPSItem::OnRep_MeleeData() {
}

void AFPSItem::OnRep_ItemDataAssetID() {
}

void AFPSItem::OnRep_IsEquipped_Implementation() {
}

void AFPSItem::OnRep_FPSCharacter_Implementation() {
}

void AFPSItem::OnRep_CurrentCosmetic_Implementation() {
}

void AFPSItem::OnRemove_Implementation() {
}

void AFPSItem::OnDeath_Implementation() {
}

void AFPSItem::OnCharacterDestroyed(AActor* DestoyedActor) {
}

void AFPSItem::OnApplyCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic) {
}

void AFPSItem::OnAdd_Implementation() {
}

void AFPSItem::MulticastCheckAmmo_Implementation() {
}

void AFPSItem::Jiggle_Implementation() {
}

bool AFPSItem::IsValidItem() const {
    return false;
}

bool AFPSItem::IsLocallyOwned() const {
    return false;
}

USceneComponent* AFPSItem::GetThirdPersonRoot() const {
    return NULL;
}

USkeletalMeshComponent* AFPSItem::GetThirdPersonMesh() const {
    return NULL;
}

FFPSItemSlotData AFPSItem::GetSlotData() const {
    return FFPSItemSlotData{};
}

AFPSCharacterBase* AFPSItem::GetOwningCharacter() const {
    return NULL;
}

float AFPSItem::GetMovementSpeedMultiplier() const {
    return 0.0f;
}

USkeletalMeshComponent* AFPSItem::GetMesh_Implementation() const {
    return NULL;
}

FPrimaryAssetId AFPSItem::GetItemDataAssetID() const {
    return FPrimaryAssetId{};
}

UFPSItemData* AFPSItem::GetItemData() const {
    return NULL;
}

USceneComponent* AFPSItem::GetFirstPersonRoot() const {
    return NULL;
}

USkeletalMeshComponent* AFPSItem::GetFirstPersonMesh() const {
    return NULL;
}

float AFPSItem::GetDelay() const {
    return 0.0f;
}

void AFPSItem::FinishedLoadingItemData() {
}

void AFPSItem::CycleMode_Implementation() {
}

void AFPSItem::CosmeticStartEquip_Implementation() {
}

void AFPSItem::CosmeticStartDequip_Implementation() {
}

void AFPSItem::CosmeticKick_Implementation(bool bSuccess) {
}

void AFPSItem::CosmeticFinishBash_Implementation(bool bSuccess) {
}

void AFPSItem::CosmeticEndEquip_Implementation() {
}

void AFPSItem::CosmeticEndDequip_Implementation() {
}

void AFPSItem::CosmeticCheckAmmo_Implementation() {
}

void AFPSItem::CosmeticBash_Implementation(bool bSuccess) {
}

void AFPSItem::ClientTick_Implementation() {
}

void AFPSItem::CheckBash_Implementation() {
}

void AFPSItem::CheckAmmo_Implementation() {
}

void AFPSItem::CharacterUpdated_Implementation() {
}

bool AFPSItem::CanUseItem_Implementation(float Bias) const {
    return false;
}

bool AFPSItem::CanUseGesture_Implementation() const {
    return false;
}

bool AFPSItem::CanUseCosmetic_Implementation(int32 Index) {
    return false;
}

bool AFPSItem::CanBash_Implementation(float Bias) const {
    return false;
}

bool AFPSItem::CanAddAmmo_Implementation(int32 InAmount) const {
    return false;
}

void AFPSItem::ApplyCosmeticNoChecks(int32 Index) {
}

void AFPSItem::ApplyCosmetic_Implementation(int32 Index) {
}

UStaticMeshComponent* AFPSItem::AddAttachMesh(const FAttachmentSlotData& AttachmentSlotData, UStaticMeshComponent*& ThirdPersonAttachMesh, AFPSAttachment* Attachment) {
    return NULL;
}

void AFPSItem::AddAmmo_Implementation(bool bUseFullAmmo, int32 InAmount) {
}

void AFPSItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFPSItem, bIsEquipped);
    DOREPLIFETIME(AFPSItem, CurrentCosmetic);
    DOREPLIFETIME(AFPSItem, FPSCharacter);
    DOREPLIFETIME(AFPSItem, ItemDataAssetID);
    DOREPLIFETIME(AFPSItem, MeleeData);
    DOREPLIFETIME(AFPSItem, SlotData);
}


