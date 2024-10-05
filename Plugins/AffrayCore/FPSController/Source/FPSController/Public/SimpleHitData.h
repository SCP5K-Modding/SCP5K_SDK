#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "SimpleHitData.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FPSCONTROLLER_API FSimpleHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRadial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal HitFromDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal HitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* HitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HitBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HitDamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bHasAppliedPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DamageType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StoredDamage;
    
public:
    FSimpleHitData();
};

