#pragma once
#include "CoreMinimal.h"
#include "ScreenPathSettings.h"
#include "ScreenPath.generated.h"

class UTheatreScreenComponent;

USTRUCT(BlueprintType)
struct FScreenPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScreenPathSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTheatreScreenComponent*> Path;
    
    PANDEMIC_API FScreenPath();
};

