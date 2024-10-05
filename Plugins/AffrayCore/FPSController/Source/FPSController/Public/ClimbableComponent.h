#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ClimbableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FPSCONTROLLER_API UClimbableComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RungDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneSided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbDistance;
    
    UClimbableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRungDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeight() const;
    
};

