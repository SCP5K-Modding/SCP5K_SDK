#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SAICoverPoint.generated.h"

class APawn;
class UBoxComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAICoverPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHighCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* PawnUsingCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CoverDetection;
    
public:
    ASAICoverPoint(const FObjectInitializer& ObjectInitializer);

};

