#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnReplicatedLevelListLoadDelegateDelegate.h"
#include "SpawnedLevelList.h"
#include "ReplicatedLevelLoaderComponent.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UReplicatedLevelLoaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplicatedLevelListLoadDelegate OnLevelListLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplicatedLevelListLoadDelegate OnLevelListStartedLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnloadOldLevelsTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LoadedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnedLevels, meta=(AllowPrivateAccess=true))
    FSpawnedLevelList SpawnedLevels;
    
public:
    UReplicatedLevelLoaderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedLevels(const FSpawnedLevelList& PreviousSpawnedLevels);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LoadLevelList(const TArray<TSoftObjectPtr<UWorld>>& LevelList, const FTransform& SpawnTransform, bool bSpawnRelative);
    
    UFUNCTION(BlueprintCallable)
    void LevelFinishedLoading();
    
};

