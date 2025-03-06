#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConsoleArgument.h"
#include "EArgumentType.h"
#include "EMessageType.h"
#include "ConsoleCommand.generated.h"

class AGameModeBase;
class AGameStateBase;
class APlayerController;
class UConsoleComponent;
class UGameInstance;

UCLASS(Blueprintable)
class GAMEPLAYCONSOLE_API UConsoleCommand : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConsoleComponent* OwningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConsoleArgument> CurrentArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Aliases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EArgumentType>> arguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteOnClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsynchronous;
    
    UConsoleCommand();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ValidateServer(UConsoleComponent* Component, APlayerController* Controller, const TArray<FConsoleArgument>& InArguments);
    
    UFUNCTION(BlueprintCallable)
    void ServerAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip);
    
    UFUNCTION(BlueprintCallable)
    void MulticastAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UConsoleComponent* GetOwningComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameStateBase* GetGameState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameModeBase* GetGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameInstance* GetGameInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FConsoleArgument> GetCurrentArguments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAutoFillArray(const UConsoleComponent* Component, int32 ArgumentIndex, TArray<FString>& Results);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishExecution();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteServer(UConsoleComponent* Component, APlayerController* Controller, const TArray<FConsoleArgument>& InArguments);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteClient(UConsoleComponent* Component, APlayerController* Controller, const TArray<FConsoleArgument>& InArguments);
    
    UFUNCTION(BlueprintCallable)
    void ClientAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip);
    
};

