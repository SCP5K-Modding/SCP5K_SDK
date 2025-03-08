#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "Engine/NetSerialization.h"
#include "NavLinkHostInterface.h"
#include "DoorLinkReachedSignatureDelegate.h"
#include "Electronic.h"
#include "Templates/SubclassOf.h"
#include "ElectronicDoor.generated.h"

class AActor;
class UDoorLinkComponent;
class UFMODEvent;
class UFXSystemAsset;
class UNavArea;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ELECTRONICS_API AElectronicDoor : public AElectronic, public INavLinkHostInterface, public INavRelevantInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationLink> PointLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoorLinkIsRelevant;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> DoorCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBreached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* HingeBreakParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* HingeBreakSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BreachSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BreakForceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> Hinges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeakPointDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> WeakPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreachSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBreaching;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoorLinkReachedSignature OnSmartLinkReached;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDoorLinkComponent* DoorLinkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> EnabledLinkAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> DisabledLinkAreaClass;
    
public:
    AElectronicDoor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateDoorInteractors(AActor* PathOwner, const FVector& DestinationPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorLinkEnabled(bool bIsDoorLinkEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResumePathFollowing(AActor* Agent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSmartLinkReached(AActor* Agent, const FVector& Destination);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDoorUpdateValue(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDoorFinishedOpening();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDoorFinishedClosing();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDestroyHinge(FVector_NetQuantize position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorLinkEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMovingAgents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSmoothValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanDoorBreak() const;
    
    UFUNCTION(BlueprintCallable)
    void Breach(AActor* Caller);
    

    // Fix for true pure virtual functions not being implemented
};

