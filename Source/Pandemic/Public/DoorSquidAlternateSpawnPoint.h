#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DoorSquidAlternateSpawnPoint.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ADoorSquidAlternateSpawnPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActorToReplace, meta=(AllowPrivateAccess=true))
    AActor* ActorToReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryActorsToHide, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SecondaryActorsToHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryActorsToRevealWithSquid, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SecondaryActorsToRevealWithSquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShowDefaultDoor, meta=(AllowPrivateAccess=true))
    bool bShowDefaultDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasChangedInPreInit, meta=(AllowPrivateAccess=true))
    bool bHasChangedInPreInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HideForRealSquid, meta=(AllowPrivateAccess=true))
    bool bHideForRealSquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasSquidInitialized, meta=(AllowPrivateAccess=true))
    bool bHasSquidInitialized;
    
    ADoorSquidAlternateSpawnPoint(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetShowDefaultDoor(bool bInShowDefaultDoor);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryActorsToRevealWithSquid(TArray<AActor*> NewSecondaryActorsToRevealWithSquid);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryActorsToHide(TArray<AActor*> NewSecondaryActorsToHide);
    
    UFUNCTION(BlueprintCallable)
    void SetHideForRealSquid(bool bInHideForRealSquid);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSquidInitialized(bool bInHasSquidInitialized);
    
    UFUNCTION(BlueprintCallable)
    void SetHasChangedInPreInit(bool bInHaasChangedInPreInit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAsRealDoorSquid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAsNotDoorSquid();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetActorToReplace(AActor* NewActorToReplace);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_ShowDefaultDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_SecondaryActorsToRevealWithSquid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_SecondaryActorsToHide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_HideForRealSquid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_HasSquidInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_HasChangedInPreInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_ActorToReplace(AActor* OldActorToReplace);
    
};

