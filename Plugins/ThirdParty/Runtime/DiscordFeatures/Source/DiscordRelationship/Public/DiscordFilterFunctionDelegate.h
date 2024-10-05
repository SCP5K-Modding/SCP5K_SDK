#pragma once
#include "CoreMinimal.h"
#include "DiscordRelationship.h"
#include "DiscordFilterFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FDiscordFilterFunction, const FDiscordRelationship&, Relationship);

