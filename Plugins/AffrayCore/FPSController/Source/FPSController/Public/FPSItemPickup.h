#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSCosmetic.h"
#include "FPSItemSlotData.h"
#include "FPSItemPickup.generated.h"

class AFPSCharacterBase;
class UFMODEvent;
class UFPSItemData;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSItemPickup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* PickupEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    bool bStartEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Item, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    TSoftObjectPtr<UFPSItemData> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SlotData, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    FFPSItemSlotData SlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    bool bOneUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    bool bSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Enabled, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HideWhenDisabled, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    bool bHideWhenDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    bool bUsePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true, ExposeOnSpawn=true))
    bool bWasSpawned;
    
public:
    AFPSItemPickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCosmetic();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAttachments();
    
    UFUNCTION(BlueprintCallable)
    void SetWasSpawned(bool bNewWasSpawned);
    
    UFUNCTION(BlueprintCallable)
    void SetUsePhysics(bool bNewUsePhysics);
    
    UFUNCTION(BlueprintCallable)
    void SetSwap(bool bNewSwap);
    
    UFUNCTION(BlueprintCallable)
    void SetStartEnabled(bool bNewStartEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetOneUse(bool bNewOneUse);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetItem(TSoftObjectPtr<UFPSItemData> ItemData, FFPSItemSlotData Slot);
    
    UFUNCTION(BlueprintCallable)
    void SetHideWhenDisabled(bool bNewHideWhenDisabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ResetPickup();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Pickup(AFPSCharacterBase* Character);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_SlotData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Item();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HideWhenDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Enabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyCosmetic(int32 Index, FFPSCosmetic Cosmetic);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ItemLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWasSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSwap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFPSItemSlotData GetSlotData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UFPSItemData> GetItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnabled() const;
    
};

