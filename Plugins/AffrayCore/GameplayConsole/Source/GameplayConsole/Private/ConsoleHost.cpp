#include "ConsoleHost.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ConsoleComponent.h"

AConsoleHost::AConsoleHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Console = CreateDefaultSubobject<UConsoleComponent>(TEXT("Console"));
}

void AConsoleHost::OnAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip) {
}


