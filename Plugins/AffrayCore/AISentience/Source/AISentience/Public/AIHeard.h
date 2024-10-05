#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIHeard.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIHeard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfHearing;
    
    AISENTIENCE_API FAIHeard();
};

