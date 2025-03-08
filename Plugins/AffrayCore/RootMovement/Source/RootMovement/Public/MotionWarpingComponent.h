#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnRootMoveBlendingFinishedDelegate.h"
#include "OnRootMoveFinishedDelegate.h"
#include "MotionWarpingComponent.generated.h"

class UAnimMontage;
class UAnimSequence;
class UCharacterMovementComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROOTMOVEMENT_API UMotionWarpingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeginningMove;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MoveTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MoveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MoveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform FinalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopDefaultGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSweep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RootBoneRelativeTransform;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRootMoveFinished OnRootMoveFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRootMoveBlendingFinished OnRootMoveBlendingFinished;
    
    UMotionWarpingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartRootMoveAtTransform(UAnimMontage* Montage, FTransform StartTransform, FTransform Transform, float InBlendTime, bool bShouldSweep);
    
    UFUNCTION(BlueprintCallable)
    bool StartRootMove(UAnimMontage* Montage, FTransform Transform, bool bShouldSweep);
    
    UFUNCTION(BlueprintCallable)
    void SetReferenceLocation(FName Name, const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMoving();
    
public:
    UFUNCTION(BlueprintCallable)
    FTransform OnProcessRootMotionPreWorld(const FTransform& Transform, UCharacterMovementComponent* MovementComponent, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    FTransform OnProcessRootMotionPostWorld(const FTransform& Transform, UCharacterMovementComponent* MovementComponent, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void MontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRootMovement(FTransform& Transform, float& Alpha, float& Norm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetDesiredStartLocation(UAnimSequence* Sequence, USkeletalMeshComponent* Component, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetDesiredFinalLocation(UAnimSequence* Sequence, USkeletalMeshComponent* Component, FTransform Transform);
    
};

