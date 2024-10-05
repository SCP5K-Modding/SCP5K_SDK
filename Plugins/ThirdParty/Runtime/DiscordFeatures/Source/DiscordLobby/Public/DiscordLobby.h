#pragma once
#include "CoreMinimal.h"
#include "EDiscordLobbyType.h"
#include "DiscordLobby.generated.h"

USTRUCT(BlueprintType)
struct DISCORDLOBBY_API FDiscordLobby {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordLobbyType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 OwnerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Secret;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Capacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    FDiscordLobby();
};

