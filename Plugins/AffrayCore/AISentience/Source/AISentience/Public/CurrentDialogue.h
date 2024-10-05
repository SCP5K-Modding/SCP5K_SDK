#pragma once
#include "CoreMinimal.h"
#include "Dialogue.h"
#include "CurrentDialogue.generated.h"

USTRUCT(BlueprintType)
struct FCurrentDialogue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FDialogue Dialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DialogueIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasInterrupted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FName PrevRepID;
    
    AISENTIENCE_API FCurrentDialogue();
};

