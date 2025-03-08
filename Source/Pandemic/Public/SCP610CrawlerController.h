#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "SCP610CrawlerController.generated.h"

class ASCP610CrawlerCharacter;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP610CrawlerController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCP610CrawlerCharacter* CrawlerCharacter;
    
public:
    ASCP610CrawlerController(const FObjectInitializer& ObjectInitializer);

};

