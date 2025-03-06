#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
#include "VoiceChatComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UVoiceChatComponent : public UFMODAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UVoiceChatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void StopTalking();
    
    UFUNCTION(BlueprintCallable)
    void StartTalking();
    
    UFUNCTION(BlueprintCallable)
    void AddToBuffer(TArray<uint8> AdditionalBuffer);
    
};

