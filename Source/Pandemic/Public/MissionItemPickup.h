#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MissionItemPickup.generated.h"

class AController;
class UGameAction;
class UInteractableComponent;
class UMissionItem;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class PANDEMIC_API AMissionItemPickup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMissionItem> MissionItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* PickupGameAction;
    
public:
    AMissionItemPickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void Pickup(AController* Controller);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsActive();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnInteract(AActor* EventInstigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnFailed(AController* Controller);
    
};

