#include "DismembermentComponent.h"
#include "Net/UnrealNetwork.h"

UDismembermentComponent::UDismembermentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHideBonesOnDismember = true;
    this->bHideChildMeshesOnDismember = true;
    this->bDismemberOnDamage = false;
    this->DismembermentDamageThreshold = 80.00f;
    this->StumpMesh = NULL;
    this->SoftDismembermentParticle = NULL;
    this->ExplosiveDismembermentParticle = NULL;
    this->SkeletalMesh = NULL;
    this->DismembermentSound = NULL;
}

void UDismembermentComponent::SpawnParticle(FName BoneName, TEnumAsByte<EDismembermentType> Type) {
}

void UDismembermentComponent::OnTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UDismembermentComponent::OnRep_DismemberedBones() {
}

bool UDismembermentComponent::IsDismembered(FName BoneName) const {
    return false;
}

TSet<FName> UDismembermentComponent::GetDismemberedBones() {
    return TSet<FName>();
}

bool UDismembermentComponent::Dismember(FName BoneName, TEnumAsByte<EDismembermentType> Type) {
    return false;
}

void UDismembermentComponent::CosmeticDismemberBone(FName BoneName, TEnumAsByte<EDismembermentType> Type) {
}

void UDismembermentComponent::CosmeticDismember(FName BoneName, TEnumAsByte<EDismembermentType> Type) {
}

void UDismembermentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDismembermentComponent, DismemberedBones);
}


