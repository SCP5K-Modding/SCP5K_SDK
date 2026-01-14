#pragma once
#include "CoreMinimal.h"
#include "GenericGameEvent.h"
#include "GameEventUserComment.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class GAMEEVENTBUS_API UGameEventUserComment : public UGenericGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UGameEventUserComment();

};

