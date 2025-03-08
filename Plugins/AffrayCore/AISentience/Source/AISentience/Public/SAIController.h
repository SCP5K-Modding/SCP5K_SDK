#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "SignificanceUser.h"
#include "AIInfoSharer.h"
#include "ESAIAwarenessState.h"
#include "ESAISoundType.h"
#include "ESAIState.h"
#include "ESAITeam.h"
#include "SAISound.h"
#include "SAITarget.h"
#include "SAITargetSightUpdatedDelegateDelegate.h"
#include "SAITargetUpdatedDelegateDelegate.h"
#include "SAIController.generated.h"

class AActor;
class ALightManager;
class UAIInfoSharingComponent;
class USAIAwarenessComponent;
class USAICombatProcessingComponent;
class USAIStimuliProcessingComponent;
class USignificanceComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIController : public AAIController, public IAIInfoSharer, public ISignificanceUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAISound LatestSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsInvestigating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alertness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockCurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnUnPossess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALightManager* LightManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceThreatAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThreatAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionThreatAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetVisibleWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDamageWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetThreatWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPrejudiceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTimeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPlayerWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDetectionSightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertnessDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrejudiceDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePrejudiceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityPrejudiceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetedPrejudiceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAlertness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAlertness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionAlertnessWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionDetectionAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFriendlySoundRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAwarenessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIAwarenessComponent* AwarenessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIStimuliProcessingComponent* StimuliProcessingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAICombatProcessingComponent* CombatProcessingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESAIAwarenessState, float> FocusRotationSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentTargetKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastSeenLocationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastSensedLocationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VisibleKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvestigatingKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvestigatingLocationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LatestSoundAgeKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThreatKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SightDotKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CanSeeAgentKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaxThreatKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlertnessKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AwarenessLevelKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DetectionKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetHealthKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HealthKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PredictedLocationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TimeSinceSawTargetKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DistanceKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightMinSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAITeam Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAISoundType MinSoundLocationUpdatePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSoundSwitchAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESAITeam, TEnumAsByte<ETeamAttitude::Type>> AttitudeOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrowdSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSlowDownAtGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrowdSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrowdObstacleAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrowdAnticipateTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrowdOptimizeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrowdPathOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdSeparationWeight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAITargetUpdatedDelegate OnTargetAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAITargetUpdatedDelegate OnTargetLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAITargetUpdatedDelegate OnTargetDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAITargetSightUpdatedDelegate OnTargetSightUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSAITarget> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredTargets;
    
public:
    ASAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCurrentTarget(AActor* NewTarget, bool bLockTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBlackBoardParameters();
    
    UFUNCTION(BlueprintCallable)
    void UnIgnoreTarget(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickTargets();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopInvestigating();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartInvestigating(FSAISound& NewSound);
    
    UFUNCTION(BlueprintCallable)
    void StartIdle(ESAIState PreviousState);
    
    UFUNCTION(BlueprintCallable)
    bool SetState(ESAIState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    AActor* PickTarget() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISenseSuppression(AActor* Actor, FVector Location, bool bSuperSonic);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISenseSight(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISenseHearing(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISenseDamage(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetDead(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvestigating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlert() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InfoSharingComponentUpdated(UAIInfoSharingComponent* UpdatedInfoSharingComponent);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTargetStrength(AActor* Actor, float& LightStrength, float& DistanceStrength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetScore(FSAITarget Target, float Factor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSAITarget> GetTargets() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetRef(AActor* Actor, FSAITarget& Target) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESAIState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetIgnoredTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void EndIdle(ESAIState NewState);
    
    UFUNCTION(BlueprintCallable)
    void EnableAI();
    
    UFUNCTION(BlueprintCallable)
    void DisableAI(bool bRestart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> BlueprintGetTeamAttitudeTowards(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTarget(FSAITarget Target);
    
    UFUNCTION(BlueprintCallable)
    void AddDetection(AActor* Actor, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddAlertness(float Amount);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void ApplySignificance(USignificanceComponent* Component, float NewSignificance, float OldSignificance) override PURE_VIRTUAL(ApplySignificance,);
    
};

