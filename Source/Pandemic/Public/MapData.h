#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "MapData.generated.h"

class APandemicGameModeBase;
class UTexture;
class UWorld;

UCLASS(Blueprintable)
class UMapData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInCustomMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MapTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Banner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Image;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APandemicGameModeBase>> SupportedGameModes;
    
    UMapData();

};

