#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "Storylet.h"
#include "StoryletDefinitionActor.generated.h"

UCLASS(Blueprintable)
class STORYLETS_API AStoryletDefinitionActor : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStorylet> ActiveDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStorylet> InactiveDefinitions;
    
    AStoryletDefinitionActor(const FObjectInitializer& ObjectInitializer);

};

