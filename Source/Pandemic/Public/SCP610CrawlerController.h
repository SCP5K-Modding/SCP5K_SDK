#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
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

