#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "Uint64.h"
#include "BaseStorageAsyncProxy.h"
#include "OnReadAsyncEventDelegate.h"
#include "ReadAsyncPartialProxy.generated.h"

class UDiscordStorageManager;
class UReadAsyncPartialProxy;

UCLASS(Blueprintable)
class UReadAsyncPartialProxy : public UBaseStorageAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadAsyncEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadAsyncEvent OnError;
    
    UReadAsyncPartialProxy();

    UFUNCTION(BlueprintCallable)
    static UReadAsyncPartialProxy* ReadAsyncPartial(UDiscordStorageManager* StorageManager, const FString& Name, const FUint64& Offset, const FUint64& Length);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result, TArray<uint8>& Data);
    
};

