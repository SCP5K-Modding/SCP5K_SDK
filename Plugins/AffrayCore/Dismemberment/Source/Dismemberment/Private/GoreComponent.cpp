#include "GoreComponent.h"
#include "Net/UnrealNetwork.h"

UGoreComponent::UGoreComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultGoreEvent = NULL;
    this->GoreDataTexture = NULL;
    this->bApplyGoreOnDamage = true;
    this->bDisallowFriendlyFire = false;
    this->GoreDamageThreshold = 20.00f;
    this->bSpawnGoreEffectsWhenOffscreen = true;
    this->bPlayGoreSounds = true;
    this->bSpawnGoreEffects = true;
    this->bFadeBlood = true;
    this->BloodFadeTime = 200.00f;
    this->bExpandBlood = true;
    this->MaxBloodExpandSize = 30.00f;
    this->BloodExpandSpeed = 2.00f;
    this->MaxPoints = 32;
    this->TextureRows = 4;
    this->bAutoInitialize = true;
}

void UGoreComponent::UpdateTexture(bool bUpdatePoints, bool bUpdateNormals, bool bUpdateElipses) {
}

void UGoreComponent::UpdateMaxIndex() {
}

void UGoreComponent::UpdateGorePointSize(int32 Index, float Scale) {
}

void UGoreComponent::UpdateGorePointAlpha(int32 Index, float Alpha) {
}

void UGoreComponent::UpdateGorePoint(int32 Index, FName BoneName, FVector position, FVector Normal, FVector Tangent, float Scale, float DecalScale, float BloodAlpha, bool bUpdateTexture) {
}

void UGoreComponent::UpdateGoreEllipse(int32 Index, FVector position, FRotator Rotation, FVector Scale, bool bUpdateTexture) {
}

bool UGoreComponent::TryAddGoreMesh(FVector position, float Damage, FName BoneName) {
    return false;
}

void UGoreComponent::OnTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UGoreComponent::OnRep_LastHit() {
}

void UGoreComponent::Initialize(bool bForceInitialize) {
}

int32 UGoreComponent::GetMaxEllipsoids() {
    return 0;
}

void UGoreComponent::Deinitialize() {
}

void UGoreComponent::AssetLoaded(UObject* Loaded) {
}

void UGoreComponent::AddGorePoint(FName BoneName, FVector position, FVector Normal, FVector Tangent, float Scale, float DecalScale, float BloodAlpha, bool bUpdateTexture) {
}

void UGoreComponent::AddGoreEllipse(FVector position, FRotator Rotation, FVector Scale, bool bUpdateTexture) {
}

void UGoreComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGoreComponent, LastHit);
}


