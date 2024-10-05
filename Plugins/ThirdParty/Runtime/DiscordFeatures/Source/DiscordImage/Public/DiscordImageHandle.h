#pragma once
#include "CoreMinimal.h"
#include "EDiscordImageType.h"
#include "DiscordImageHandle.generated.h"

USTRUCT(BlueprintType)
struct FDiscordImageHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordImageType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Size;
    
    DISCORDIMAGE_API FDiscordImageHandle();
};

