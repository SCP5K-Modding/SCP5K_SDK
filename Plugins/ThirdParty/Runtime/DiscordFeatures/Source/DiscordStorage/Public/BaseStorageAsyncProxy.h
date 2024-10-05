#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BaseStorageAsyncProxy.generated.h"

class UDiscordStorageManager;

UCLASS(Abstract, Blueprintable)
class UBaseStorageAsyncProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordStorageManager* Manager;
    
public:
    UBaseStorageAsyncProxy();

};

