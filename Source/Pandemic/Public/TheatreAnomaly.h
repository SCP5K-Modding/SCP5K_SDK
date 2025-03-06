#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "Templates/SubclassOf.h"
#include "TheatreAnomalyTarget.h"
#include "TheatreAnomaly.generated.h"

class AActor;
class UDamageType;
class UFMODEvent;
class UMediaPlayer;
class UMediaPlaylist;
class UMediaSource;
class UTheatreScreenComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ATheatreAnomaly : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTheatreScreenComponent* CurrentScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTheatreScreenComponent* MovingToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* MediaPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* AttackingMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentAngerLevel, meta=(AllowPrivateAccess=true))
    int32 CurrentAngerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentScreen, meta=(AllowPrivateAccess=true))
    AActor* CurrentScreenActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovingToScreen, meta=(AllowPrivateAccess=true))
    AActor* MovingToScreenActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillDetectionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* StartingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FTheatreAnomalyTarget> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AlertSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ScreamSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* KillSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* JumpSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDead, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAlert, meta=(AllowPrivateAccess=true))
    bool bIsAlert;
    
public:
    ATheatreAnomaly(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartScreenEffects(UTheatreScreenComponent* From, UTheatreScreenComponent* To);
    
    UFUNCTION(BlueprintCallable)
    bool StartMoveToScreen(UTheatreScreenComponent* Screen);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAngerLevel(int32 NewAngerLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveMulticastKillTarget(AActor* Target);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MovingToScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDead();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAlert();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAngerLevel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRemoveTarget(FTheatreAnomalyTarget Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAddTarget(FTheatreAnomalyTarget Target);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, NetMulticast, Unreliable)
    void MulticastKillTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToScreen(UTheatreScreenComponent* Screen);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void KillTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAlert() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishMoveToScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndScreenEffects(UTheatreScreenComponent* From, UTheatreScreenComponent* To);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void Die(AActor* InstigatingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void Alert(AActor* InstigatingActor);
    
};

