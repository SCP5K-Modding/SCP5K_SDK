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

bool UVoiceChatComponent::HasVoiceActivity(const TArray<uint8>& AdditionalBuffer, int32 Threshold) const
{
    return true;
}

int32 UVoiceChatComponent::GetVoiceLoudness(const TArray<uint8>& AdditionalBuffer) const
{
    return 0;
}

void UVoiceChatComponent::AddToBuffer(TArray<uint8> AdditionalBuffer) {
}


