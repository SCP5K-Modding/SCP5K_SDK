#pragma once
#include "CoreMinimal.h"
#include "ElectronicSwitch.h"
#include "EMissionItemType.h"
#include "FillableElectronic.generated.h"

class ACharacter;
class AElectronic;

UCLASS(Blueprintable)
class PANDEMIC_API AFillableElectronic : public AElectronicSwitch {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Capacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentAmount, meta=(AllowPrivateAccess=true))
    int32 CurrentAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionItemType MissionItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AElectronic*> IndicatorElectronics;
    
public:
    AFillableElectronic(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAmount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractionSucceded(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractionFailed(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMissionItemType GetMissionItemType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMissionItemID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCapacity() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CurrentAmountUpdated(int32 Amount);
    
public:
    UFUNCTION(BlueprintCallable)
    void CharacterInteracted(ACharacter* Character);
    
};

