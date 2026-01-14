#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QueryDelegatePair.generated.h"

USTRUCT(BlueprintType)
struct FQueryDelegatePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Query;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionRef;
    
    GAMEEVENTBUS_API FQueryDelegatePair();
};

