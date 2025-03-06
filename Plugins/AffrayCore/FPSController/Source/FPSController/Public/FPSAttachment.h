#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FPSAttachmentReplicatedData.h"
#include "FPSCosmetic.h"
#include "Templates/SubclassOf.h"
#include "FPSAttachment.generated.h"

class AFPSItem;
class UFMODAudioComponent;
class UFPSAttachmentData;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMesh;

UCLASS(Abstract, Blueprintable)
class FPSCONTROLLER_API AFPSAttachment : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFPSAttachmentData> AttachmentDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachmentReplicatedData, meta=(AllowPrivateAccess=true))
    FFPSAttachmentReplicatedData AttachmentReplicatedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEnabled, meta=(AllowPrivateAccess=true))
    bool BIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenAttached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSAttachmentData* AttachmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwningItem, meta=(AllowPrivateAccess=true))
    AFPSItem* OwningItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachmentDataAssetID, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId AttachmentDataAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> FirstPersonAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> ThirdPersonAttachComponent;
    
public:
    AFPSAttachment(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupAttachmentData(UFPSAttachmentData* InAttachmentData);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningItem(AFPSItem* NewItem);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachMeshes(USceneComponent* FirstPersonMesh, USceneComponent* ThirdPersonMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAttachmentVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAttachmentPerspective(bool bIsFirstPerson);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAttach(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateNightVision(bool bIsNightVision);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateADS(bool bNewADS);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_OwningItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_AttachmentReplicatedData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_AttachmentDataAssetID();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnParentItemDataLoaded(AFPSItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDequip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyCosmetic(int32 Index, FFPSCosmetic Cosmetic);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsValidAttachment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetThirdPersonRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetThirdPersonMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRelativeTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFPSItem* GetOwningItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetFirstPersonRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetFirstPersonMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODAudioComponent* GetAudioComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAttachSocket(FRotator& RotationOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttachMeshes(USceneComponent*& FirstPersonMesh, USceneComponent*& ThirdPersonMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMesh* GetAttachMesh(FName& AttachSocket) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPrimaryAssetId GetAttachmentDataAssetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFPSAttachmentData* GetAttachmentData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Attach(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCosmeticByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCosmetic(int32 Index);
    
};

