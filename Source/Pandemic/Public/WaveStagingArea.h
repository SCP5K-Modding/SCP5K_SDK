#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "StagingAreaExitedDelegateDelegate.h"
#include "StagingAreaPlayerData.h"
#include "StagingAreaUpgradeRoomsLoadedDelegateDelegate.h"
#include "WaveStagingArea.generated.h"

class AActor;
class AElectronicLift;
class APlayerState;
class ATeleporter;
class UGameAction;
class UObjective;
class UWorld;

UCLASS(Blueprintable)
class PANDEMIC_API AWaveStagingArea : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* EntranceTeleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* ExitTeleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElectronicLift* ExitLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> Players;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStagingAreaUpgradeRoomsLoadedDelegate OnUpgradeRoomsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStagingAreaExitedDelegate OnStagingAreaExited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range DesiredChamberIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExitObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyLoadRequiredUpgradeRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelLoadingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> UpgradeRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UpgradeRoomLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PerLevelOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LoadedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStagingAreaPlayerData> PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* StagingAreaEnteredGameAction;
    
public:
    AWaveStagingArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadUpgradeRooms();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsChamberIndex(int32 NextChamberIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void SpawnUpgradeRoomsForPlayers(const TArray<APlayerState*>& InPlayers);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUnloadUpgradeRooms();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSpawnUpgradeRoomsForPlayers(const TArray<APlayerState*>& InPlayers);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LevelFinishedLoading();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetExitObjectiveName() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitStagingArea();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitObjectiveUpdated(UObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void ExitObjectiveCompleted(UObjective* Objective, bool bCompleted);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnteredStagingArea();
    
};

