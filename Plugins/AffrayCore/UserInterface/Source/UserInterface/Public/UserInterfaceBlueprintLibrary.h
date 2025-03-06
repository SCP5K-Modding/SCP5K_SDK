#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UserInterfaceBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class USERINTERFACE_API UUserInterfaceBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUserInterfaceBlueprintLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void SetFavoriteMaps(const TArray<FString> FavoriteMaps);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFavoriteMap(const FString& Map);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetFavoriteMaps();
    
    UFUNCTION(BlueprintCallable)
    static void AddFavoriteMap(const FString& Map);
    
};

