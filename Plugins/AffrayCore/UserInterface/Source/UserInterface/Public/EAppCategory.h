#pragma once
#include "CoreMinimal.h"
#include "EAppCategory.generated.h"

UENUM(BlueprintType)
enum class EAppCategory : uint8 {
    AC_Folder,
    AC_Document,
    AC_Images,
    AC_Videos,
    AC_Audio,
    AC_Email,
    AC_Journal,
};

