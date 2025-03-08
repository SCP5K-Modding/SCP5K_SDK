#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "InteractableComponent.h"
#include "DoorSoundData.h"
#include "EDoorState.h"
#include "Templates/SubclassOf.h"
#include "DoorComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class UDoorComponent;
class UFXSystemAsset;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UDoorComponent : public UInteractableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorHealthChangedDelegate, float, CurrentHealth);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorBreakDelegate, UDoorComponent*, DoorComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorHealthChangedDelegate OnDoorHealthChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorBreakDelegate OnDoorBreakDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator OriginalBaseDoorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetDoorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentDoorState, meta=(AllowPrivateAccess=true))
    EDoorState CurrentDoorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDoorState ClientPreviousDoorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DoorStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OpenDoorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClosedDoorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRotationPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseDoorInteractionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxDoorHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideStartingHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentDoorHealth, meta=(AllowPrivateAccess=true))
    float CurrentDoorHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBroken;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseDamageTypes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UDamageType>> DamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BreakForceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoorSoundData OpenSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoorSoundData CloseSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* BreakParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoorSoundData BreakSoundData;
    
public:
    UDoorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetOpenSoundData(FDoorSoundData& SoundData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMaxDoorHealth(float MaximumValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractable(bool bInteractable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDoorStaticMesh(UStaticMeshComponent* Mesh);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentRotationPercentage(float Percentage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentDoorState(EDoorState State);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentDoorHealth(float NewHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetCloseSoundData(FDoorSoundData& SoundData);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeBroken(bool bCanBreak);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakSoundData(FDoorSoundData& SoundData);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakParticle(UFXSystemAsset* FXAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakForceOffset(FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakForce(float Force);
    
    UFUNCTION(BlueprintCallable)
    void ServerStartMovement(const EDoorState NewDoorState);
    
private:
    UFUNCTION(BlueprintCallable)
    void ServerInteractDoor(AActor* EventInstigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ServerBreakDoor();
    
    UFUNCTION(BlueprintCallable)
    void PlayDoorSound(const FDoorSoundData& SoundData, const float TimelinePosition);
    
    UFUNCTION(BlueprintCallable)
    void PlayDoorParticleEffect(const UFXSystemAsset* SystemAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentDoorState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentDoorHealth();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnComponentTakeRadialDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCosmeticMoveDoor(const EDoorState CurrentState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCosmeticBreakDoor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void InterruptDoorMovement(AActor* EventInstigator);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldUseDamageTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldOverrideStartingHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDoorSoundData GetOpenSoundData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDoorHealth() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInteractable() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<TSubclassOf<UDamageType>> GetDamageTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDoorState GetCurrentDoorState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDoorHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDoorSoundData GetCloseSoundData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDoorSoundData GetBreakSoundData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemAsset* GetBreakParticle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBreakForceOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBreakForce() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDamaged() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateVectorLerpAlpha(const FVector& CurrentLerpValue, const FVector& Initial, const FVector& Desired) const;
    
};

