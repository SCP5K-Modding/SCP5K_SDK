#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "JournalSaveGame.generated.h"

UCLASS(Blueprintable)
class GAMEUTILITIES_API UJournalSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> MasterJournalList;
    
    UJournalSaveGame();

};

