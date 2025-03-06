#pragma once
#include "CoreMinimal.h"
#include "UpdateNotes.generated.h"

USTRUCT(BlueprintType)
struct FUpdateNotes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PatchNotes;
    
    GAMEUTILITIES_API FUpdateNotes();
};

