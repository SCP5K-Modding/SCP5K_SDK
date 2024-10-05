#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordHttpApiSettings.generated.h"

UCLASS(Blueprintable, Config=DiscordHttpApi)
class DISCORDHTTPAPI_API UDiscordHttpApiSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BotToken;
    
    UDiscordHttpApiSettings();

    UFUNCTION(BlueprintPure)
    static int64 MakeInt64(const FString& Int64);
    
};

