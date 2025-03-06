#include "WeatherExclusionVolume.h"
#include "WeatherExclusionComponent.h"

AWeatherExclusionVolume::AWeatherExclusionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WXExclusionComponent = CreateDefaultSubobject<UWeatherExclusionComponent>(TEXT("WXExclusionComponent"));
    this->WeatherExclusionArea = NULL;
}

void AWeatherExclusionVolume::OnBrushEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWeatherExclusionVolume::OnBrushBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FVector AWeatherExclusionVolume::GetScaledBoxExtent() const {
    return FVector{};
}


