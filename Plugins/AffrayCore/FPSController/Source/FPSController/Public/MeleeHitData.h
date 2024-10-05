#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Chaos/ChaosEngineInterface.h"
#include "MeleeHitData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FPSCONTROLLER_API FMeleeHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HitBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* HitComponent;
    
    FMeleeHitData();
};

