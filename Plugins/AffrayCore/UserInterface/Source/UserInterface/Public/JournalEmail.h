#pragma once
#include "CoreMinimal.h"
#include "EJournalEmailImportance.h"
#include "JournalEntry.h"
#include "JournalEmail.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class USERINTERFACE_API UJournalEmail : public UJournalEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Authors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Recipients;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJournalEmailImportance Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EmailContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> EmailImage;
    
    UJournalEmail();

};

