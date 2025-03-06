#pragma once
#include "CoreMinimal.h"
#include "DocumentImageData.generated.h"

USTRUCT(BlueprintType)
struct FDocumentImageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Contents;
    
    GAMEUTILITIES_API FDocumentImageData();
};

