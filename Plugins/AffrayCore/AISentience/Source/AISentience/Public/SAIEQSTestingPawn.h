#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EQSTestingPawn -FallbackName=EQSTestingPawn
#include "SAIEQSTestingPawn.generated.h"

class AActor;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIEQSTestingPawn : public AEQSTestingPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    ASAIEQSTestingPawn(const FObjectInitializer& ObjectInitializer);

};

