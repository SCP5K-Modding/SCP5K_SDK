#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AttachMeshHierachy.h"
#include "AttachmentSlotData.h"
#include "FPSCosmetic.h"
#include "FPSItemSlotData.h"
#include "MeleeHitData.h"
#include "SimpleHitData.h"
#include "Templates/SubclassOf.h"
#include "FPSItem.generated.h"

class AFPSAttachment;
class AFPSCharacterBase;
class AFPSItem;
class IFPSAnimationInstance;
class UFPSAnimationInstance;
class UFPSItemData;
class UFirstPersonAnimInstance;
class UMaterialInterface;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class FPSCONTROLLER_API AFPSItem : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemDataLoadedDelegate, AFPSItem*, Item);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAttachMeshHierachy> AttachMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFPSItemData> ItemDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHasPreviouslyEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEquipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAnimationInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCosmetic, meta=(AllowPrivateAccess=true))
    int32 CurrentCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeDistanceTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeAngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtractPingFromMeleeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCollisionWhenUnequipped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FPSCharacter, meta=(AllowPrivateAccess=true))
    AFPSCharacterBase* FPSCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSItemData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemDataAssetID, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ItemDataAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MeleeData, meta=(AllowPrivateAccess=true))
    FMeleeHitData MeleeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFPSAnimationInstance> ItemAnimationInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFPSAnimationInstance> ThirdPersonAnimationInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFirstPersonAnimInstance* ArmsAnimationInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCheckingAmmo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> FirstPersonComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> ThirdPersonComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFPSItemSlotData SlotData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDataLoadedDelegate OnItemDataLoaded;
    
    AFPSItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleSpecial();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSecondaryAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopPrimaryAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSecondaryAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPrimaryAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDequip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartBash();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupItemData(UFPSItemData* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupAnimationData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemPerspective(bool bIsFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEquipped(bool bNewIsEquipped);
    
    UFUNCTION(BlueprintCallable)
    void SetFPSCharacter(AFPSCharacterBase* NewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetDelay(float NewDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCosmetic(int32 NewCosmetic);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneVisibility(FName Name, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerStartEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerStartDequip();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ServerInitItem();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerFinishBash();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCheckAmmo();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBash(FMeleeHitData Data, const TArray<FSimpleHitData>& Hits);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerApplyCosmetic(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAttachMesh(const FAttachmentSlotData& AttachmentSlotData, AFPSAttachment* Attachment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OwnerTick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateSprinting(bool bIsSprinting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateNightVision(bool bIsNightVision);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemDataAssetID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_FPSCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentCosmetic();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRemove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDestroyed(AActor* DestoyedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyCosmetic(int32 Index, FFPSCosmetic Cosmetic);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAdd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCheckAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Jiggle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyOwned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckingAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetThirdPersonRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetThirdPersonMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFPSItemSlotData GetSlotData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFPSCharacterBase* GetOwningCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPrimaryAssetId GetItemDataAssetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFPSItemData* GetItemData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetFirstPersonRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetFirstPersonMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDelay() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishedLoadingItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CycleMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticStartEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticStartDequip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticKick(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticFinishBash(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticEndEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticEndDequip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticCheckAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticBash(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientTick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckBash();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CharacterUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUseItem(float Bias) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUseGesture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUseCosmetic(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanBash(float Bias) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddAmmo(int32 InAmount) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyCosmeticNoChecks(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyCosmetic(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UStaticMeshComponent* AddAttachMesh(const FAttachmentSlotData& AttachmentSlotData, UStaticMeshComponent*& ThirdPersonAttachMesh, AFPSAttachment* Attachment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddAmmo(bool bUseFullAmmo, int32 InAmount);
    
};

