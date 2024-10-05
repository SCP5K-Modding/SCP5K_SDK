#pragma once
#include "CoreMinimal.h"
#include "DiscordImageDimensions.generated.h"

USTRUCT(BlueprintType)
struct FDiscordImageDimensions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Width;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Height;
    
    DISCORDIMAGE_API FDiscordImageDimensions();
};

