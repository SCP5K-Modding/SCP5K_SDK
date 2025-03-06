#pragma once
#include "CoreMinimal.h"
#include "SignificanceComponent.h"
#include "CharacterSignificanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIGNIFICANCEBASE_API UCharacterSignificanceComponent : public USignificanceComponent {
    GENERATED_BODY()
public:
    UCharacterSignificanceComponent(const FObjectInitializer& ObjectInitializer);

};

