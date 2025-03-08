#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Damageable.h"
#include "SCP610CrawlerCharacter.generated.h"

class ASCP610CrawlerController;
class UHealthComponent;
class USAIAttackComponent;
class USplatterComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP610CrawlerCharacter : public ACharacter, public IDamageable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIAttackComponent* AttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplatterComponent* SplatterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCP610CrawlerController* CrawlerController;
    
public:
    ASCP610CrawlerCharacter(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

