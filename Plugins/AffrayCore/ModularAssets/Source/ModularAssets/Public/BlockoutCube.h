#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlockoutAsset.h"
#include "BlockoutCube.generated.h"

class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MODULARASSETS_API ABlockoutCube : public ABlockoutAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
public:
    ABlockoutCube(const FObjectInitializer& ObjectInitializer);

};

