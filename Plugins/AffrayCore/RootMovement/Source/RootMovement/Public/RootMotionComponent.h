#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RootMotionComponent.generated.h"

class UAnimMontage;
class UAnimSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROOTMOVEMENT_API URootMotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsMoving, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeginningMove;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MoveTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTransform MoveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTransform MoveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform FinalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSweep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RootBoneRelativeTransform;
    
    URootMotionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool StartRootMoveAtTransform(UAnimMontage* Montage, FTransform StartTransform, FTransform Transform, float BlendTime, bool bShouldSweep);
    
    UFUNCTION(BlueprintCallable)
    bool StartRootMove(UAnimMontage* Montage, FTransform Transform, bool bShouldSweep);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMoving();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRootMovement(FTransform& Transform, float& Alpha, float& Norm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetDesiredStartLocation(UAnimSequence* Sequence, FTransform RelativeTransform, FVector RootOffset, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetDesiredFinalLocation(UAnimSequence* Sequence, FTransform RelativeTransform, FVector RootOffset, FTransform Transform);
    
};

