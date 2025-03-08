#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FPSLoadout.h"
#include "CheckpointSave.h"
#include "CheckpointSaveGame.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UCheckpointSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSavedProjectVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCheckpointSave> MapCheckpoints;
    
    UCheckpointSaveGame();

    UFUNCTION(BlueprintCallable)
    void UnlockCheckpoint(FName MapName, FName CheckpointName, FFPSLoadout Loadout);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCheckpoint(FName MapName, FName CheckpointName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedCheckpoint(FName MapName, FName CheckpointName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedAnyCheckpoints(FName MapName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetUnlockedCheckpointNames(FName MapName) const;
    
    UFUNCTION(BlueprintCallable)
    FFPSLoadout GetLoadoutForCheckpoint(FName MapName, FName CheckpointName);
    
};

