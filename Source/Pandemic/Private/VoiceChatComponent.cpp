#include "VoiceChatComponent.h"

UVoiceChatComponent::UVoiceChatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SampleRate = 44100;
}

void UVoiceChatComponent::UpdatePawn(APawn* Pawn) {
}

void UVoiceChatComponent::StopTalking() {
}

void UVoiceChatComponent::StartTalking() {
}

void UVoiceChatComponent::AddToBuffer(TArray<uint8> AdditionalBuffer) {
}


