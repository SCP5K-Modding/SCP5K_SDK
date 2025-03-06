#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PandemicPreGameManager.generated.h"

class APandemicPlayerState;
class APawn;
class UCameraComponent;
class UChildActorComponent;

UCLASS(Blueprintable)
class PANDEMIC_API APandemicPreGameManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APandemicPlayerState*, APawn*> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> CharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* MoveableCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChestPatchCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* LeftShoulderPatchCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* RightShoulderPatchCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* HelmetPatchCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* BackPatchCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrimaryPlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraRigOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CharacterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> OtherPlayerLocations;
    
    APandemicPreGameManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnCharacterForPlayer(APandemicPlayerState* Player, bool bForceRespawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupCharacterForPlayer(AActor* Character, APandemicPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemovePlayer(APandemicPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveAllPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform PickTransformForPlayer(APandemicPlayerState* Player, int32& Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftClassPtr<APawn> PickClassForPlayer(APandemicPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterClassLoaded(TSoftClassPtr<APawn> SoftClass, APandemicPlayerState* PlayerState, bool bForceRespawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetCharacterForPlayer(APandemicPlayerState* Player) const;
    
};

