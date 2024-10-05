#pragma once
#include "CoreMinimal.h"
#include "EJournalCategory.h"
#include "JournalEntryGeneral.generated.h"

USTRUCT(BlueprintType)
struct FJournalEntryGeneral {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJournalCategory Category;
    
    USERINTERFACE_API FJournalEntryGeneral();
};

