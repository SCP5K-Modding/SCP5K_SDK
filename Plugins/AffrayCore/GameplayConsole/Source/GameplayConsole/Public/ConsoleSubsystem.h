#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ConsoleSubsystem.generated.h"

class AConsoleHost;

UCLASS(Blueprintable, Config=Game)
class GAMEPLAYCONSOLE_API UConsoleSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AConsoleHost> ConsoleHostClass;
    
public:
    UConsoleSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetConsoleHost(AConsoleHost* NewConsoleHost);
    
    UFUNCTION(BlueprintCallable)
    bool RunCommandOnServer(const FString& CommandText);
    
    UFUNCTION(BlueprintCallable)
    AConsoleHost* GetConsoleHost();
    
};

