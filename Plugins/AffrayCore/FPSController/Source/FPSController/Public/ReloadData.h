#pragma once
#include "CoreMinimal.h"
#include "ReloadData.generated.h"

USTRUCT(BlueprintType)
struct FReloadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpeedReload;
    
    FPSCONTROLLER_API FReloadData();
};

