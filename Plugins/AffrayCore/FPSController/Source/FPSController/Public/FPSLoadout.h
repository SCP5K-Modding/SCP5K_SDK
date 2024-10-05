#pragma once
#include "CoreMinimal.h"
#include "FPSItemSlotData.h"
#include "FPSLoadout.generated.h"

class UFPSItemData;

USTRUCT(BlueprintType)
struct FFPSLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFPSItemData>> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFPSItemSlotData> ItemSlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FactionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RoleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterSkinIndex;
    
    FPSCONTROLLER_API FFPSLoadout();
};

