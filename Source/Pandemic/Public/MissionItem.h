#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMissionItemType.h"
#include "EMissionItemUsageType.h"
#include "MissionItem.generated.h"

class UTexture;

UCLASS(Blueprintable)
class PANDEMIC_API UMissionItem : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Icon;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionItemUsageType Usage;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UMissionItem();

};

