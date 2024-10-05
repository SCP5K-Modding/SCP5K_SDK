#pragma once
#include "CoreMinimal.h"
#include "DialogueLine.generated.h"

USTRUCT(BlueprintType)
struct FDialogueLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString FinalDialogueID;
    
    AISENTIENCE_API FDialogueLine();
};

