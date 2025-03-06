#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
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

