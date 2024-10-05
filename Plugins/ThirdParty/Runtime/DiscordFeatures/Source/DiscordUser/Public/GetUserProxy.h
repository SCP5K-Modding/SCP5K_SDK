#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGetUserEventDelegate.h"
#include "GetUserProxy.generated.h"

class UDiscordUserManager;
class UGetUserProxy;

UCLASS(Blueprintable, MinimalAPI)
class UGetUserProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetUserEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetUserEvent OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordUserManager* Manager;
    
public:
    UGetUserProxy();

    UFUNCTION(BlueprintCallable)
    static UGetUserProxy* GetUser(UDiscordUserManager* UserManager, const int64 UserId);
    
};

