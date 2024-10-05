#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NiagaraDataInterfaceExport.h"
#include "Chaos/ChaosEngineInterface.h"
#include "AttachmentSlotData.h"
#include "BallisticProjectileData.h"
#include "EFireMode.h"
#include "EReloadType.h"
#include "FPSWeapon.h"
#include "ReloadData.h"
#include "FPSRangedWeapon.generated.h"

class AFPSAttachment;
class AFPSBarrel;
class AFPSGrip;
class AFPSSight;
class UBallisticPhysicsMaterial;
class UFMODAudioComponent;
class UFPSRangedWeaponData;
class UFXSystemAsset;
class UFXSystemComponent;
class UPhysicalMaterial;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class FPSCONTROLLER_API AFPSRangedWeapon : public AFPSWeapon, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSRangedWeaponData* RangedWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* MuzzleFlashComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* MuzzleSmokeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* CasingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsInspecting, meta=(AllowPrivateAccess=true))
    bool bIsInspecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsPreFiring, meta=(AllowPrivateAccess=true))
    bool bIsPreFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsFiring, meta=(AllowPrivateAccess=true))
    bool bIsFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsAiming, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsLoaded, meta=(AllowPrivateAccess=true))
    bool bIsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsUsingAction, meta=(AllowPrivateAccess=true))
    bool bIsUsingAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReloadData, meta=(AllowPrivateAccess=true))
    FReloadData ReloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Magazines, meta=(AllowPrivateAccess=true))
    TArray<int32> Magazines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentMagIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Attachments, meta=(AllowPrivateAccess=true))
    TArray<AFPSAttachment*> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> AttachmentsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentGrip, meta=(AllowPrivateAccess=true))
    AFPSGrip* CurrentGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentBarrel, meta=(AllowPrivateAccess=true))
    AFPSBarrel* CurrentBarrel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentSight, meta=(AllowPrivateAccess=true))
    AFPSSight* CurrentSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentAmmo, meta=(AllowPrivateAccess=true))
    int32 CurrentAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BurstCount, meta=(AllowPrivateAccess=true))
    int32 BurstCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentFireMode, meta=(AllowPrivateAccess=true))
    EFireMode CurrentFireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsingAlternateGripPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastProjectiles, meta=(AllowPrivateAccess=true))
    TArray<FBallisticProjectileData> LastProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFPSSight*> Sights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTracerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADSAlignmentSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADSSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFPSSight> PreviousSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UBallisticPhysicsMaterial>> Physmats;
    
public:
    AFPSRangedWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantsDiscardMagazine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsingManualAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseFullAutoAudio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopFireAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMuzzleSmoke(UFXSystemAsset* Particle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMuzzleFlash(UFXSystemAsset* Particle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UFMODAudioComponent* StartFireAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCasing(UFXSystemAsset* Particle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SortMagazines();
    
    UFUNCTION(BlueprintCallable)
    void SetUsingAlternateGripPose(bool bNewValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetReloadData(FReloadData NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMagazines(TArray<int32> NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLastProjectiles(const TArray<FBallisticProjectileData>& InLastProjectiles);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUsingAction(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPreFiring(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLoaded(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInspecting(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFiring(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAiming(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSight(AFPSSight* Sight);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentGrip(AFPSGrip* Grip);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFireMode(EFireMode NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentBarrel(AFPSBarrel* Barrel);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAmmo(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBurstCount(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachments(TArray<AFPSAttachment*> NewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetIsFiring(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCurrentSight(AFPSSight* Sight);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCurrentGrip(AFPSGrip* Grip);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCurrentBarrel(AFPSBarrel* Barrel);
    
public:
    UFUNCTION(BlueprintCallable)
    void SerializeAttachments();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendMagazines();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_ReloadData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Magazines();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_LastProjectiles();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentSight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentGrip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentFireMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentBarrel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_BurstCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_bIsUsingAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_bIsPreFiring();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_bIsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_bIsInspecting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_bIsFiring();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_bIsAiming();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Attachments();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnParticleCollide(FVector Location, FVector Velocity, EPhysicalSurface Surface);
    
    UFUNCTION(BlueprintCallable)
    void OnCascadeParticleCollide(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuppressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotSight(int32 Index, bool& bIsCanted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotGrip(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompensated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSight(bool bAllowCanted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGrip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFullAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttachment(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsingAlternateGripPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSightPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSightDistance(FTransform HeadTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSightDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetSightComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReserveMagazines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReserveAmmo(bool bIncludeCurrentMag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EReloadType GetReloadType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRecoilMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecoilAnimationMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRecoil() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFPSRangedWeaponData* GetRangedWeaponData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextMagIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxReserveMagazines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxReserveAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoudness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKickMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetIronSight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIdleMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFPSSight* GetCurrentSight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFPSGrip* GetCurrentGrip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFireMode GetCurrentFireMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFPSBarrel* GetCurrentBarrel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetCasingEjectionLocation(bool bTransformToMesh, FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBulletsInNextMag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetBarrelLocation(bool bTransformToMesh, FRotator& Rotation, bool bIncludeAttachment) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetAttachmentData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetADSSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetADSAlignmentSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFPSAttachment* FindAttachmentAtSlot(int32 Index, FAttachmentSlotData& AttachmentSlotData, bool& bFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DropMagazine();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CycleMagazines();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReloadWhileSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReloadWhileAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInspect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeFiremode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCancelReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAim() const;
    
    UFUNCTION(BlueprintCallable)
    void AddMultipleMagazines(int32 Ammo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddMagazines(bool bForceFullAmmo, bool bReplace, bool bDisableDelay);
    
    UFUNCTION(BlueprintCallable)
    void AddMagazine(int32 Ammo);
    

    // Fix for true pure virtual functions not being implemented
};

