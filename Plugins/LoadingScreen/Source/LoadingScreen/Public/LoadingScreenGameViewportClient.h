#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "LoadingScreenGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class LOADINGSCREEN_API ULoadingScreenGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    ULoadingScreenGameViewportClient();

};

