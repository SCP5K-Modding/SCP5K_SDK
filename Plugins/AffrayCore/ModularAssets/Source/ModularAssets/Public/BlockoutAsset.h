#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BlockoutAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class MODULARASSETS_API ABlockoutAsset : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
public:
    ABlockoutAsset(const FObjectInitializer& ObjectInitializer);

};

