#include "ConsoleCommand.h"

UConsoleCommand::UConsoleCommand() {
    this->OwningPlayer = NULL;
    this->OwningComponent = NULL;
    this->CurrentAlias = 0;
    this->MinArguments = 0;
    this->bExecuteOnClient = true;
    this->bExecuteOnServer = false;
    this->bAsynchronous = false;
}

bool UConsoleCommand::ValidateServer_Implementation(UConsoleComponent* Component, APlayerController* Controller, const TArray<FConsoleArgument>& InArguments) {
    return false;
}

void UConsoleCommand::ServerAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip) {
}

void UConsoleCommand::MulticastAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip) {
}

UConsoleComponent* UConsoleCommand::GetOwningComponent() const {
    return NULL;
}

AGameStateBase* UConsoleCommand::GetGameState() const {
    return NULL;
}

AGameModeBase* UConsoleCommand::GetGameMode() const {
    return NULL;
}

UGameInstance* UConsoleCommand::GetGameInstance() const {
    return NULL;
}

TArray<FConsoleArgument> UConsoleCommand::GetCurrentArguments() const {
    return TArray<FConsoleArgument>();
}

APlayerController* UConsoleCommand::GetController() const {
    return NULL;
}

bool UConsoleCommand::GetAutoFillArray_Implementation(const UConsoleComponent* Component, int32 ArgumentIndex, TArray<FString>& Results) {
    return false;
}

void UConsoleCommand::FinishExecution_Implementation() {
}

void UConsoleCommand::ExecuteServer_Implementation(UConsoleComponent* Component, APlayerController* Controller, const TArray<FConsoleArgument>& InArguments) {
}

void UConsoleCommand::ExecuteClient_Implementation(UConsoleComponent* Component, APlayerController* Controller, const TArray<FConsoleArgument>& InArguments) {
}

void UConsoleCommand::ClientAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip) {
}


