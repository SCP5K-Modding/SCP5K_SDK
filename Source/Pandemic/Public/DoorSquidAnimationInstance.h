#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "DoorSquidMeleeHitDataMCDelegateDelegate.h"
#include "DoorSquidAnimationInstance.generated.h"

class AActor;
class ADoorSquid;
class UActorComponent;
class UAnimMontage;
class UCurveFloat;
class UPoseAsset;

UCLASS(Blueprintable, NonTransient)
class PANDEMIC_API UDoorSquidAnimationInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJittering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJitterOnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttacking;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoorSquidMeleeHitDataMCDelegate DoorSquidAttackRequestedMCDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoorSquid* DoorSquidPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidAttackShortMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidAttackLongStartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidAttackLongEndFailMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidAttackLongEndSuccessMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidAttackShortFailMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidAttackShortSuccessMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidIdleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidSuppressionJitterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidEatingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidDetectionZoneJitterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SquidCurrentJitterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> SquidJitterMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImmediateJitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AnticipationPoseBlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TongueEndYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnticipationPoseAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnticipationPoseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostKillExposedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedJitterAnimation, meta=(AllowPrivateAccess=true))
    int32 SelectedJitterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AnticipationPoseDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TongueBaseTargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TongueMidPointTargetSocket;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TongueBasePointTX;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TongueMidPointTX;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TongueEndPointTX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> TongueControlPoints;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TongueBasePointTPoseToOriginInverseVector;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TongueMidPointTPoseToOriginInverseVector;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TongueEndPointTPoseToOriginInverseVector;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TongueEndBoneLengthCompensation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TongueIsDirectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TongueDirectableBlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TongueDirectabilityCurveName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* TongueTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SquidSkelMeshOffset;
    
public:
    UDoorSquidAnimationInstance();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopJitterAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopAttackAnimationAwaitStopMontages();
    
    UFUNCTION(BlueprintCallable)
    void StopAttackAnimationAwaitPosKillDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAttackAnimation(const bool bLongRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartJitterAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEatingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAttackRecallAnimation(const bool bWasLongRange);
    
    UFUNCTION(BlueprintCallable)
    void StartAttackAnimationDEBUG();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAttackAnimation(AActor* TargetActor, bool bIsLongRange);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomJitterAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetJitterAnimation(const int32 JitterAnimIdx);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAttackFailed(const bool bInAttackFailed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDetectionZoneJitterAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_SelectedJitterAnimation();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTransformTongueEndPointTarget(const UActorComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformLocationToCompensatedSocket(const FName BoneName) const;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetSelectedJitterMontageSequenceLengthSeconds(const bool bIsImmediateJitter);
    
protected:
    UFUNCTION(BlueprintCallable)
    static float GetSectionLengthByName(UAnimMontage* Montage, FName SectionName);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBoneComponentTransformFromRefPose(const UPoseAsset* PoseAsset, const FName BoneName) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceJitterAnimationNowUnsuppressedDEBUG();
    
    UFUNCTION(BlueprintCallable)
    void ForceJitterAnimationNowSuppressedDEBUG();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceJitterAnimationNow(const bool bIsSuppressed);
    
};

