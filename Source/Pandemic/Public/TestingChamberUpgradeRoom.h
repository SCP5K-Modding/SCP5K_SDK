#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "ETestingChamberUpgradeRoomExitedReason.h"
#include "TestingChamberUpgradeRoom.generated.h"

class AController;
class AGameModeBase;
class APandemicPlayerState;
class APawn;
class ATeleporter;
class ATestingChamberUpgradeMachine;

UCLASS(Blueprintable)
class PANDEMIC_API ATestingChamberUpgradeRoom : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* EntranceTeleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* ExitTeleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* TransitTeleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATestingChamberUpgradeMachine* ChamberUpgradeMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APandemicPlayerState> PlayerState;
    
    ATestingChamberUpgradeRoom(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ServerUpgradeRoomExited(APandemicPlayerState* InPlayer, ETestingChamberUpgradeRoomExitedReason InExitReason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ServerUpgradeRoomEntered(APandemicPlayerState* InPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLogOut(AGameModeBase* GameMode, AController* ExitingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishTeleport(ATeleporter* Teleporter, ATeleporter* TargetTeleporter, const TArray<APawn*>& TeleportedPawns);
    
};

