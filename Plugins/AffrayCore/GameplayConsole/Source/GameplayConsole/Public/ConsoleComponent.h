#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConsoleArgument.h"
#include "EMessageType.h"
#include "MessageDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ConsoleComponent.generated.h"

class AGameModeBase;
class AGameStateBase;
class UConsoleCommand;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPLAYCONSOLE_API UConsoleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UConsoleCommand>> Commands;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMessageDelegate OnAddMessage;
    
    UConsoleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SimpleParse(const FString& Text, TArray<FString>& Elements);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRunCommand(int32 CommandIndex, const TArray<FConsoleArgument>& arguments, uint8 AliasIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip);
    
    UFUNCTION(BlueprintCallable)
    bool RunCommand(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    bool Parse(const FString& Text, TSubclassOf<UConsoleCommand>& CommandClass, TArray<FConsoleArgument>& arguments, uint8& AliasIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameStateBase* GetGameState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameModeBase* GetGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCommand(const FString& Text, TSubclassOf<UConsoleCommand>& CommandClass, uint8& AliasIndex) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip);
    
    UFUNCTION(BlueprintCallable)
    bool AutoComplete(const FString& Text, TArray<FString>& Options, int32 ArgumentIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip);
    
};

