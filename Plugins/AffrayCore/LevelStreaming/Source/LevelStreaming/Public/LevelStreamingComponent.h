#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EStreamingState.h"
#include "LevelStreamingDelegateDelegate.h"
#include "LevelStreamingComponent.generated.h"

class AActor;
class ALevelStreamingInfoVolume;
class ULevel;
class ULevelStreamingComponent;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LEVELSTREAMING_API ULevelStreamingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingDelegate OnLevelLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingDelegate OnLevelUnloaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingDelegate OnLevelFinishedLoading;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelStreamingInfoVolume*> CurrentStreamingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamingState DefaultLoadedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryInitializeEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMasterStreamingComponent;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ULevelStreamingComponent>> ChildComponents;
    
public:
    ULevelStreamingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RecalculateLevels(bool bAddOnly);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelVisible(FName LevelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelLoaded(FName LevelName) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void CallLevelUnloaded(ULevel* Level, UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void CallLevelLoaded(ULevel* Level, UWorld* World);
    
};

