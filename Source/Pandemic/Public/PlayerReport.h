#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerID.h"
#include "PlayerReport.generated.h"

USTRUCT(BlueprintType)
struct FPlayerReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerID SenderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerID SubjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ReportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Timestamp;
    
    PANDEMIC_API FPlayerReport();
};

