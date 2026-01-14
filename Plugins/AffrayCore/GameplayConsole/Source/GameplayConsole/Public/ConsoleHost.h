#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "EMessageType.h"
#include "ConsoleHost.generated.h"

class UConsoleComponent;

UCLASS(Blueprintable)
class GAMEPLAYCONSOLE_API AConsoleHost : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConsoleComponent* Console;
    
    AConsoleHost(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip);
    
};

