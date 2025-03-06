#pragma once
#include "CoreMinimal.h"
#include "JournalDataEntry.h"
#include "JournalDataAudioLog.generated.h"

class UFMODEvent;
class USoundBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEUTILITIES_API UJournalDataAudioLog : public UJournalDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFMOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BaseAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODAudio;
    
    UJournalDataAudioLog();

};

