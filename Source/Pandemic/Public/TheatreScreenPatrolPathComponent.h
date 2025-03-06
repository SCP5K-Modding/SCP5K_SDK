#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TheatreScreenPatrolPathComponent.generated.h"

class ITheatreScreen;
class UTheatreScreen;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UTheatreScreenPatrolPathComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ITheatreScreen>> Screens;
    
    UTheatreScreenPatrolPathComponent(const FObjectInitializer& ObjectInitializer);

};

