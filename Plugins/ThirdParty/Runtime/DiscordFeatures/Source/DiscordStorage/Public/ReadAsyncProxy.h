#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseStorageAsyncProxy.h"
#include "OnReadAsyncEventDelegate.h"
#include "ReadAsyncProxy.generated.h"

class UDiscordStorageManager;
class UReadAsyncProxy;

UCLASS(Blueprintable)
class UReadAsyncProxy : public UBaseStorageAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadAsyncEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadAsyncEvent OnError;
    
    UReadAsyncProxy();

    UFUNCTION(BlueprintCallable)
    static UReadAsyncProxy* ReadAsync(UDiscordStorageManager* StorageManager, const FString& Name);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result, TArray<uint8>& Data);
    
};

