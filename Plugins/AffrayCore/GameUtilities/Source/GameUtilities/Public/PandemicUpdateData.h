#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UpdateBuildData.h"
#include "PandemicUpdateData.generated.h"

UCLASS(Blueprintable)
class GAMEUTILITIES_API UPandemicUpdateData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FUpdateBuildData> UpdateData;
    
    UPandemicUpdateData();

};

