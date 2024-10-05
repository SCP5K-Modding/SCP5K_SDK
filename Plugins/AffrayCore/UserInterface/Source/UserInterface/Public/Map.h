#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Map.generated.h"

class UMapComponent;

UCLASS(Blueprintable)
class USERINTERFACE_API AMap : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="MapComponent", meta = (AllowPrivateAccess = true))
    UMapComponent* MapComponent;
    
public:
    AMap(const FObjectInitializer& ObjectInitializer);

};

