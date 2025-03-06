#pragma once
#include "CoreMinimal.h"
#include "SCP610Character.h"
#include "SCP610GolemCharacter.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ASCP610GolemCharacter : public ASCP610Character {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SiegeRageLevelLimit;
    
public:
    ASCP610GolemCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSiegeRageLevelLimit() const;
    
};

