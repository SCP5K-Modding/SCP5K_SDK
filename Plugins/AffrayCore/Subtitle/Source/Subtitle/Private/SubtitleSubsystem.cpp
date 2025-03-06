#include "SubtitleSubsystem.h"

USubtitleSubsystem::USubtitleSubsystem() {
    this->SubtitleLimit = 3;
    this->DisplayMode = ESubtitleDisplayMode::None;
}

void USubtitleSubsystem::SetDisplayMode(ESubtitleDisplayMode NewDisplayMode) {
}

void USubtitleSubsystem::RegisterSubtitle(FSubtitle Subtitle) {
}

void USubtitleSubsystem::OnSubtitleModeChanged(EAudioSetting Setting) {
}

FSubtitle USubtitleSubsystem::MakePositionalSubtitle(TArray<FSubtitleLine> SubtitleLines, FText SpeakerName, FVector SpeakerLocation, float AudibleDistance, ESubtitleCategory Category, bool IsStoryRelevant) {
    return FSubtitle{};
}

FSubtitle USubtitleSubsystem::MakeNonPositionalSubtitle(TArray<FSubtitleLine> SubtitleLines, FText SpeakerName, ESubtitleCategory Category, bool IsStoryRelevant) {
    return FSubtitle{};
}

bool USubtitleSubsystem::IsSubtitleActive(FSubtitle Subtitle) {
    return false;
}

void USubtitleSubsystem::ExpireSubtitle(FSubtitle Subtitle, bool bSkipNextLines) {
}

bool USubtitleSubsystem::AreSubtitlesActive() {
    return false;
}


