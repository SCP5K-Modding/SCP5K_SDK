#include "ChatComponent.h"

UChatComponent::UChatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommandPrefix = TEXT("/");
}

void UChatComponent::Server_SendMessage(const FString& Message, const FString& User, int32 Team) {
}

void UChatComponent::SendMessageToUser() {
}

void UChatComponent::SendMessageToEveryone_Implementation(const FString& Message, FChatMessageContent ChatMessageContent) {
}

void UChatComponent::RunCommand() {
}

FString UChatComponent::RemoveCommandPrefix(const FString& Command) {
    return TEXT("");
}

void UChatComponent::RegisterChat(const FString& Message) {
}

bool UChatComponent::IsCommand(const FString& Text) {
    return false;
}

int32 UChatComponent::GetMaxCharacterCount() {
    return 0;
}

void UChatComponent::AddMessage(const FString& Name, const FString& Message) {
}


