#include "TestingChamberUpgradeMachine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameEventBus -ObjectName=GameEventBusComponent -FallbackName=GameEventBusComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Interaction -ObjectName=InteractableComponent -FallbackName=InteractableComponent
#include "GameEventBusComponent.h"
#include "InteractableComponent.h"
#include "Components/TextRenderComponent.h"
#include "Net/UnrealNetwork.h"

ATestingChamberUpgradeMachine::ATestingChamberUpgradeMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body Mesh"));
    this->BodyMesh = (UStaticMeshComponent*)RootComponent;
    this->MaxFailureChanceCap = 98.00f;
    this->AutoSucceedMaxFailureChance = 15.00f;
    this->MachineDuration = 3.00f;
    this->DialStuckSound = NULL;
    this->NegativeFeedbackSound = NULL;
    this->bIsMachineRunning = false;
    this->TeamRank = 1;
    this->TeamRankText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Team Rank Text"));
    this->LastSpawnedWeapon = NULL;
    this->EventBusComponent = CreateDefaultSubobject<UGameEventBusComponent>(TEXT("EventBus"));
    this->IntakeInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Intake Interactable"));
    this->IntakePickupClass = NULL;
    this->IntakePickup = NULL;
    this->IntakeLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Intake Location"));
    this->DialInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Dial Interactable"));
    this->CurrentDialSetting = EClockworkDialSetting::DS_1To1;
    this->KeyInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Key Interactable"));
    this->OutputPickupClass = NULL;
    this->OutputLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Output Location"));
    this->DialInteractable->SetupAttachment(RootComponent);
    this->IntakeInteractable->SetupAttachment(RootComponent);
    this->IntakeLocation->SetupAttachment(RootComponent);
    this->KeyInteractable->SetupAttachment(RootComponent);
    this->OutputLocation->SetupAttachment(RootComponent);
    this->TeamRankText->SetupAttachment(RootComponent);
}

void ATestingChamberUpgradeMachine::UpdateDialEmissive_Implementation(EClockworkItemCategory IntakeCategory) {
}

void ATestingChamberUpgradeMachine::SetTeamRank(uint8 NewRank) {
}

void ATestingChamberUpgradeMachine::SetClockworkTokens_Implementation(AActor* EventInstigator, int32 NewTokens) {
}

void ATestingChamberUpgradeMachine::RandomizeAndSpawnWeapon(bool bSuccess, TArray<UFPSItemData*> ItemDataArray, AActor* EventInstigator) {
}

void ATestingChamberUpgradeMachine::RandomizeAndSpawnObjectPack(bool bSuccess, TArray<UFPSItemData*> ItemDataArray, AActor* EventInstigator) {
}

void ATestingChamberUpgradeMachine::OnRep_TeamRank() {
}

void ATestingChamberUpgradeMachine::OnRep_IsMachineRunning() {
}

void ATestingChamberUpgradeMachine::OnRep_DialSetting() {
}

void ATestingChamberUpgradeMachine::OnRep_DialPressure() {
}

void ATestingChamberUpgradeMachine::OnKeyInteracted(AActor* EventInstigator) {
}

void ATestingChamberUpgradeMachine::OnIntakeInteracted(AActor* EventInstigator) {
}

void ATestingChamberUpgradeMachine::OnDialInteracted(AActor* EventInstigator) {
}

void ATestingChamberUpgradeMachine::MulticastIntakeInteracted_Implementation(AActor* EventInstigator) {
}

void ATestingChamberUpgradeMachine::MulticastDialInteracted_Implementation(AActor* EventInstigator, bool bSuccessful) {
}

int32 ATestingChamberUpgradeMachine::GetTokenCost() {
    return 0;
}

int32 ATestingChamberUpgradeMachine::GetTestingChamberRank_Implementation() {
    return 0;
}

float ATestingChamberUpgradeMachine::GetFailureChanceFromRank() const {
    return 0.0f;
}

float ATestingChamberUpgradeMachine::GetFailureChanceFromDialPressure() const {
    return 0.0f;
}

float ATestingChamberUpgradeMachine::GetFailureChance() const {
    return 0.0f;
}

int32 ATestingChamberUpgradeMachine::GetClockworkTokens_Implementation(AActor* EventInstigator) {
    return 0;
}

void ATestingChamberUpgradeMachine::AddScoreToUser_Implementation(AActor* EventInstigator) {
}

void ATestingChamberUpgradeMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATestingChamberUpgradeMachine, DialPressureSettings);
    DOREPLIFETIME(ATestingChamberUpgradeMachine, bIsMachineRunning);
    DOREPLIFETIME(ATestingChamberUpgradeMachine, TeamRank);
    DOREPLIFETIME(ATestingChamberUpgradeMachine, LastSpawnedWeapon);
    DOREPLIFETIME(ATestingChamberUpgradeMachine, IntakeObjectData);
    DOREPLIFETIME(ATestingChamberUpgradeMachine, CurrentDialSetting);
    DOREPLIFETIME(ATestingChamberUpgradeMachine, OutputObjectData);
}


