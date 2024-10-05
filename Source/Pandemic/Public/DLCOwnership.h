#pragma once
#include "CoreMinimal.h"
#include "DLCOwnership.generated.h"

USTRUCT(BlueprintType)
struct FDLCOwnership {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DLCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwned;
    
    PANDEMIC_API FDLCOwnership();
};

