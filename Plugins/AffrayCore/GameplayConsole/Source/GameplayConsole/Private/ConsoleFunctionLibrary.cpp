#include "ConsoleFunctionLibrary.h"

UConsoleFunctionLibrary::UConsoleFunctionLibrary() {
}

bool UConsoleFunctionLibrary::GetArgumentString(FConsoleArgument Argument, FString& StringValue) {
    return false;
}

bool UConsoleFunctionLibrary::GetArgumentName(FConsoleArgument Argument, FName& NameValue) {
    return false;
}

bool UConsoleFunctionLibrary::GetArgumentInt(FConsoleArgument Argument, int32& IntValue) {
    return false;
}

bool UConsoleFunctionLibrary::GetArgumentFloat(FConsoleArgument Argument, float& FloatValue) {
    return false;
}

bool UConsoleFunctionLibrary::GetArgumentBool(FConsoleArgument Argument) {
    return false;
}


