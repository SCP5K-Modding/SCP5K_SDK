#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AdaptiveMusicComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DYNAMICAUDIO_API UAdaptiveMusicComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAdaptiveMusicComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
};

