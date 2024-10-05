#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "DiscordFilterFunctionDelegate.h"
#include "DiscordRelationship.h"
#include "OnRelationshipRefreshedDelegate.h"
#include "OnRelationshipUpdateDelegate.h"
#include "DiscordRelationshipManager.generated.h"

class UDiscordCore;
class UDiscordRelationshipManager;

UCLASS(Blueprintable)
class DISCORDRELATIONSHIP_API UDiscordRelationshipManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRelationshipRefreshed OnRelationshipRefreshed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRelationshipUpdate OnRelationshipUpdate;
    
    UDiscordRelationshipManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordRelationshipManager* GetRelationshipManager(UDiscordCore* DiscordCore);
    
    UFUNCTION(BlueprintPure)
    FDiscordRelationship GetAt(const int64 Index);
    
    UFUNCTION(BlueprintPure)
    FDiscordRelationship Get(const int64 UserId);
    
    UFUNCTION(BlueprintCallable)
    void Filter(const FDiscordFilterFunction& FilterFunction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Count();
    
};

