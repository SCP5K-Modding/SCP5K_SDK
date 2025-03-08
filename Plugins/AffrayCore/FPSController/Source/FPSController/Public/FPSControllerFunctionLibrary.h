#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Chaos/ChaosEngineInterface.h"
#include "BallisticHitData.h"
#include "ConstantLerpDriver.h"
#include "EMeleeAttackDirection.h"
#include "FPSItemSlotData.h"
#include "FPSLoadout.h"
#include "LimitedSmoothLerpDriver.h"
#include "MeleeHitData.h"
#include "PhysicalLerpDriver.h"
#include "SimpleHitData.h"
#include "SmoothLerpDriver.h"
#include "Templates/SubclassOf.h"
#include "FPSControllerFunctionLibrary.generated.h"

class AActor;
class AFPSAttachment;
class AFPSCharacterBase;
class AFPSItem;
class AFPSItemPickup;
class UDamageType;
class UFPSItemData;
class UFPSRangedWeaponData;
class UFXSystemAsset;
class UFXSystemComponent;
class UObject;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FPSCONTROLLER_API UFPSControllerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFPSControllerFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static float TickSmoothLerpDriver(UPARAM(Ref) FSmoothLerpDriver& Driver, float Target, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static float TickPhysicalLerpDriver(UPARAM(Ref) FPhysicalLerpDriver& Driver, float Target, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static float TickLimitedSmoothLerpDriver(UPARAM(Ref) FLimitedSmoothLerpDriver& Driver, float Target, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static float TickConstantLerpDriver(UPARAM(Ref) FConstantLerpDriver& Driver, float Target, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AFPSItemPickup* SpawnPickup(UObject* WorldContext, TSubclassOf<AFPSItemPickup> PickupClass, UFPSItemData* Data, FFPSItemSlotData SlotData, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UFXSystemComponent* SpawnEffectAsset(UObject* WorldContext, FVector Location, FRotator Rotation, UFXSystemAsset* Asset, UPrimitiveComponent* AttachComponent, TEnumAsByte<EAttachLocation::Type> AttachType, bool bAutoDestroy, FName AttachBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SmoothLerpV(FVector A, FVector B, float Speed, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SmoothLerp(float A, float B, float Speed, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static FVector SettleVector(FVector Offset, FVector Settling, float DeltaTime, bool bNonLinearBlend, FVector& Delta);
    
    UFUNCTION(BlueprintCallable)
    static float SettleFloat(float Offset, float Settling, float DeltaTime, bool bNonLinearBlend, float& Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSimpleHitData MakeSimpleHitData(float Damage, FVector position, FVector HitFromDirection, FVector HitNormal, bool bRadial, UPrimitiveComponent* HitComponent, FName HitBoneName, TSubclassOf<UDamageType> DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMeleeHitData MakeMeleeHitData(bool bUsingMelee, bool bHit, bool bKicking, uint8 Time, EMeleeAttackDirection AttackDirection, FVector position, FVector Normal, TEnumAsByte<EPhysicalSurface> Surface, UPrimitiveComponent* HitComponent, uint8 AttackType, FName HitBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBallisticHitData MakeBallisticHitData(bool bDamage, bool bHit, bool bRicochet, uint8 Time, uint8 PhysicsMaterialIndex, FVector_NetQuantize position, FVector_NetQuantize Velocity, FVector_NetQuantizeNormal Normal, uint8 Distance, UPrimitiveComponent* HitComponent, FName HitBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNiagaraComponent(UFXSystemComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNiagaraAsset(UFXSystemAsset* Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoadoutEmpty(const FFPSLoadout& Loadout);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUsingMelee(const FMeleeHitData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSimpleDamage(const FSimpleHitData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSimpleBoneName(const FSimpleHitData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetNameFromPrimaryAssetID(const FPrimaryAssetId& AssetID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMeleeKicking(const FMeleeHitData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMeleeHit(const FMeleeHitData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMeleeAttackDirection GetMeleeAttackDirection(const FMeleeHitData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLODLevel(USkeletalMeshComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<AFPSItem> GetItemSoftClass(TSoftClassPtr<UObject> Class);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UFPSItemData> GetItemDataSoftObject(TSoftObjectPtr<UObject> Object);
    
    UFUNCTION(BlueprintCallable)
    static float GetControl(AFPSCharacterBase* Character, UFPSRangedWeaponData* WeaponData, const TArray<AFPSAttachment*>& Attachments);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBallisticDidHit(const FBallisticHitData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBallisticDidDamage(const FBallisticHitData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetBallisticBoneName(const FBallisticHitData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ConvertVectorToItemSpace(FVector Forward, FVector Up, FVector Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator ConvertRotationToItemSpace(FVector Forward, FVector Up, FRotator Rotation);
    
};

