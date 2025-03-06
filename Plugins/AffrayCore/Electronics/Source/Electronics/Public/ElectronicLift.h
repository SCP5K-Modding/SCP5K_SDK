#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Electronic.h"
#include "LiftFloor.h"
#include "LiftState.h"
#include "ElectronicLift.generated.h"

class AActor;
class UFMODAudioComponent;
class UFMODEvent;
class USceneComponent;

UCLASS(Blueprintable)
class ELECTRONICS_API AElectronicLift : public AElectronic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReplicatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFloors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform FinalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiftFloor> Floors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousFloor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetFloor, meta=(AllowPrivateAccess=true))
    int32 TargetFloor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClosestFloor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ReplicatedPreviousFloor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLiftState ReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseElevatorDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElevatorDoorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDoorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bDoorOpen, meta=(AllowPrivateAccess=true))
    bool bDoorOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxReplicatedTimeDifference;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LiftComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConstantMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LiftStoppedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LiftMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* MusicComponent;
    
    AElectronicLift(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StartMoving(float CurrentTime, int32 Floor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetFloor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bDoorOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LiftUpdatedPosition(float CurrentTime, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LiftStartedMoving(float CurrentTime, int32 Floor, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LiftReachedStart(FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LiftReachedFloor(int32 Floor, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LiftReachedEnd(FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LiftPassedFloor(int32 Floor, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LiftDoorUpdatedValue(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LiftClosestFloorUpdated(int32 Floor, FTransform Transform);
    
public:
    UFUNCTION(BlueprintCallable)
    void GoToFloor(int32 Floor, AActor* Caller);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetDesiredTransform(float InTime) const;
    
};

