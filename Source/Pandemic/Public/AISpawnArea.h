#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SpawnClass.h"
#include "Templates/SubclassOf.h"
#include "WaveSpawn.h"
#include "AISpawnArea.generated.h"

class AAISpawnArea;
class APawn;
class UFMODEvent;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class PANDEMIC_API AAISpawnArea : public AActor {
    GENERATED_BODY()
public:
protected:
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
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnArea*> LinkedSpawnAreas;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> QueryFilterClass;
    
public:
    AAISpawnArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnActors(int32 Amount, TArray<FSpawnClass> AvailableClasses);
    
    UFUNCTION(BlueprintCallable)
    APawn* SpawnActor(TSoftClassPtr<APawn> Class);
    
    UFUNCTION(BlueprintCallable)
    void Spawn();
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSpawnTransform();
    
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
    static TSoftClassPtr<APawn> GetClass(const TArray<FSpawnClass>& AvailableClasses);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeUsedForWaves() const;
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
};

