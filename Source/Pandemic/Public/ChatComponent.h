#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ChatMessageContent.h"
#include "ChatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UChatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommandPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TextHistory;
    
    UChatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Server_SendMessage(const FString& Message, const FString& User, int32 Team);
    
    UFUNCTION(BlueprintCallable)
    void SendMessageToUser();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendMessageToEveryone(const FString& Message, FChatMessageContent ChatMessageContent);
    
    UFUNCTION(BlueprintCallable)
    void RunCommand();
    
    UFUNCTION(BlueprintCallable)
    FString RemoveCommandPrefix(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    void RegisterChat(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCommand(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxCharacterCount();
    
    UFUNCTION(BlueprintCallable)
    void AddMessage(const FString& Name, const FString& Message);
    
};

