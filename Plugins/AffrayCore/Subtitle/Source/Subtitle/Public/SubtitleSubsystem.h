#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=EAudioSetting -FallbackName=EAudioSetting
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=ESubtitleDisplayMode -FallbackName=ESubtitleDisplayMode
#include "ESubtitleCategory.h"
#include "Subtitle.h"
#include "SubtitleLine.h"
#include "SubtitleSubsystem.generated.h"

UCLASS(Blueprintable)
class SUBTITLE_API USubtitleSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubtitilesUpdated, const TArray<FSubtitle>&, NewSubtitles);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubtitilesUpdated SubtitlesUpdatedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubtitle> ActiveSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayMode DisplayMode;
    
public:
    USubtitleSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetDisplayMode(ESubtitleDisplayMode NewDisplayMode);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSubtitle(FSubtitle Subtitle);
    
    UFUNCTION(BlueprintCallable)
    void OnSubtitleModeChanged(EAudioSetting Setting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSubtitle MakePositionalSubtitle(TArray<FSubtitleLine> SubtitleLines, FText SpeakerName, FVector SpeakerLocation, float AudibleDistance, ESubtitleCategory Category, bool IsStoryRelevant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSubtitle MakeNonPositionalSubtitle(TArray<FSubtitleLine> SubtitleLines, FText SpeakerName, ESubtitleCategory Category, bool IsStoryRelevant);
    
    UFUNCTION(BlueprintCallable)
    bool IsSubtitleActive(FSubtitle Subtitle);
    
    UFUNCTION(BlueprintCallable)
    void ExpireSubtitle(FSubtitle Subtitle, bool bSkipNextLines);
    
    UFUNCTION(BlueprintCallable)
    bool AreSubtitlesActive();
    
};

