#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ConstantLerpDriver.h"
#include "FPSAnimationInstance.h"
#include "RangedWeaponAnimInstance.generated.h"

class AFPSCharacterBase;
class AFPSRangedWeapon;
class UAnimMontage;
class UAnimSequence;
class UFPSItemData;
class UFPSRangedWeaponData;
class UFPSWeaponData;

UCLASS(Blueprintable, NonTransient)
class FPSCONTROLLER_API URangedWeaponAnimInstance : public UAnimInstance, public IFPSAnimationInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFPSCharacterBase* FPSCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSItemData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSWeaponData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSRangedWeaponData* RangedWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFPSRangedWeapon* RangedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentBulletsInChamber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> BulletBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> CasingBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BulletBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpeedLoaderBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName FollowerBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CasingBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MagazineBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SecondMagazineBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReverseBulletOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseCasings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAnimateSafety;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReloadSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SafetyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BasePoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* EmptyBasePoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SightFoldedBasePoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* MovementAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ActionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FiringMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EmptyReloadingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstantLerpDriver SafetyLerpDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SafetyRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothSafetyRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> SafetyRotations;
    
    URangedWeaponAnimInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateRoundsInMag(int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCasings(int32 BulletsInChamber, int32 AvailableAmmo);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBullets(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SpawnMagazine();
    
    UFUNCTION(BlueprintCallable)
    void ShowSpeedLoader();
    
    UFUNCTION(BlueprintCallable)
    void ShowSecondMag();
    
    UFUNCTION(BlueprintCallable)
    void SetHasSight(bool bNewHasSight);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCasings();
    
    UFUNCTION(BlueprintCallable)
    void HideSpeedLoader();
    
    UFUNCTION(BlueprintCallable)
    void HideSecondMag();
    
    UFUNCTION(BlueprintCallable)
    void GetBonesWithPrefix(FName BonePrefix, TArray<FName>& OutBoneNames, bool bReverseOrder);
    
    UFUNCTION(BlueprintCallable)
    void EjectCasing();
    

    // Fix for true pure virtual functions not being implemented
};

