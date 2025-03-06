#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=PlayerTriggerVolume -FallbackName=PlayerTriggerVolume
#include "AISpawnAreaMusicEncounterVolume.generated.h"

class AAISpawnArea;
class AActor;
class APawn;
class UFMODEvent;

UCLASS(Blueprintable)
class PANDEMIC_API AAISpawnAreaMusicEncounterVolume : public APlayerTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MusicTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AAISpawnArea*> SpawnAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> TheBigStupid;
    
    AAISpawnAreaMusicEncounterVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerUnpossessed(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPossessed(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(const TArray<APawn*>& Pawns);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDied(APawn* Pawn, int32 TotalCount);
    
};

