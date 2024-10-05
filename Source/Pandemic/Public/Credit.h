#pragma once
#include "CoreMinimal.h"
#include "ECreditCategory.h"
#include "ECreditCompany.h"
#include "ECreditPriority.h"
#include "Credit.generated.h"

USTRUCT(BlueprintType)
struct FCredit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditCompany Company;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFormer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowNameParent;
    
    PANDEMIC_API FCredit();
};

