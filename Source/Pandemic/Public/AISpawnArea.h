#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ESpawnScaling.h"
#include "SpawnAIMCDelegateDelegate.h"
#include "SpawnClass.h"
#include "Templates/SubclassOf.h"
#include "WaveSpawn.h"
#include "AISpawnArea.generated.h"

class AAISpawnArea;
class APawn;
class UAISpawnLocationComponent;
class UFMODEvent;
class UGameAction;
class UNavigationQueryFilter;
class UObject;
class USAIDirection;

UCLASS(Blueprintable)
class PANDEMIC_API AAISpawnArea : public AActor {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "Spawn")
    TSoftClassPtr<APawn> GetClass(const TArray<FSpawnClass>& AvailableClasses);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnAIMCDelegate AISpawnedMCDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USAIDirection*> Directions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ManualSpawnLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveSpawn DefaultSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Attempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HalfExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SpawnSound;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActorsSpawnedPerFrame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectToNavigation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectToGround;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnerTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeUsedForWaves;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOnSpawn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReEnableTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* AllSpawnedActorsDiedGameAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISpawnLocationComponent*> UsedSpawnLocations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnArea*> LinkedSpawnAreas;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> QueryFilterClass;
    
public:
    AAISpawnArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnActors(int32 Amount, TArray<FSpawnClass> AvailableClasses, const AActor* SpawnInstigator);
    
    UFUNCTION(BlueprintCallable)
    APawn* SpawnActor(TSoftClassPtr<APawn> Class, const AActor* SpawnInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Spawn(const AActor* SpawnInstigator);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnSound(UFMODEvent* InSpawnSound);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSpawn(const FWaveSpawn& InDefaultSpawn);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDied(APawn* Died, int32 RemainingEnemies);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSpawnTransform(TSoftClassPtr<APawn>& Class, UAISpawnLocationComponent*& UsedSpawnLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetSpawnMultiplier(const UObject* WorldContext, ESpawnScaling Scaling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSpawnerTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHalfExtent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWaveSpawn GetDefaultSpawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClosestPointInSpawnBounds(FVector Location) const;

    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<APawn> GetSpawnClass(const TArray<FSpawnClass>& AvailableClasses);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeUsedForWaves() const;
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
};

