#pragma once
#include "CoreMinimal.h"
#include "AttachMeshHierachy.generated.h"

class AFPSAttachment;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FAttachMeshHierachy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FirstPersonMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ThirdPersonMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AFPSAttachment*> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FPSCONTROLLER_API FAttachMeshHierachy();
};

