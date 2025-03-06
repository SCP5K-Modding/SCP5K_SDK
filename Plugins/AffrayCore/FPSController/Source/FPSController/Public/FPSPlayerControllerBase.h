#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "FPSCosmetic.h"
#include "OnPawnPossessionDelegate.h"
#include "FPSPlayerControllerBase.generated.h"

class AFPSCharacterBase;
class ASpectatorPawn;

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSPlayerControllerBase : public APlayerController, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleLean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleLowReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleBracedAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertHorizontalLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertVerticalLook;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFPSCharacterBase* FPSCharacterBase;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnPossession OnPawnPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnPossession OnPawnUnpossessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AITeam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LastActionTimestamp;
    
    AFPSPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCameraTarget();
    
    UFUNCTION(BlueprintCallable)
    ASpectatorPawn* Spectate();
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(uint8 NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetLookY(float InLookY);
    
    UFUNCTION(BlueprintCallable)
    void SetLookX(float InLookX);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetLookY(uint8 InLookY);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetLookX(uint8 InLookX);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveReturnToMainMenu(const FText& ReturnReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostSeamlessTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveClientWasKicked(const FText& KickReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerStateUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUseCosmetic(int32 Index, FFPSCosmetic Cosmetic);
    

    // Fix for true pure virtual functions not being implemented
};

