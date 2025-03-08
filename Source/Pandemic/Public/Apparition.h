#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Apparition.generated.h"

class ITheatreScreen;
class UTheatreScreen;
class UTheatreScreenComponent;

UCLASS(Blueprintable)
class PANDEMIC_API AApparition : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ITheatreScreen> InitialConnectedScreen;
    
    AApparition(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetConnectedScreen(UTheatreScreenComponent* NewConnectedScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTheatreScreenComponent* GetConnectedScreen() const;
    
};

