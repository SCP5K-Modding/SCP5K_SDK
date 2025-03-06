#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "TheatreScreenPossessedDelegateDelegate.h"
#include "TheatreScreenComponent.generated.h"

class AActor;
class ATheatreAnomaly;
class ITheatreScreen;
class UTheatreScreen;
class UTheatreScreenComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UTheatreScreenComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPossessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ITheatreScreen>> Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ITheatreScreen>> ManualConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATheatreAnomaly* TheatreAnomalyPawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOmnidirectional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRadius;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheatreScreenPossessedDelegate OnPosessedByAnomaly;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheatreScreenPossessedDelegate OnUnposessedByAnomaly;
    
    UTheatreScreenComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnposessedByAnomaly(ATheatreAnomaly* TheatreAnomaly);
    
    UFUNCTION(BlueprintCallable)
    void RemoveConnection(TScriptInterface<ITheatreScreen> Other);
    
    UFUNCTION(BlueprintCallable)
    void PosessedByAnomaly(ATheatreAnomaly* TheatreAnomaly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSameLevel(UTheatreScreenComponent* Other) const;
    
    UFUNCTION(BlueprintCallable)
    void HeardSound(FVector SoundLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScreenSize() const;
    
    UFUNCTION(BlueprintCallable)
    static UTheatreScreenComponent* GetScreenFromInterface(TScriptInterface<ITheatreScreen> Interface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOmnidirectional() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeScreen(TScriptInterface<ITheatreScreen> Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeLocation(FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSee(AActor* Other) const;
    
    UFUNCTION(BlueprintCallable)
    void AlertAnomaly(AActor* EventInstigator, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void AddConnection(TScriptInterface<ITheatreScreen> Other);
    
};

