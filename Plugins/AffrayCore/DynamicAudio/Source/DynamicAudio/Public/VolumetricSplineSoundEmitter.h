#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "VolumetricSoundEmitter.h"
#include "VolumetricSoundEmitter_ScatterSettings.h"
#include "VolumetricSplineSoundEmitter.generated.h"

class UFMODAudioComponent;
class UFMODEvent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class DYNAMICAUDIO_API AVolumetricSplineSoundEmitter : public AActor, public IVolumetricSoundEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ActorRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* VolumetricEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFMODAudioComponent*> ScatterEmitters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* VolumetricEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector PositionOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateEmitterWithPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEnvelopment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVolumetricSoundEmitter_ScatterSettings ScatteredSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScatterGridDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ScatterSourcePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElevationConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertContainmentTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPostVolumetric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPostScatter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetLazyUpdateDistanceAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LazyUpdateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LazyUpdateRate;
    
public:
    AVolumetricSplineSoundEmitter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateTickState();
    
    UFUNCTION(BlueprintCallable)
    void TrySpawnScatteredSound();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopVolumetricSound();
    
    UFUNCTION(BlueprintCallable)
    void StopScatteredSounds();
    
    UFUNCTION(BlueprintCallable)
    void StartVolumetricSound();
    
    UFUNCTION(BlueprintCallable)
    void StartScatteredSounds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODAudioComponent* GetVolumetricEmitter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFMODAudioComponent*> GetScatterEmitters() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateSourcePointGrid();
    
public:
    UFUNCTION(BlueprintCallable)
    void BreakScatteredSounds();
    

    // Fix for true pure virtual functions not being implemented
};

