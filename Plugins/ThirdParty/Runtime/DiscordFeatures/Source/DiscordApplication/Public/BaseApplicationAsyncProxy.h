#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BaseApplicationAsyncProxy.generated.h"

class UDiscordApplicationManager;

UCLASS(Abstract, Blueprintable)
class UBaseApplicationAsyncProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordApplicationManager* Manager;
    
public:
    UBaseApplicationAsyncProxy();

};

