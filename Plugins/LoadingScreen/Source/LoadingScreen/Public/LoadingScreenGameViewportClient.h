#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "LoadingScreenGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class LOADINGSCREEN_API ULoadingScreenGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    ULoadingScreenGameViewportClient();

};

