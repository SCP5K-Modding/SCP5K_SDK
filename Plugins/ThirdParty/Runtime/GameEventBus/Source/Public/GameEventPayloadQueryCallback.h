#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GlobalGameEventPayloadMCDelegateDelegate.h"
#include "GameEventPayloadQueryCallback.generated.h"

USTRUCT(BlueprintType)
struct GAMEEVENTBUS_API FGameEventPayloadQueryCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalGameEventPayloadMCDelegate Value;
    
    FGameEventPayloadQueryCallback();
};

