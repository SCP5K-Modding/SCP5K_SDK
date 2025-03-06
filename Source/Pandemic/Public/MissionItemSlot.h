#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnMissionItemUpdatedDelegateDelegate.h"
#include "MissionItemSlot.generated.h"

class AActor;
class UMissionItem;
class UMissionItemSlot;

UCLASS(Blueprintable)
class PANDEMIC_API UMissionItemSlot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Item, meta=(AllowPrivateAccess=true))
    UMissionItem* Item;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionItemUpdatedDelegate OnItemUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Amount, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
public:
    UMissionItemSlot();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryAddAmount(int32 InAmount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Item();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Amount();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool HasMissionItem(const TArray<UMissionItemSlot*>& Slots, UMissionItem* MissionItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintCallable)
    static UMissionItemSlot* GetMissionItemSlot(const TArray<UMissionItemSlot*>& Slots, UMissionItem* MissionItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmount() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintCallable)
    static UMissionItemSlot* CreateItemSlot(UObject* Outer, UMissionItem* ItemType, int32 ItemAmount);
    
    UFUNCTION(BlueprintCallable)
    static UMissionItemSlot* CopyItemSlot(UObject* Outer, UMissionItemSlot* Slot);
    
};

