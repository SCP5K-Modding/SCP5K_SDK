#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "AdaptiveMusicVolume.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class ADAPTIVEMUSIC_API AAdaptiveMusicVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    AAdaptiveMusicVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetEvent() const;
    
};

