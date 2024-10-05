#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseStorageAsyncProxy.h"
#include "OnWriteAsyncEventDelegate.h"
#include "WriteAsyncProxy.generated.h"

class UDiscordStorageManager;
class UWriteAsyncProxy;

UCLASS(Blueprintable)
class UWriteAsyncProxy : public UBaseStorageAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWriteAsyncEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWriteAsyncEvent OnError;
    
    UWriteAsyncProxy();

    UFUNCTION(BlueprintCallable)
    static UWriteAsyncProxy* WriteAsync(UDiscordStorageManager* StorageManager, const FString& Name, const TArray<uint8>& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
};

