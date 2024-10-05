#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PandemicPreGameManager.generated.h"

class APandemicPlayerState;
class APawn;
class UCameraComponent;

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

