#pragma once
#include "CoreMinimal.h"
#include "DiscordRelationship.h"
#include "OnRelationshipUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRelationshipUpdate, const FDiscordRelationship&, Relationship);

