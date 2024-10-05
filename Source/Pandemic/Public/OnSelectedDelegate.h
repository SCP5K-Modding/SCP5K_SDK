#pragma once
#include "CoreMinimal.h"
#include "OnSelectedDelegate.generated.h"

class UButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelected, UButtonBase*, Button);

