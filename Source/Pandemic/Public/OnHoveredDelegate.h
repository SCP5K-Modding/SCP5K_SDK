#pragma once
#include "CoreMinimal.h"
#include "OnHoveredDelegate.generated.h"

class UButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHovered, UButtonBase*, Button);

