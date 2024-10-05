#pragma once
#include "CoreMinimal.h"
#include "EDiscordInputModeType.h"
#include "DiscordInputMode.generated.h"

USTRUCT(BlueprintType)
struct FDiscordInputMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordInputModeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Shortcut;
    
    DISCORDVOICE_API FDiscordInputMode();
};

