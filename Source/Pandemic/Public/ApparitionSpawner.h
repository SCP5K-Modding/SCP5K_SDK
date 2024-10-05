#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "ApparitionSpawner.generated.h"

class AApparition;
class ITheatreScreen;
class UTheatreScreen;
class UBoxComponent;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class PANDEMIC_API AApparitionSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ITheatreScreen> TargetScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AApparition> SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> SpawnQueryFilter;
    
public:
    AApparitionSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Spawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetSpawnRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpawnLocation();
    
};

