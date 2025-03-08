#include "SCP610CrawlerCharacter.h"
#include "SAIAttackComponent.h"
#include "Engine/EngineTypes.h"
#include "HealthComponent.h"
#include "SplatterComponent.h"
#include "SCP610CrawlerController.h"

ASCP610CrawlerCharacter::ASCP610CrawlerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = ASCP610CrawlerController::StaticClass();
    this->AttackComponent = CreateDefaultSubobject<USAIAttackComponent>(TEXT("AttackComponent"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
    this->SplatterComponent = CreateDefaultSubobject<USplatterComponent>(TEXT("Splatter"));
    this->CrawlerController = NULL;
}


