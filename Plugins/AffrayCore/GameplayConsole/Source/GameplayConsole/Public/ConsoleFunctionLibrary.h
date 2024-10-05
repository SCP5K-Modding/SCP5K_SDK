#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConsoleArgument.h"
#include "ConsoleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYCONSOLE_API UConsoleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConsoleFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetArgumentString(FConsoleArgument Argument, FString& StringValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetArgumentName(FConsoleArgument Argument, FName& NameValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetArgumentInt(FConsoleArgument Argument, int32& IntValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetArgumentFloat(FConsoleArgument Argument, float& FloatValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetArgumentBool(FConsoleArgument Argument);
    
};

