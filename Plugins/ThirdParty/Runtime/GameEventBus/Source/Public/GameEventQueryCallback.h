#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GlobalGameEventMCDelegateDelegate.h"
#include "GameEventQueryCallback.generated.h"

USTRUCT(BlueprintType)
struct GAMEEVENTBUS_API FGameEventQueryCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalGameEventMCDelegate Value;
    
    FGameEventQueryCallback();
};

