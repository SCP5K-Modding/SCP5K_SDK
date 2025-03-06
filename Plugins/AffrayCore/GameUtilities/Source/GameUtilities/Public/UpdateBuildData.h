#pragma once
#include "CoreMinimal.h"
#include "UpdateNotes.h"
#include "UpdateBuildData.generated.h"

USTRUCT(BlueprintType)
struct FUpdateBuildData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UpdateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUpdateNotes> UpdateNotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AddedKeyMappings;
    
    GAMEUTILITIES_API FUpdateBuildData();
};

