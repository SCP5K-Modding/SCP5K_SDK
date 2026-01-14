#include "Teleporter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EActorUpdateOverlapsMethod -FallbackName=EActorUpdateOverlapsMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

ATeleporter::ATeleporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    this->UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::AlwaysUpdate;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TeleportTime = 1.00f;
    this->DefaultTeleporter = NULL;
    this->bUpdateTeleportedPawnsFromOverlaps = true;
    this->BeginTeleportGameAction = NULL;
    this->FinishTeleportGameAction = NULL;
    this->BeginReceiveTeleportGameAction = NULL;
    this->FinishReceiveTeleportGameAction = NULL;
    this->bFadeCamera = true;
    this->FadeCameraDuration = 0.50f;
    this->BeginTeleportForPawnEvent = NULL;
    this->TeleportRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TeleportRoot"));
    this->TeleportComponent = (USceneComponent*)TeleportRoot;
    this->TeleportBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TeleportBox"));
    this->TeleportBox->SetupAttachment(RootComponent);
    this->TeleportComponent->SetupAttachment(RootComponent);
    this->TeleportRoot->SetupAttachment(RootComponent);
}

void ATeleporter::SetPawnsToTeleport(const TArray<APawn*>& InPawnsToTeleport) {
}

void ATeleporter::ServerFinishTeleport(ATeleporter* Teleport, bool bRelativeToRoot) {
}

void ATeleporter::ServerFinishReceiveTeleportPerPawn_Implementation(ATeleporter* SourceTeleporter, APawn* Pawn, bool bRelativeToRoot) {
}

void ATeleporter::ServerFinishReceiveTeleport_Implementation(ATeleporter* SourceTeleporter, bool bRelativeToRoot) {
}

void ATeleporter::ServerBeginTeleport_Implementation(ATeleporter* Teleport, bool bRelativeToRoot) {
}

void ATeleporter::ServerBeginReceiveTeleportPerPawn_Implementation(ATeleporter* SourceTeleporter, APawn* Pawn, bool bRelativeToRoot) {
}

void ATeleporter::ServerBeginReceiveTeleport_Implementation(ATeleporter* SourceTeleporter, bool bRelativeToRoot) {
}

ATeleporter* ATeleporter::PickTeleporterForPawn_Implementation(APawn* Pawn, int32 Index, ATeleporter* Default) {
    return NULL;
}

void ATeleporter::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ATeleporter::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATeleporter::MulticastFinishTeleport_Implementation(ATeleporter* Teleport, bool bRelativeToRoot) {
}

void ATeleporter::MulticastBeginTeleport_Implementation(ATeleporter* Teleport, bool bRelativeToRoot) {
}

UPrimitiveComponent* ATeleporter::GetRecieveTeleportMovementBase_Implementation(ATeleporter* SourceTeleporter, APawn* Pawn, bool bRelativeToRoot) {
    return NULL;
}

FTransform ATeleporter::GetReceiveTeleportTransform_Implementation(ATeleporter* SourceTeleporter, APawn* Pawn, int32 Index, bool bRelativeToRoot) {
    return FTransform{};
}

void ATeleporter::CosmeticFinishTeleport_Implementation(ATeleporter* Teleport, bool bRelativeToRoot) {
}

void ATeleporter::CosmeticBeginTeleport_Implementation(ATeleporter* Teleport, bool bRelativeToRoot) {
}

void ATeleporter::BeginTeleport(bool bRelativeToRoot) {
}

void ATeleporter::AddPawnsToTeleportFromPlayerStates(const TArray<APlayerState*> Players) {
}

void ATeleporter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeleporter, PawnsToTeleport);
}


