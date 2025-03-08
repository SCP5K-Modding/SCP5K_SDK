#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "ESAITeam.h"
#include "DoorSquidAIController.generated.h"

class AActor;
class UCurveFloat;

UCLASS(Blueprintable)
class PANDEMIC_API ADoorSquidAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasSquidInitialized, meta=(AllowPrivateAccess=true))
    bool bHasSquidInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAITeam Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRunningSoundStrengthCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HearingStimulusFalloffCurve;
    
public:
    ADoorSquidAIController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetHasSquidInitialized(bool bInHasSquidInitialized);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_HasSquidInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISenseSuppression(const AActor* Actor, const FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISenseHearing(AActor* Actor, const FAIStimulus Stimulus);
    
};

