#pragma once
#include "CoreMinimal.h"
#include "ESCP173BDifficulty.h"
#include "SCP173Controller.h"
#include "SCP173BController.generated.h"

class AActor;
class UCurveFloat;
class USCP173ObserverComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP173BController : public ASCP173Controller {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCP173BDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PlayerChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* IdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SadismWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrejudiceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReorganizeObserverGroupFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumObservationsBeforeAggressionReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumObservationBeforeAggressionReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumObservationsBeforeAggressionResetWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodthirstCheckFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodthirstyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObservedBloodthirstyMultiplier;
    
public:
    ASCP173BController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetAggressionMeter();
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveObservers(const TArray<USCP173ObserverComponent*>& ObserversToRemove);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveChances(AActor* TargetActor, int32 NumChances);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBloodthirsty() const;
    
    UFUNCTION(BlueprintCallable)
    void Idle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAggression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChances(AActor* QueryActor) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearTarget();
    
private:
    UFUNCTION(BlueprintCallable)
    void AddObservers(const TArray<USCP173ObserverComponent*>& NewObservers);
    
};

