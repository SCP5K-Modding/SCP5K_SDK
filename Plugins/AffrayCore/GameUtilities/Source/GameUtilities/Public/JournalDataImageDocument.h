#pragma once
#include "CoreMinimal.h"
#include "JournalDataEntry.h"
#include "JournalDataImageDocument.generated.h"

class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEUTILITIES_API UJournalDataImageDocument : public UJournalDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> OverridingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> Images;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Texts;
    
    UJournalDataImageDocument();

};

