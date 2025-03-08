#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DocumentData.h"
#include "Document.generated.h"

USTRUCT(BlueprintType)
struct USERINTERFACE_API FDocument : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDocumentData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FDocument();
};

