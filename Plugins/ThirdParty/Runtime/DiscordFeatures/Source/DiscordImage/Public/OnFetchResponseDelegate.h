#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "DiscordImageHandle.h"
#include "OnFetchResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFetchResponse, const EDiscordResult, Result, const FDiscordImageHandle&, Handle);

