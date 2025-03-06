#include "SCP610CrawlerCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIAttackComponent -FallbackName=SAIAttackComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=HealthComponent -FallbackName=HealthComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=SplatterComponent -FallbackName=SplatterComponent
#include "SCP610CrawlerController.h"

ASCP610CrawlerCharacter::ASCP610CrawlerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = ASCP610CrawlerController::StaticClass();
    this->AttackComponent = CreateDefaultSubobject<USAIAttackComponent>(TEXT("AttackComponent"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
    this->SplatterComponent = CreateDefaultSubobject<USplatterComponent>(TEXT("Splatter"));
    this->CrawlerController = NULL;
}


