#include "TOCDialogueSource.h"
#include "DialogueComponent.h"

ATOCDialogueSource::ATOCDialogueSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UDialogueComponent>(TEXT("DialogueComponent"));
    this->DialogueComponent = (UDialogueComponent*)RootComponent;
}

void ATOCDialogueSource::ServerRequestStop_Implementation(FName DialogueTableID) {
}

void ATOCDialogueSource::ServerRequestReportToTOC_Implementation(FName DialogueTableID) {
}


