#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttachmentMeshSetup.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FAttachmentMeshSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SocketRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* AttachMesh;
    
    FPSCONTROLLER_API FAttachmentMeshSetup();
};

