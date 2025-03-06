#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TheatreScreenPatrolPath.generated.h"

class UTheatreScreenPatrolPathComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ATheatreScreenPatrolPath : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTheatreScreenPatrolPathComponent* PathComponent;
    
public:
    ATheatreScreenPatrolPath(const FObjectInitializer& ObjectInitializer);

};

