#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "ESAISoundType.h"
#include "ESAITeam.h"
#include "SAITarget.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ScreenPath.h"
#include "TheatreAnomalyController.generated.h"

class AActor;
class ATheatreAnomalyController;
class UTheatreScreenComponent;
class UTheatreScreenPatrolPathComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ATheatreAnomalyController : public AAIController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenPathChangedDelegate, ATheatreAnomalyController*, Controller);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenPathChangedDelegate OnPathfindCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenPathChangedDelegate OnPathfindCancelled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAITeam Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScreenPath CurrentPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPathFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInvestigating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSAITarget> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Anger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundAnger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertAnger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESAISoundType, float> SoundAngerTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetVisibleDetectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSightDetectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSightDotThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTargetWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AngerSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentTargetKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastSeenLocationKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastSensedLocationKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VisibleKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvestigatingKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvestigatingScreenKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DetectionKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PredictedLocationKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DistanceKeyName;
    
public:
    ATheatreAnomalyController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TickTargets();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISenseSight(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISenseHearing(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    bool MoveTowardScreen(UTheatreScreenComponent* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTheatreScreenComponent* GetCurrentScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnger() const;
    
    UFUNCTION(BlueprintCallable)
    bool ForceMoveToScreen(UTheatreScreenComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    bool FindScreenPath(UTheatreScreenComponent* Target, FScreenPath& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTheatreScreenComponent* FindRandomScreen(int32 SearchDistance) const;
    
    UFUNCTION(BlueprintCallable)
    void ExitPatrolPath();
    
    UFUNCTION(BlueprintCallable)
    void EnterPatrolPath(UTheatreScreenPatrolPathComponent* NewPatrolPath);
    
    UFUNCTION(BlueprintCallable)
    void AlertToScreen(UTheatreScreenComponent* Target, AActor* EventInstigator, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void AddDetection(AActor* Actor, float Amount);
    
};

