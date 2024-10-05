#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "SCP173Base.generated.h"

class AActor;
class USCP173ObserverComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP173Base : public ACharacter {
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObserved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USCP173ObserverComponent*> GetPotentialObserversOfTargetLocation(const FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USCP173ObserverComponent*> GetObserversOfTargetLocation(const FVector& TargetLocation, FColor DebugColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USCP173ObserverComponent*> GetCurrentObservers(FColor DebugColor) const;
    
};

