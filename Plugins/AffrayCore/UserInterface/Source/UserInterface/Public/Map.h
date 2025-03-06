#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Map.generated.h"

class UMapComponent;

UCLASS(Blueprintable)
class USERINTERFACE_API AMap : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, Category=Map))
    UMapComponent* MapComponent;
    
public:
    AMap(const FObjectInitializer& ObjectInitializer);

};

