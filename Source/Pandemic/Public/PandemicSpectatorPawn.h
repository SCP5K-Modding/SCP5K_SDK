#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "Templates/SubclassOf.h"
#include "PandemicSpectatorPawn.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class PANDEMIC_API APandemicSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacter> SpectateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsToSwitchAfterDeath;
    
public:
    APandemicSpectatorPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddSpectatee(ACharacter* Spectatee);
    
};

