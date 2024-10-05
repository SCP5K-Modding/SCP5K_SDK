#pragma once
#include "CoreMinimal.h"
#include "AISquad.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FAISquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> SquadMembers;
    
    AISENTIENCE_API FAISquad();
};

