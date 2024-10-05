#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Body.generated.h"

USTRUCT(BlueprintType)
struct FBody {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BodyDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BodyLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyDot;
    
    DISMEMBERMENT_API FBody();
};

