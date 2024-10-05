#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "EDiscordResult.h"
#include "DiscordImageDimensions.h"
#include "DiscordImageHandle.h"
#include "DiscordImageManager.generated.h"

class UDiscordCore;
class UDiscordImageManager;
class UTexture2D;

UCLASS(Blueprintable)
class DISCORDIMAGE_API UDiscordImageManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UDiscordImageManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetTexture(const FDiscordImageHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordImageManager* GetImageManager(UDiscordCore* DiscordCore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordImageDimensions GetDimensions(const FDiscordImageHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    EDiscordResult GetData(const FDiscordImageHandle& Handle, TArray<uint8>& OutData);
    
};

