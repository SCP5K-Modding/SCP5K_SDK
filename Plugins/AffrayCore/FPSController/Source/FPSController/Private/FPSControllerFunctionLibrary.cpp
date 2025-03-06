#include "FPSControllerFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UFPSControllerFunctionLibrary::UFPSControllerFunctionLibrary() {
}

float UFPSControllerFunctionLibrary::TickSmoothLerpDriver(FSmoothLerpDriver& Driver, float Target, float DeltaTime) {
    return 0.0f;
}

float UFPSControllerFunctionLibrary::TickPhysicalLerpDriver(FPhysicalLerpDriver& Driver, float Target, float DeltaTime) {
    return 0.0f;
}

float UFPSControllerFunctionLibrary::TickLimitedSmoothLerpDriver(FLimitedSmoothLerpDriver& Driver, float Target, float DeltaTime) {
    return 0.0f;
}

float UFPSControllerFunctionLibrary::TickConstantLerpDriver(FConstantLerpDriver& Driver, float Target, float DeltaTime) {
    return 0.0f;
}

AFPSItemPickup* UFPSControllerFunctionLibrary::SpawnPickup(UObject* WorldContext, TSubclassOf<AFPSItemPickup> PickupClass, UFPSItemData* Data, FFPSItemSlotData SlotData, FTransform Transform) {
    return NULL;
}

UFXSystemComponent* UFPSControllerFunctionLibrary::SpawnEffectAsset(UObject* WorldContext, FVector Location, FRotator Rotation, UFXSystemAsset* Asset, UPrimitiveComponent* AttachComponent, TEnumAsByte<EAttachLocation::Type> AttachType, bool bAutoDestroy, FName AttachBoneName) {
    return NULL;
}

FVector UFPSControllerFunctionLibrary::SmoothLerpV(FVector A, FVector B, float Speed, float DeltaTime) {
    return FVector{};
}

float UFPSControllerFunctionLibrary::SmoothLerp(float A, float B, float Speed, float DeltaTime) {
    return 0.0f;
}

FVector UFPSControllerFunctionLibrary::SettleVector(FVector Offset, FVector Settling, float DeltaTime, bool bNonLinearBlend, FVector& Delta) {
    return FVector{};
}

float UFPSControllerFunctionLibrary::SettleFloat(float Offset, float Settling, float DeltaTime, bool bNonLinearBlend, float& Delta) {
    return 0.0f;
}

FSimpleHitData UFPSControllerFunctionLibrary::MakeSimpleHitData(float Damage, FVector position, FVector HitFromDirection, FVector HitNormal, bool bRadial, UPrimitiveComponent* HitComponent, FName HitBoneName, TSubclassOf<UDamageType> DamageType, AActor* DamageCauser) {
    return FSimpleHitData{};
}

FMeleeHitData UFPSControllerFunctionLibrary::MakeMeleeHitData(bool bUsingMelee, bool bHit, bool bKicking, uint8 Time, TEnumAsByte<EMeleeAttackDirection> AttackDirection, FVector position, FVector Normal, TEnumAsByte<EPhysicalSurface> Surface, UPrimitiveComponent* HitComponent, uint8 AttackType, FName HitBoneName) {
    return FMeleeHitData{};
}

FBallisticHitData UFPSControllerFunctionLibrary::MakeBallisticHitData(bool bDamage, bool bHit, bool bRicochet, uint8 Time, uint8 PhysicsMaterialIndex, FVector_NetQuantize position, FVector_NetQuantize Velocity, FVector_NetQuantizeNormal Normal, uint8 Distance, UPrimitiveComponent* HitComponent, FName HitBoneName) {
    return FBallisticHitData{};
}

bool UFPSControllerFunctionLibrary::IsNiagaraComponent(UFXSystemComponent* Component) {
    return false;
}

bool UFPSControllerFunctionLibrary::IsNiagaraAsset(UFXSystemAsset* Asset) {
    return false;
}

bool UFPSControllerFunctionLibrary::IsLoadoutEmpty(const FFPSLoadout& Loadout) {
    return false;
}

bool UFPSControllerFunctionLibrary::GetUsingMelee(const FMeleeHitData& Data) {
    return false;
}

float UFPSControllerFunctionLibrary::GetSimpleDamage(const FSimpleHitData& Data) {
    return 0.0f;
}

FName UFPSControllerFunctionLibrary::GetSimpleBoneName(const FSimpleHitData& Data) {
    return NAME_None;
}

FName UFPSControllerFunctionLibrary::GetNameFromPrimaryAssetID(const FPrimaryAssetId& AssetID) {
    return NAME_None;
}

bool UFPSControllerFunctionLibrary::GetMeleeKicking(const FMeleeHitData& Data) {
    return false;
}

bool UFPSControllerFunctionLibrary::GetMeleeHit(const FMeleeHitData& Data) {
    return false;
}

TEnumAsByte<EMeleeAttackDirection> UFPSControllerFunctionLibrary::GetMeleeAttackDirection(const FMeleeHitData& Data) {
    return AD_None;
}

int32 UFPSControllerFunctionLibrary::GetLODLevel(USkeletalMeshComponent* Component) {
    return 0;
}

TSoftClassPtr<AFPSItem> UFPSControllerFunctionLibrary::GetItemSoftClass(TSoftClassPtr<UObject> Class) {
    return NULL;
}

TSoftObjectPtr<UFPSItemData> UFPSControllerFunctionLibrary::GetItemDataSoftObject(TSoftObjectPtr<UObject> Object) {
    return NULL;
}

float UFPSControllerFunctionLibrary::GetControl(AFPSCharacterBase* Character, UFPSRangedWeaponData* WeaponData, const TArray<AFPSAttachment*>& Attachments) {
    return 0.0f;
}

bool UFPSControllerFunctionLibrary::GetBallisticDidHit(const FBallisticHitData& Data) {
    return false;
}

bool UFPSControllerFunctionLibrary::GetBallisticDidDamage(const FBallisticHitData& Data) {
    return false;
}

FName UFPSControllerFunctionLibrary::GetBallisticBoneName(const FBallisticHitData& Data) {
    return NAME_None;
}

FVector UFPSControllerFunctionLibrary::ConvertVectorToItemSpace(FVector Forward, FVector Up, FVector Vector) {
    return FVector{};
}

FRotator UFPSControllerFunctionLibrary::ConvertRotationToItemSpace(FVector Forward, FVector Up, FRotator Rotation) {
    return FRotator{};
}


