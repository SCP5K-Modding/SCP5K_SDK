#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BackerList.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBackerList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Lists;
    
    UBackerList();

};

