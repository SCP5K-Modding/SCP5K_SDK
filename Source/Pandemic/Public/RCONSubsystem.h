#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayConsole -ObjectName=EMessageType -FallbackName=EMessageType
#include "RCONSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class PANDEMIC_API URCONSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RCONPassword;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Port;
    
public:
    URCONSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnConsoleMessageSent(const FString& Text, EMessageType MessageType, const FString& Tooltip);
    
};

