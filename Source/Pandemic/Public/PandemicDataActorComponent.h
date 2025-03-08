#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PandemicDataActorComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UPandemicDataActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PCInputKeys;
    
    UPandemicDataActorComponent(const FObjectInitializer& ObjectInitializer);

};

