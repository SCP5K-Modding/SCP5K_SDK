#include "RCONSubsystem.h"

URCONSubsystem::URCONSubsystem() {
    this->Port = 27015;
}

void URCONSubsystem::OnConsoleMessageSent(const FString& Text, EMessageType MessageType, const FString& Tooltip) {
}


