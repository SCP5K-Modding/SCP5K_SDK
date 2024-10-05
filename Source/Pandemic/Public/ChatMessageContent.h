#pragma once
#include "CoreMinimal.h"
#include "EChatType.h"
#include "PlayerID.h"
#include "ChatMessageContent.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FChatMessageContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerID PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* SelfPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatType ChatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* TargetPlayerState;
    
    PANDEMIC_API FChatMessageContent();
};

