#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECoverFiringOptions.h"
#include "SAICoverData.generated.h"

USTRUCT(BlueprintType)
struct AISENTIENCE_API FSAICoverData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Facing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverFiringOptions FiringOptions;
    
    FSAICoverData();
};

