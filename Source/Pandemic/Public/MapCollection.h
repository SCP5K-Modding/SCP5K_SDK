#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EMapCollectionType.h"
#include "IndividualMapData.h"
#include "SelectedMap.h"
#include "MapCollection.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UMapCollection : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapCollectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MapCollectionDisplayName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapCollectionType MapCollectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIndividualMapData> Maps;
    
    UMapCollection();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSelectedMap GetSelectedMapFromIndividualMapData(const FIndividualMapData& IndividualMapData);
    
};

