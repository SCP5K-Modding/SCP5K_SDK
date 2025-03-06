#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ExcludedActorModifiedMCDelegateDelegate.h"
#include "WeatherExclusionComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeatherExclusionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExcludedActorModifiedMCDelegate OnExcludedActorAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExcludedActorModifiedMCDelegate OnExcludedActorRemoved;
    
    UWeatherExclusionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveOverlappingActor(AActor* InOtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetExcludedActors() const;
    
    UFUNCTION(BlueprintCallable)
    void AddOverlappingActor(AActor* InOtherActor);
    
};

