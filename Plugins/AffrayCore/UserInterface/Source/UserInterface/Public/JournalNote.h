#pragma once
#include "CoreMinimal.h"
#include "JournalEntry.h"
#include "JournalNote.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class USERINTERFACE_API UJournalNote : public UJournalEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Authors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Recipients;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoteText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NoteImage;
    
    UJournalNote();

};

