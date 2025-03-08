#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SCP621FlowerAnimInstance.generated.h"

class ASCP621Flower;

UCLASS(Blueprintable, NonTransient)
class PANDEMIC_API USCP621FlowerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCP621Flower* Flower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    USCP621FlowerAnimInstance();

};

