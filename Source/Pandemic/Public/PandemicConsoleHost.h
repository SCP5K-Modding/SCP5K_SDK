#pragma once
#include "CoreMinimal.h"
#include "ConsoleHost.h" 
#include "PandemicConsoleHost.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API APandemicConsoleHost : public AConsoleHost {
    GENERATED_BODY()
public:
    APandemicConsoleHost(const FObjectInitializer& ObjectInitializer);

};

