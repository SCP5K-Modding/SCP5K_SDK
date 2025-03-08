#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EAdaptiveMusicCustomTrackPriority.h"
#include "EAdaptiveMusicEncounterStage.h"
#include "AdaptiveMusicSubsystem.generated.h"

class AAdaptiveMusicVolume;
class APlayerController;
class UFMODEvent;

UCLASS(Blueprintable)
class DYNAMICAUDIO_API UAdaptiveMusicSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateInterval;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TraceTypes;
    
public:
    UAdaptiveMusicSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateAreaTrack();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartCustomTrack(UFMODEvent* Track, EAdaptiveMusicCustomTrackPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSuppression(float InSuppression);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectivePositions(const TArray<FVector>& NewObjectivePositions);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectivePosition(FVector NewObjectivePosition);
    
    UFUNCTION(BlueprintCallable)
    void SetEncounterStage(EAdaptiveMusicEncounterStage NewEncounterStage);
    
    UFUNCTION(BlueprintCallable)
    void SetClosestEnemyDistance(float InEnemyDistance);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMusicPlayerController(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeamProximity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetSurroundingEnemyTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectiveProximity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectiveDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntensityLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyProximity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAdaptiveMusicEncounterStage GetEncounterStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDangerLevel() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ExitArea(AAdaptiveMusicVolume* Area);
    
    UFUNCTION(BlueprintCallable)
    void EnterArea(AAdaptiveMusicVolume* Area);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndEncounter(UFMODEvent* Track);
    
    UFUNCTION(BlueprintCallable)
    bool EndCustomTrack(UFMODEvent* Track);
    
    UFUNCTION(BlueprintCallable)
    void EndCurrentEncounter();
    
    UFUNCTION(BlueprintCallable)
    void EndCurrentCustomTrackWithPriority(EAdaptiveMusicCustomTrackPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void BeginEncounter(UFMODEvent* Track);
    
    UFUNCTION(BlueprintCallable)
    void AddObjectivePosition(FVector NewObjectivePosition);
    
};

