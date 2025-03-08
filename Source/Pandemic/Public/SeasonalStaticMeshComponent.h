#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagContainer.h"
#include "SeasonalStaticMeshComponent.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API USeasonalStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyWhenNotInEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UStaticMesh>> EventOverrides;
    
    USeasonalStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AssetOverrideLoaded(const TSoftObjectPtr<UStaticMesh> Asset);
    
};

