#include "ReadAsyncPartialProxy.h"

UReadAsyncPartialProxy::UReadAsyncPartialProxy() {
}

UReadAsyncPartialProxy* UReadAsyncPartialProxy::ReadAsyncPartial(UDiscordStorageManager* StorageManager, const FString& Name, const FUint64& Offset, const FUint64& Length) {
    return NULL;
}

void UReadAsyncPartialProxy::OnResult(EDiscordResult Result, TArray<uint8>& Data) {
}


