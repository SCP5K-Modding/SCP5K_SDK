#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttachmentMeshSetup.h"
#include "EAttachmentSlotType.h"
#include "AttachmentSlotData.generated.h"

class AFPSAttachment;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FAttachmentSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentSlotType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AFPSAttachment>> AvailableAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SocketRotationOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttachMeshPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachmentMeshSetup> AttachMeshes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestAlternateGripPose;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideAlternateGripPose;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> OverrideAlternateGripPose;
    
    FPSCONTROLLER_API FAttachmentSlotData();
};

