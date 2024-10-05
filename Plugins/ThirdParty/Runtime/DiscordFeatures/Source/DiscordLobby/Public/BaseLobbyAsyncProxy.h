#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BaseLobbyAsyncProxy.generated.h"

class UDiscordLobbyManager;

UCLASS(Abstract, Blueprintable)
class UBaseLobbyAsyncProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordLobbyManager* Manager;
    
public:
    UBaseLobbyAsyncProxy();

};

