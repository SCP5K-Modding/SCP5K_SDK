#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DiscordLobbyMemberTransaction.h"
#include "DiscordLobbySearchQuery.h"
#include "DiscordLobbyTransaction.h"
#include "EDiscordLobbySearchCast.h"
#include "EDiscordLobbySearchComparison.h"
#include "EDiscordLobbySearchDistance.h"
#include "EDiscordLobbyType.h"
#include "DiscordLobbyLibrary.generated.h"

UCLASS(Blueprintable)
class UDiscordLobbyLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDiscordLobbyLibrary();

    UFUNCTION(BlueprintCallable)
    static FDiscordLobbySearchQuery Sort(UPARAM(Ref) FDiscordLobbySearchQuery& SearchQuery, const FString& Key, const EDiscordLobbySearchCast Cast, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbyTransaction SetType(UPARAM(Ref) FDiscordLobbyTransaction& Transaction, const EDiscordLobbyType Type);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbyTransaction SetOwner(UPARAM(Ref) FDiscordLobbyTransaction& Transaction, const int64 UserId);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbyTransaction SetMetadata(UPARAM(Ref) FDiscordLobbyTransaction& Transaction, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbyTransaction SetLocked(UPARAM(Ref) FDiscordLobbyTransaction& Transaction, const bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbyTransaction SetLobbyTransactionProperties(UPARAM(Ref) FDiscordLobbyTransaction& Transaction, const EDiscordLobbyType Type, const TMap<FString, FString> MetaData, const int64 UserId, const int64 Capacity, const bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbyTransaction SetCapacity(UPARAM(Ref) FDiscordLobbyTransaction& Transaction, const int64 Capacity);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbyMemberTransaction Member_SetMetadata(UPARAM(Ref) FDiscordLobbyMemberTransaction& Transaction, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbyMemberTransaction Member_DeleteMetadata(UPARAM(Ref) FDiscordLobbyMemberTransaction& Transaction, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbySearchQuery Limit(UPARAM(Ref) FDiscordLobbySearchQuery& SearchQuery, const int64 NewLimit);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbySearchQuery Filter(UPARAM(Ref) FDiscordLobbySearchQuery& SearchQuery, const FString& Key, const EDiscordLobbySearchComparison Comparison, const EDiscordLobbySearchCast Cast, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbySearchQuery Distance(UPARAM(Ref) FDiscordLobbySearchQuery& SearchQuery, const EDiscordLobbySearchDistance NewDistance);
    
    UFUNCTION(BlueprintCallable)
    static FDiscordLobbyTransaction DeleteMetadata(UPARAM(Ref) FDiscordLobbyTransaction& Transaction, const FString& Key);
    
};

