#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableText -FallbackName=EditableText
#include "PandemicEditableText.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicEditableText : public UEditableText {
    GENERATED_BODY()
public:
    UPandemicEditableText();

    UFUNCTION(BlueprintCallable)
    void SetInputPosition(int32 LineIndex, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 Size);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(FSlateFontInfo NewFont);
    
};

