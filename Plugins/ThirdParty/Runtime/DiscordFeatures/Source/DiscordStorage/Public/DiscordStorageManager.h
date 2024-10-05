#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "DiscordFileStat.h"
#include "DiscordStorageManager.generated.h"

class UDiscordCore;
class UDiscordStorageManager;

UCLASS(Blueprintable)
class DISCORDSTORAGE_API UDiscordStorageManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UDiscordStorageManager();

    UFUNCTION(BlueprintCallable)
    void Write(const FString& Name, TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordFileStat StatAt(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordFileStat Stat(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Read(const FString& Name, UPARAM(Ref) TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordStorageManager* GetStorageManager(const UDiscordCore* DiscordCore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Exists(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void Delete(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Count();
    
};

