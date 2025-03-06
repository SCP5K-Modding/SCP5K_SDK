#include "FPSItemPickup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SignificanceBase -ObjectName=SignificanceComponent -FallbackName=SignificanceComponent
#include "Net/UnrealNetwork.h"

AFPSItemPickup::AFPSItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mesh = NULL;
    this->PickupEvent = NULL;
    this->bStartEnabled = true;
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->SignificanceComponent = CreateDefaultSubobject<USignificanceComponent>(TEXT("Significance"));
    this->bOneUse = false;
    this->bSwap = false;
    this->bEnabled = true;
    this->bHideWhenDisabled = false;
    this->bUsePhysics = true;
    this->bWasSpawned = false;
    this->MinPhysicsSignificance = 0.30f;
    this->MinSkelMeshRenderSignificance = 0.30f;
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AFPSItemPickup::UpdateCosmetic_Implementation() {
}

void AFPSItemPickup::UpdateAttachments_Implementation() {
}

void AFPSItemPickup::SetWasSpawned(bool bNewWasSpawned) {
}

void AFPSItemPickup::SetUsePhysics(bool bNewUsePhysics) {
}

void AFPSItemPickup::SetSwap(bool bNewSwap) {
}

void AFPSItemPickup::SetStartEnabled(bool bNewStartEnabled) {
}

void AFPSItemPickup::SetOneUse(bool bNewOneUse) {
}

void AFPSItemPickup::SetItem(TSoftObjectPtr<UFPSItemData> ItemData, FFPSItemSlotData Slot) {
}

void AFPSItemPickup::SetHideWhenDisabled(bool bNewHideWhenDisabled) {
}

void AFPSItemPickup::SetEnabled(bool bNewEnabled) {
}

void AFPSItemPickup::ResetPickup_Implementation() {
}

void AFPSItemPickup::Pickup(AFPSCharacterBase* Character) {
}

void AFPSItemPickup::OnRep_SlotData_Implementation() {
}

void AFPSItemPickup::OnRep_Item_Implementation() {
}

void AFPSItemPickup::OnRep_HideWhenDisabled() {
}

void AFPSItemPickup::OnRep_Enabled_Implementation() {
}

void AFPSItemPickup::OnApplyCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic) {
}

void AFPSItemPickup::ItemLoaded() {
}

bool AFPSItemPickup::GetWasSpawned() const {
    return false;
}

bool AFPSItemPickup::GetSwap() const {
    return false;
}

FFPSItemSlotData AFPSItemPickup::GetSlotData() const {
    return FFPSItemSlotData{};
}

TSoftObjectPtr<UFPSItemData> AFPSItemPickup::GetItem() const {
    return NULL;
}

bool AFPSItemPickup::GetEnabled() const {
    return false;
}

void AFPSItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFPSItemPickup, Item);
    DOREPLIFETIME(AFPSItemPickup, SlotData);
    DOREPLIFETIME(AFPSItemPickup, bOneUse);
    DOREPLIFETIME(AFPSItemPickup, bSwap);
    DOREPLIFETIME(AFPSItemPickup, bEnabled);
    DOREPLIFETIME(AFPSItemPickup, bHideWhenDisabled);
    DOREPLIFETIME(AFPSItemPickup, bUsePhysics);
    DOREPLIFETIME(AFPSItemPickup, bWasSpawned);
}


