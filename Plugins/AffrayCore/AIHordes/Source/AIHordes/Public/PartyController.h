#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EHordeAgentMovementMode.h"
#include "PartyController.generated.h"

class AActor;
class AParty;
class APawn;

UCLASS(Blueprintable)
class AIHORDES_API APartyController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SeenTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvestigateThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDetectionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionCooldownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvestigateLoudnessThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvestigating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InvestigatingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionLevel;
    
public:
    APartyController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopInvestigating();
    
    UFUNCTION(BlueprintCallable)
    void StartInvestigating(FVector position);
    
    UFUNCTION(BlueprintCallable)
    void SetDetectionLevel(float Level);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSeePawn(APawn* SeenPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndSeePawn(APawn* SeenPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector Investigate(FVector position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetSeenTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AParty* GetParty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDetectionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInvestigatingPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInvestigateThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    APawn* GetClosest(TArray<APawn*> Targets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlertThreshold() const;
    
    UFUNCTION(BlueprintCallable)
    bool GeneratePath(FVector Destination, EHordeAgentMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Alert();
    
};

