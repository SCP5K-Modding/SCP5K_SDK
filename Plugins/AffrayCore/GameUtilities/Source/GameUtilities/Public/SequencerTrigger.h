#pragma once
#include "CoreMinimal.h"
#include "PlayerTriggerVolume.h"
#include "SequencerTrigger.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable)
class GAMEUTILITIES_API ASequencerTrigger : public APlayerTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    ASequencerTrigger(const FObjectInitializer& ObjectInitializer);

};

