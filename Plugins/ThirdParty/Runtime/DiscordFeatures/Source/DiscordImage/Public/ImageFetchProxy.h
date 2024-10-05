#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DiscordImageHandle.h"
#include "OnFetchResponseDelegate.h"
#include "ImageFetchProxy.generated.h"

class UDiscordImageManager;
class UImageFetchProxy;

UCLASS(Blueprintable)
class UImageFetchProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFetchResponse OnFetched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFetchResponse OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordImageManager* Manager;
    
public:
    UImageFetchProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnResultInternal(const EDiscordResult Result, const FDiscordImageHandle& ImageHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    static UImageFetchProxy* Fetch(UDiscordImageManager* ImageManager, FDiscordImageHandle Handle, const bool bRefresh);
    
};

