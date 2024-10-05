#pragma once
#include "CoreMinimal.h"
#include "DiscordEntitlement.h"
#include "DiscordManager.h"
#include "DiscordEntitlementEventDelegate.h"
#include "DiscordSku.h"
#include "DiscordStoreManager.generated.h"

class UDiscordCore;
class UDiscordStoreManager;

UCLASS(Blueprintable)
class DISCORDSTORE_API UDiscordStoreManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordEntitlementEvent OnEntitlementCreate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordEntitlementEvent OnEntitlementDelete;
    
    UDiscordStoreManager();

    UFUNCTION(BlueprintPure)
    bool HasSkuEntitlement(const int64 SkuId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordStoreManager* GetStoreManager(const UDiscordCore* DiscordCore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordSku GetSkuAt(const int32 Index);
    
    UFUNCTION(BlueprintPure)
    FDiscordSku GetSku(const int64 SkuId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordEntitlement GetEntitlementAt(const int32 Index);
    
    UFUNCTION(BlueprintPure)
    FDiscordEntitlement GetEntitlement(const int64 EntitlementId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountSkus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountEntitlements();
    
};

