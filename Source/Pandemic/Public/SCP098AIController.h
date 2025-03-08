#pragma once
#include "CoreMinimal.h"
#include "SAIController.h"
#include "UObject/NoExportTypes.h"
#include "SCP098AIController.generated.h"

class ASCP098;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP098AIController : public ASAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCP098* SCP098Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EatingKeyName;
    
    ASCP098AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpawnedLocation() const;
    
};

