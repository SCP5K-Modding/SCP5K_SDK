#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SignificanceUser.generated.h"

class USignificanceComponent;

UINTERFACE()
class SIGNIFICANCEBASE_API USignificanceUser : public UInterface {
    GENERATED_BODY()
};

class SIGNIFICANCEBASE_API ISignificanceUser : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void ApplySignificance(USignificanceComponent* Component, float NewSignificance, float OldSignificance) PURE_VIRTUAL(ApplySignificance,);
    
};

