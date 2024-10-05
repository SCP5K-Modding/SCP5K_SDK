#pragma once
#include "CoreMinimal.h"
#include "FPSAttachmentReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct FFPSAttachmentReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    FPSCONTROLLER_API FFPSAttachmentReplicatedData();
};

