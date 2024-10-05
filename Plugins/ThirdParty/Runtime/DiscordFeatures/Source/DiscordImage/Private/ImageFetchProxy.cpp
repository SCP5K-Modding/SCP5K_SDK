#include "ImageFetchProxy.h"

UImageFetchProxy::UImageFetchProxy() {
    this->Manager = NULL;
}

void UImageFetchProxy::OnResultInternal(const EDiscordResult Result, const FDiscordImageHandle& ImageHandle) {
}

UImageFetchProxy* UImageFetchProxy::Fetch(UDiscordImageManager* ImageManager, FDiscordImageHandle Handle, const bool bRefresh) {
    return NULL;
}


