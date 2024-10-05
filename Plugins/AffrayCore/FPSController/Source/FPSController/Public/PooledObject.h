#pragma once
#include "CoreMinimal.h"
#include "PooledObject.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPooledObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActorTickWasEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Object;
    
    FPSCONTROLLER_API FPooledObject();
};

