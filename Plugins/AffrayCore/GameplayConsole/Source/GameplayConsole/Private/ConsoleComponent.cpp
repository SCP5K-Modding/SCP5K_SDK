#include "ConsoleComponent.h"
#include "Templates/SubclassOf.h"

UConsoleComponent::UConsoleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UConsoleComponent::SimpleParse(const FString& Text, TArray<FString>& Elements) {
}

void UConsoleComponent::ServerRunCommand_Implementation(int32 CommandIndex, const TArray<FConsoleArgument>& arguments, uint8 AliasIndex) {
}

void UConsoleComponent::ServerAddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip) {
}

bool UConsoleComponent::RunCommand(const FString& Text) {
    return false;
}

bool UConsoleComponent::Parse(const FString& Text, TSubclassOf<UConsoleCommand>& CommandClass, TArray<FConsoleArgument>& arguments, uint8& AliasIndex) {
    return false;
}

void UConsoleComponent::MulticastAddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip) {
}

AGameStateBase* UConsoleComponent::GetGameState() const {
    return NULL;
}

AGameModeBase* UConsoleComponent::GetGameMode() const {
    return NULL;
}

bool UConsoleComponent::GetCommand(const FString& Text, TSubclassOf<UConsoleCommand>& CommandClass, uint8& AliasIndex) const {
    return false;
}

void UConsoleComponent::ClientAddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip) {
}

bool UConsoleComponent::AutoComplete(const FString& Text, TArray<FString>& Options, int32 ArgumentIndex) {
    return false;
}

void UConsoleComponent::AddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip) {
}


