#pragma once
#include "CoreMinimal.h"
#include "DiscordActivityAssets.generated.h"

USTRUCT(BlueprintType)
struct DISCORDCORE_API FDiscordActivityAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LargeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LargeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SmallImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SmallText;
    
    FDiscordActivityAssets();
};

