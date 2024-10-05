#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BaseActivityAsyncProxy.generated.h"

class UDiscordActivityManager;

UCLASS(Blueprintable)
class UBaseActivityAsyncProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordActivityManager* Manager;
    
public:
    UBaseActivityAsyncProxy();

};

