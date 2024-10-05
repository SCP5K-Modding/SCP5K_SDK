#pragma once
#include "CoreMinimal.h"
#include "OnlineSessionClient.h"
#include "PandemicOnlineSessionClient.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicOnlineSessionClient : public UOnlineSessionClient {
    GENERATED_BODY()
public:
    UPandemicOnlineSessionClient();

};

