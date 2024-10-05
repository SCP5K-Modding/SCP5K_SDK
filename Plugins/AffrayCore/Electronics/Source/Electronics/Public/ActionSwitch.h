#pragma once
#include "CoreMinimal.h"
#include "ElectronicSwitch.h"
#include "ActionSwitch.generated.h"

UCLASS(Blueprintable)
class ELECTRONICS_API AActionSwitch : public AElectronicSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreak;
    
    AActionSwitch(const FObjectInitializer& ObjectInitializer);

};

