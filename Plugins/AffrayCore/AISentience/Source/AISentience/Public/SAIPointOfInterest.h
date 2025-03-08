#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SAIPointOfInterest.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIPointOfInterest : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterestPriority;
    
public:
    USAIPointOfInterest(const FObjectInitializer& ObjectInitializer);

};

