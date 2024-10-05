#pragma once
#include "CoreMinimal.h"
#include "FPSItemSlot.generated.h"

class UFPSItemData;

USTRUCT(BlueprintType)
struct FFPSItemSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFPSItemData>> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Skins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FactionIndex;
    
    FPSCONTROLLER_API FFPSItemSlot();
};

