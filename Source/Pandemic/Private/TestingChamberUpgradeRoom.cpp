#include "TestingChamberUpgradeRoom.h"

ATestingChamberUpgradeRoom::ATestingChamberUpgradeRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EntranceTeleporter = NULL;
    this->ExitTeleporter = NULL;
    this->TransitTeleporter = NULL;
    this->ChamberUpgradeMachine = NULL;
}

void ATestingChamberUpgradeRoom::ServerUpgradeRoomExited_Implementation(APandemicPlayerState* InPlayer, ETestingChamberUpgradeRoomExitedReason InExitReason) {
}

void ATestingChamberUpgradeRoom::ServerUpgradeRoomEntered_Implementation(APandemicPlayerState* InPlayer) {
}

void ATestingChamberUpgradeRoom::OnPlayerLogOut(AGameModeBase* GameMode, AController* ExitingPlayer) {
}

void ATestingChamberUpgradeRoom::OnFinishTeleport(ATeleporter* Teleporter, ATeleporter* TargetTeleporter, const TArray<APawn*>& TeleportedPawns) {
}


