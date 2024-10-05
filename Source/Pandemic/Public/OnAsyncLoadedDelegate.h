#pragma once
#include "CoreMinimal.h"
#include "OnAsyncLoadedDelegate.generated.h"

class UButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncLoaded, UButtonBase*, Button);

