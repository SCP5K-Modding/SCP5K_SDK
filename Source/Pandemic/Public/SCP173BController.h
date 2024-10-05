#pragma once
#include "CoreMinimal.h"
#include "ESCP173BDifficulty.h"
#include "SCP173Controller.h"
#include "SCP173BController.generated.h"

class AActor;
class UCurveFloat;

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
    
public:
    ASCP173BController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveChances(AActor* TargetActor, int32 NumChances);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable)
    void Idle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChances(AActor* QueryActor) const;
    
};

