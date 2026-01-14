#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "TeleporterActivatedDelegateDelegate.h"
#include "Teleporter.generated.h"

class APawn;
class APlayerState;
class ATeleporter;
class UBoxComponent;
class UFMODEvent;
class UGameAction;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ATeleporter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PawnsToTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PreviousTeleportedPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* DefaultTeleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateTeleportedPawnsFromOverlaps;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleporterActivatedDelegate OnFinishTeleport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleporterActivatedDelegate OnBeginTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* BeginTeleportGameAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* FinishTeleportGameAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* BeginReceiveTeleportGameAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* FinishReceiveTeleportGameAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeCameraDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BeginTeleportForPawnEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TeleportRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TeleportComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TeleportBox;
    
public:
    ATeleporter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPawnsToTeleport(const TArray<APawn*>& InPawnsToTeleport);
    
    UFUNCTION(BlueprintCallable)
    void ServerFinishTeleport(ATeleporter* Teleport, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerFinishReceiveTeleportPerPawn(ATeleporter* SourceTeleporter, APawn* Pawn, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerFinishReceiveTeleport(ATeleporter* SourceTeleporter, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBeginTeleport(ATeleporter* Teleport, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerBeginReceiveTeleportPerPawn(ATeleporter* SourceTeleporter, APawn* Pawn, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerBeginReceiveTeleport(ATeleporter* SourceTeleporter, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ATeleporter* PickTeleporterForPawn(APawn* Pawn, int32 Index, ATeleporter* Default);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFinishTeleport(ATeleporter* Teleport, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastBeginTeleport(ATeleporter* Teleport, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetRecieveTeleportMovementBase(ATeleporter* SourceTeleporter, APawn* Pawn, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetReceiveTeleportTransform(ATeleporter* SourceTeleporter, APawn* Pawn, int32 Index, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticFinishTeleport(ATeleporter* Teleport, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticBeginTeleport(ATeleporter* Teleport, bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable)
    void BeginTeleport(bool bRelativeToRoot);
    
    UFUNCTION(BlueprintCallable)
    void AddPawnsToTeleportFromPlayerStates(const TArray<APlayerState*> Players);
    
};

