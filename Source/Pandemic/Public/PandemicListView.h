#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "PandemicListView.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicListView : public UListView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ScrollBarVisibility;
    
    UPandemicListView();

};

