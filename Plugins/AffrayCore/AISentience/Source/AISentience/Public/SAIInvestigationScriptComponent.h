#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESAIInvestigationType.h"
#include "SAIInvestigationScriptComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIInvestigationScriptComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PulseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAIInvestigationType InvestigationType;
    
    USAIInvestigationScriptComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartPulse();
    
    UFUNCTION(BlueprintCallable)
    void EndPulse();
    
};

