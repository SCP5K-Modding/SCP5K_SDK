#pragma once
#include "CoreMinimal.h"
#include "CosmeticData.h"
#include "CosmeticItemSkinData.generated.h"

class UMaterialInterface;
class USkeletalMesh;

UCLASS(Blueprintable)
class PANDEMIC_API UCosmeticItemSkinData : public UCosmeticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> MeshOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMaterialInterface>, TSoftObjectPtr<UMaterialInterface>> MaterialReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowWearSlider;
    
    UCosmeticItemSkinData();

};

