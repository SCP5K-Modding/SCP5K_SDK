#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DiscordInputMode.h"
#include "SetInputModeEventDelegate.h"
#include "VoiceSetInputModeProxy.generated.h"

class UDiscordVoiceManager;
class UVoiceSetInputModeProxy;

UCLASS(Blueprintable)
class UVoiceSetInputModeProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetInputModeEvent OnInputModeSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetInputModeEvent OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordVoiceManager* Manager;
    
public:
    UVoiceSetInputModeProxy();

    UFUNCTION(BlueprintCallable)
    static UVoiceSetInputModeProxy* SetInputMode(UDiscordVoiceManager* VoiceManager, const FDiscordInputMode& NewInputMode);
    
};

