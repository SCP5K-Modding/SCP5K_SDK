#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelStreamingInfo.h"
#include "LevelStreamingInfoVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class LEVELSTREAMING_API ALevelStreamingInfoVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelStreamingInfo> StreamingInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
public:
    ALevelStreamingInfoVolume(const FObjectInitializer& ObjectInitializer);

};

