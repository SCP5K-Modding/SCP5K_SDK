#pragma once
#include "CoreMinimal.h"
#include "ItemAnimInstance.h"
#include "ThrowableAnimInstance.generated.h"

class UFPSThrowableData;
class UFPSWeaponData;

UCLASS(Blueprintable, NonTransient)
class FPSCONTROLLER_API UThrowableAnimInstance : public UItemAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSWeaponData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSThrowableData* ThrowableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReady;
    
    UThrowableAnimInstance();

};

