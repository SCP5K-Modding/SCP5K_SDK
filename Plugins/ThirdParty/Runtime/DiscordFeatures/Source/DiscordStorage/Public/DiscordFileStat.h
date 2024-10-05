#pragma once
#include "CoreMinimal.h"
#include "Uint64.h"
#include "DiscordFileStat.generated.h"

USTRUCT(BlueprintType)
struct FDiscordFileStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUint64 Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUint64 LastModified;
    
    DISCORDSTORAGE_API FDiscordFileStat();
};

