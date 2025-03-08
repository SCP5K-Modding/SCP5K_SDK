#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SAICoverDebugActor.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API ASAICoverDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawGeneratedCover;
    
    ASAICoverDebugActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateCoverDrawing() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateCoverPointsWithDebugDraw();
    
    UFUNCTION(BlueprintCallable)
    void GenerateCoverPointsInDebugArea();
    
    UFUNCTION(BlueprintCallable)
    void GenerateCoverPointsForMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearAllCover() const;
    
};

