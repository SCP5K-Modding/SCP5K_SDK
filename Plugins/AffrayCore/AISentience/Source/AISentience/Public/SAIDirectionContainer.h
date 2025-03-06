#pragma once
#include "CoreMinimal.h"
#include "SAIDirectionContainer.generated.h"

class USAIDirection;

USTRUCT(BlueprintType)
struct FSAIDirectionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIDirection* Direction;
    
    AISENTIENCE_API FSAIDirectionContainer();
};

