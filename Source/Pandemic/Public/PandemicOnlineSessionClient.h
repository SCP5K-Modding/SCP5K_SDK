#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineSessionClient -FallbackName=OnlineSessionClient
#include "PandemicOnlineSessionClient.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicOnlineSessionClient : public UOnlineSessionClient {
    GENERATED_BODY()
public:
    UPandemicOnlineSessionClient();

};

