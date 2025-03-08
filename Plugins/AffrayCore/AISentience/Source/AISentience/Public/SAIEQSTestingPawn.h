#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSTestingPawn.h"
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

