#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "DeferredDespawnImplementor.h"
#include "SCP173Base.generated.h"

class AActor;
class UAIPerceptionStimuliSourceComponent;
class UDeferredDespawnComponent;
class UFMODAudioComponent;
class UFMODEvent;
class USCP173ObserverComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP173Base : public ACharacter, public IDeferredDespawnImplementor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObservationRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PseudoCapsuleRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PseudoCapsuleHalfHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibilityTraceSubdivisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsObservedParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* RandomIntervalSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSoundInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSoundIntervalDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* StimuliSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeferredDespawnComponent* DeferredDespawnComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* OneshotAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* MovementAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MovementSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* TeleportSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* KillSound;
    
public:
    ASCP173Base(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WouldBeVisibleToQuerier(const FVector& TargetLocation, const FVector& QueryLocation, const FVector& QueryDirection, float QueryFOV, bool bSingleTrace, FColor DebugColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WouldBeVisibleToObserver(const FVector& TargetLocation, const USCP173ObserverComponent* QueryObserver, FColor DebugColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WouldBeVisibleToActor(const FVector& TargetLocation, const AActor* QueryActor, FColor DebugColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WouldBeVisible(const FVector& TargetLocation, FColor DebugColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WouldBeInQuerierFOV(const FVector& TargetLocation, const FVector& QueryLocation, const FVector& QueryDirection, float QueryFOV) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> TransformPoints(const FTransform& TargetTransform, FColor DebugColor) const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SetSoundParameter(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayRandomStingerSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayOneshotSound(UFMODEvent* Sound);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayKillSound(AActor* KillTarget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDespawn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObserved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USCP173ObserverComponent*> GetPotentialObserversOfTargetLocation(const FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USCP173ObserverComponent*> GetObserversOfTargetLocation(const FVector& TargetLocation, FColor DebugColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USCP173ObserverComponent*> GetCurrentObservers(FColor DebugColor) const;
    

    // Fix for true pure virtual functions not being implemented
};

