#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "SignificanceUser.h"
#include "CharacterControllerChangedDelegateDelegate.h"
#include "CharacterItemSlotUpdatedDelegateDelegate.h"
#include "CharacterItemUpdatedDelegateDelegate.h"
#include "CharacterPlayerStateChangedDelegateDelegate.h"
#include "CharacterSlotUpdatedDelegateDelegate.h"
#include "ClimbableExit.h"
#include "EFPSCharacterAbilities.h"
#include "EFPSCharacterState.h"
#include "FPSDamageSound.h"
#include "FPSItemSlotData.h"
#include "FPSLoadout.h"
#include "MagazineData.h"
#include "MeleeUser.h"
#include "SimpleHitData.h"
#include "Suppressable.h"
#include "Templates/SubclassOf.h"
#include "FPSCharacterBase.generated.h"

class AActor;
class AController;
class AFPSItem;
class AFPSItemPickup;
class APawn;
class APlayerController;
class APlayerState;
class UAimingCameraModifier;
class UAnimMontage;
class UCameraAnimationCameraModifier;
class UCameraComponent;
class UCameraModifier;
class UClimbableComponent;
class UDamageCameraModifier;
class UDamageType;
class UFMODEvent;
class UFPSCharacterMovementComponent;
class UFPSItemData;
class ULowHealthCameraModifier;
class UNightVisionCameraModifier;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USignificanceComponent;
class USkeletalMeshComponent;
class USprintingCameraModifier;
class USuppressionCameraModifier;

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSCharacterBase : public ACharacter, public IAISightTargetInterface, public IMeleeUser, public ISuppressable, public IGenericTeamAgentInterface, public ISignificanceUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EquippedItem, meta=(AllowPrivateAccess=true))
    AFPSItem* EquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Hotbar, meta=(AllowPrivateAccess=true))
    TArray<AFPSItem*> Hotbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AssetIDsToLoad, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> AssetIDsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFPSItem* ClientEquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFPSItem* ClientDequippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    int32 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Abilities, meta=(AllowPrivateAccess=true))
    int32 Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEquipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDequipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowedToSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedToBracedAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceBracedAimInNightVision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpItemDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowReadySpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> GenericDamageClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BoneDamageMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DefaultDamageSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UDamageType>, FFPSDamageSound> DamageSoundOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeaningHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeaningDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionOffsetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSafeFallingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamagePerMetre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysDropHeldItemOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MountDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentMountEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentMountLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentMountHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterMovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSprintForwardFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandSprintDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandJumpDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSprintDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SprintDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RecoilSettling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CameraRecoilMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RecoilDeadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilSmoothingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipfireRecoilAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingRecoilAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchingRecoilMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MountedRecoilMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOneHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceLowReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHeightOverBore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProneEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraTargetFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraCurrentFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraDefaultFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothSightDirectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothSightPositionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSmoothADSPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchHeightSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenterViewOnADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationOffsetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimSmoothingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FreeAimDeadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeAimInBracedAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationCameraRotationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LookX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LookY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D SmoothRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector2D CurrentRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentFreeAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SmoothFreeAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PendingCameraPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CameraPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseCameraPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentFreeAimMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SmoothLocalSightForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SmoothLocalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ADSPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TargetEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastApexHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastGroundedHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentCrouchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, ReplicatedUsing=OnRep_Rotation, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FMagazineData> Ammunition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bShouldUseDeathCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterItemSlotUpdatedDelegate OnEquipItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterItemUpdatedDelegate OnDequipItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterItemUpdatedDelegate OnStartItemPrimaryAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterItemUpdatedDelegate OnStartItemSecondaryAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterItemUpdatedDelegate OnCycleItemMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterItemUpdatedDelegate OnToggleItemSpecial;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterItemUpdatedDelegate OnCheckItemAmmo;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterSlotUpdatedDelegate OnHotbarChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<USuppressionCameraModifier> SuppressionCameraModifierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULowHealthCameraModifier> LowHealthCameraModifierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<USprintingCameraModifier> SprintingCameraModifierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNightVisionCameraModifier> NighVisionCameraModifierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAimingCameraModifier> AimingCameraModifierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraAnimationCameraModifier> CameraAnimationCameraModifierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageCameraModifier> DamageCameraModifierClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Suppression, meta=(AllowPrivateAccess=true))
    float Suppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSuppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuperSonicShotSuppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotSuppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USuppressionCameraModifier* SuppressionCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprintingCameraModifier* SprintingCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULowHealthCameraModifier* LowHealthCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNightVisionCameraModifier* NightVisionCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimingCameraModifier* AimingCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnimationCameraModifier* CameraAnimationCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageCameraModifier* DamageCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastHit, meta=(AllowPrivateAccess=true))
    FSimpleHitData LastHit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerController> LastViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFPSCharacterMovementComponent* FPSCharacterMovement;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPlayerStateChangedDelegate OnPlayerStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterControllerChangedDelegate OnControllerChanged;
    
    AFPSCharacterBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSkinColor(const FLinearColor& Color, int32 PrimitiveColorIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMount();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateBracedAim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBaseMovementSpeed();
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryKick(UObject* Kickable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryAddAmmo(bool bUseFullAmmo, bool bAllItems, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void ToggleBracedAim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchToSlot(int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchItem(AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartPickupItem(AFPSItemPickup* Pickup);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadAndSwitchItem(FPrimaryAssetId ItemId, AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadAndAddItem(TSoftObjectPtr<UFPSItemData> Item, FFPSItemSlotData SlotData, bool bEquip);
    
    UFUNCTION(BlueprintCallable)
    void StartKick(UObject* Kickable);
    
    UFUNCTION(BlueprintCallable)
    void StartClimb(UClimbableComponent* Climbable);
    
    UFUNCTION(BlueprintCallable)
    void SetWantsBracedAim(bool bWantsBracedAim);
    
    UFUNCTION(BlueprintCallable)
    void SetState(bool bValue, int32 Mask);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRotation(FRotator NewRotation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPostProcessLayerBlendWeight(UCameraComponent* Component, int32 Index, float Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPerspective(bool bNewIsFirstPerson, bool bApplyArmsAnimation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLastHit(FSimpleHitData HitData);
    
    UFUNCTION(BlueprintCallable)
    void SetHotbar(TArray<AFPSItem*> Items);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedItem(AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealth(float NewHealth);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterVisibility(bool bShouldBeVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterMovementSpeedMultiplier(float NewMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBracedAim(bool bBracedAim);
    
    UFUNCTION(BlueprintCallable)
    void SetAimingVisualsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilities(bool bValue, int32 Mask);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSwitchItem(AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetBracedAim(bool bBracedAim);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDie(AController* InInstigator, TSubclassOf<UDamageType> KillingDamageType, FName LastHitBone);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void RemoveItemAndEquip(AFPSItem* Item, int32 Slot);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void RemoveItem(AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ReceiveTakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceiveShouldTakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveServerDie(AController* InInstigator, TSubclassOf<UDamageType> KillingDamageType, FName LastHitBone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerStateUpdated(APlayerState* NewPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Suppression();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Rotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_LastHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Hotbar();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_EquippedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AssetIDsToLoad();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Abilities();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnItemDataLoaded(AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndClimb(UClimbableComponent* ClimbableComponent, const FClimbableExit& Exit);
    
    UFUNCTION(BlueprintCallable)
    bool IsReserveAmmoFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson(bool bCheckLocal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWantsBracedAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWantsAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsingNightVision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsingMelee() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalReserveMagazines();
    
    UFUNCTION(BlueprintCallable)
    float GetTotalAmmoPercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USkeletalMeshComponent* GetThirdPersonMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetState(TEnumAsByte<EFPSCharacterState> Mask) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetSpringArm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetProne() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementSpeedMultiplierForItem(int32 Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMounted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMeleeReadyRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMeleeReadyLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMeleeBasePoseLeft() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxReserveMagazines();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMagazineData GetMagazineData(FPrimaryAssetId AssetID, int32& Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLowReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFPSLoadout GetLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLeaningRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLeaningLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLeaning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKicking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInspecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFPSCharacterMovementComponent* GetFPSCharacterMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetForcedBracedAim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USkeletalMeshComponent* GetFirstPersonMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFPSItem* GetFirstItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEyesLocationNoOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetEyesLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedItemIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEmptyReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClimbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCheckingAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCancelledReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBracedAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimingMovementSpeedMultiplierForItem(int32 Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAbilities(TEnumAsByte<EFPSCharacterAbilities::Type> Mask) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishPickupItem(AFPSItemPickup* Pickup, TSoftObjectPtr<UFPSItemData> Item, FFPSItemSlotData SlotData, bool bEquip);
    
    UFUNCTION(BlueprintCallable)
    void FinishLoadAndSwitchItem(FPrimaryAssetId ItemId, AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void FinishLoadAndAddItem(TSoftObjectPtr<UFPSItemData> Item, FFPSItemSlotData SlotData, bool bEquip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishKick();
    
    UFUNCTION(BlueprintCallable)
    bool FindCorner(FVector Normal, float WallDistance, float CapsuleRadius, float CornerDistance, bool bUseComplex, FVector& CornerPosition, UPrimitiveComponent*& CornerObject);
    
    UFUNCTION(BlueprintCallable)
    void EndClimb();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFPSItemPickup* DropItem(AFPSItem* Item, TSubclassOf<AFPSItemPickup> PickupClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedSprinting(bool bSprinting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedReloading(bool bReloading);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedProne(bool bProne);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedNightVision(bool bUsingNightVision);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedMounted(bool bMounted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedLowReady(bool bLowReady);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedLeaningRight(bool bLeaningRight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedLeaningLeft(bool bLeaningLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedLeaning(bool bLeaning);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedKicking(bool bKicking);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedInspecting(bool bInspecting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedFiring(bool bFiring);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedDead(bool bDead);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedCrouching(bool bCrouching);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedCheckingWatch(bool bIsCheckingWatch);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedCheckingAmmo(bool bCheckingAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUpdatedAiming(bool bAiming);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticSwitchItem(AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void CosmeticPlayDamageSound(float Damage, APawn* InInstigatorPawn, TSubclassOf<UDamageType> DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticFinishEquipItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticFinishDequipItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticEquipItem(AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticDie(APawn* InInstigatorPawn, TSubclassOf<UDamageType> KillingDamageType, FName LastHitBone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticDequipItem(AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void CosmeticDeathCamera(APawn* InInstigatorPawn, TSubclassOf<UDamageType> KillingDamageType, FName LastHitBone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanVault(FTransform CornerLocation, float EyeHeight, UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPickupItem(AFPSItemPickup* Pickup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLowReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanForceLowReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddAmmo(bool bUseFullAmmo, bool bAllItems, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable)
    static UCameraModifier* BlueprintFindOrAddCameraModifier(APlayerController* PC, TSubclassOf<UCameraModifier> Class);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlendNightVision();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlendHeight(bool bCovered);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRotationOffset();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPositionOffset(FVector& Delta);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ApplyDamage(AController* InInstigator, float Damage, TSubclassOf<UDamageType> DamageType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddSuppression(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddRotationOffset(FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    void AddRecoil(FVector2D Recoil);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void AddItem(UFPSItemData* ItemData, FFPSItemSlotData SlotData, bool bEquip);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddFreeAim(FVector FreeAim);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void ApplySignificance(USignificanceComponent* Component, float NewSignificance, float OldSignificance) override PURE_VIRTUAL(ApplySignificance,);
    
};

