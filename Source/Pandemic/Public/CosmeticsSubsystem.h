#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnPlayerCosmeticsLoadedDelegateDelegate.h"
#include "CosmeticsSubsystem.generated.h"

class APandemicPlayerState;

UCLASS(Blueprintable)
class PANDEMIC_API UCosmeticsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCosmeticsLoadedDelegate OnPlayerPatchesLoaded;
    
    UCosmeticsSubsystem();

    UFUNCTION(BlueprintCallable)
    static TArray<FPrimaryAssetId> GetValidPatches(APandemicPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPrimaryAssetId> GetValidCharacterSkins(APandemicPlayerState* PlayerState);
    
};

