#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AmbientAudioComponent.generated.h"

class AActor;
class AAmbientAudioVolume;
class APawn;
class APlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AMBIENTAUDIOVOLUMES_API UAmbientAudioComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAmbientAudioVolume*> AudioVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAmbientAudioVolume* CurrentAudioVolume;
    
public:
    UAmbientAudioComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
};

