#include "FPSAttachment.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "FMODAudioComponent.h"
#include "Net/UnrealNetwork.h"

AFPSAttachment::AFPSAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetUseOwnerRelevancy = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AttachmentDataClass = NULL;
    this->bIsDisplay = false;
    this->BIsEnabled = true;
    this->bHasBeenAttached = false;
    this->FirstPerson = CreateDefaultSubobject<USceneComponent>(TEXT("FirstPerson"));
    this->ThirdPerson = CreateDefaultSubobject<USceneComponent>(TEXT("ThirdPerson"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh3P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh3P"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODAudio"));
    this->AttachmentData = NULL;
    this->OwningItem = NULL;
    this->FirstPersonAttachComponent = NULL;
    this->ThirdPersonAttachComponent = NULL;
    this->FirstPerson->SetupAttachment(RootComponent);
    this->ThirdPerson->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(FirstPerson);
    this->Mesh3P->SetupAttachment(ThirdPerson);
    this->AudioComponent->SetupAttachment(Mesh);
}

void AFPSAttachment::SetupAttachmentData_Implementation() {
}

void AFPSAttachment::SetOwningItem(AFPSItem* NewItem) {
}

void AFPSAttachment::SetIsEnabled(bool NewEnabled) {
}

void AFPSAttachment::SetEnabled_Implementation(bool bEnabled) {
}

void AFPSAttachment::SetAttachMeshes(USceneComponent* FirstPersonMesh, USceneComponent* ThirdPersonMesh) {
}

void AFPSAttachment::SetAttachmentVisibility_Implementation(bool bNewVisibility) {
}

void AFPSAttachment::SetAttachmentPerspective_Implementation(bool bIsFirstPerson) {
}

void AFPSAttachment::ServerSetEnabled_Implementation(bool bEnabled) {
}

void AFPSAttachment::ServerAttach_Implementation(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot) {
}

void AFPSAttachment::OnUpdateNightVision_Implementation(bool bIsNightVision) {
}

void AFPSAttachment::OnUpdateADS_Implementation(bool bNewADS) {
}

void AFPSAttachment::OnRep_OwningItem_Implementation() {
}

void AFPSAttachment::OnRep_IsEnabled_Implementation() {
}

void AFPSAttachment::OnRep_AttachmentReplicatedData_Implementation() {
}

void AFPSAttachment::OnParentItemDataLoaded(AFPSItem* Item) {
}

void AFPSAttachment::OnEquip_Implementation() {
}

void AFPSAttachment::OnDequip_Implementation() {
}

void AFPSAttachment::OnDeath_Implementation() {
}

void AFPSAttachment::OnApplyCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic) {
}

USceneComponent* AFPSAttachment::GetThirdPersonRoot() const {
    return NULL;
}

USkeletalMeshComponent* AFPSAttachment::GetThirdPersonMesh() {
    return NULL;
}

FTransform AFPSAttachment::GetRelativeTransform() {
    return FTransform{};
}

AFPSItem* AFPSAttachment::GetOwningItem() const {
    return NULL;
}

USceneComponent* AFPSAttachment::GetFirstPersonRoot() const {
    return NULL;
}

USkeletalMeshComponent* AFPSAttachment::GetFirstPersonMesh() {
    return NULL;
}

UFMODAudioComponent* AFPSAttachment::GetAudioComponent() const {
    return NULL;
}

FName AFPSAttachment::GetAttachSocket(FRotator& RotationOffset) const {
    return NAME_None;
}

void AFPSAttachment::GetAttachMeshes(USceneComponent*& FirstPersonMesh, USceneComponent*& ThirdPersonMesh) const {
}

UStaticMesh* AFPSAttachment::GetAttachMesh(FName& AttachSocket) const {
    return NULL;
}

UFPSAttachmentData* AFPSAttachment::GetAttachmentData() const {
    return NULL;
}

bool AFPSAttachment::Attach_Implementation(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot) {
    return false;
}

void AFPSAttachment::ApplyCosmeticByName(FName Name) {
}

void AFPSAttachment::ApplyCosmetic(int32 Index) {
}

void AFPSAttachment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFPSAttachment, AttachmentReplicatedData);
    DOREPLIFETIME(AFPSAttachment, BIsEnabled);
    DOREPLIFETIME(AFPSAttachment, OwningItem);
}


