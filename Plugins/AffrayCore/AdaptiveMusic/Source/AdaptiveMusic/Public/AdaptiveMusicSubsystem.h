#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "AdaptiveMusicSubsystem.generated.h"

class AAdaptiveMusicVolume;
class APlayerController;
class UFMODEvent;

UCLASS(Blueprintable)
class ADAPTIVEMUSIC_API UAdaptiveMusicSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TraceTypes;
    
public:
    UAdaptiveMusicSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopTrack();
    
    UFUNCTION(BlueprintCallable)
    void RegisterMusicPlayerController(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void PlayTrack(UFMODEvent* Track);
    
    UFUNCTION(BlueprintCallable)
    void PlayAreaTrack();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetTeamProximity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<uint8> GetSurroundingEnemyTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetIntensityLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetEnemyProximity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDangerLevel() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ExitArea(AAdaptiveMusicVolume* Area);
    
    UFUNCTION(BlueprintCallable)
    void EnterArea(AAdaptiveMusicVolume* Area);
    
    UFUNCTION(BlueprintCallable)
    void EndEncounter();
    
    UFUNCTION(BlueprintCallable)
    void BeginEncounter(UFMODEvent* Track);
    
};

