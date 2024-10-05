#pragma once
#include "CoreMinimal.h"
#include "ConsoleArgument.generated.h"

USTRUCT(BlueprintType)
struct FConsoleArgument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    GAMEPLAYCONSOLE_API FConsoleArgument();
};

