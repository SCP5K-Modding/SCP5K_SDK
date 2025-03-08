#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESAITargetDetectionEvent.h"
#include "SAILookHistory.h"
#include "SAIAwarenessComponent.generated.h"

class UDialogueComponent;
class USAICombatProcessingComponent;
class USAIInvestigationSubsystem;
class USAIStimuliProcessingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIAwarenessComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESAITargetDetectionEvent, FName> DialogEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCoordinatedInvestigation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogueComponent* DialogueComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIStimuliProcessingComponent* StimuliProcessingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAICombatProcessingComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USAIInvestigationSubsystem* InvestigationSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAILookHistory History;
    
public:
    USAIAwarenessComponent(const FObjectInitializer& ObjectInitializer);

};

