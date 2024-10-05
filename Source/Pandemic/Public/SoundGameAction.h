#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameAction.h"
#include "SoundGameAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API USoundGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocation;
    
    USoundGameAction();

};

