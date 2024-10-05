#pragma once
#include "CoreMinimal.h"
#include "ComputerAccount.h"
#include "WindowData.generated.h"

USTRUCT(BlueprintType)
struct USERINTERFACE_API FWindowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComputerAccount Account;
    
    FWindowData();
};

