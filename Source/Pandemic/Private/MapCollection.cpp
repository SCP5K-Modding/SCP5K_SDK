#include "MapCollection.h"

UMapCollection::UMapCollection() {
    this->MapCollectionType = EMapCollectionType::Linear;
}

FSelectedMap UMapCollection::GetSelectedMapFromIndividualMapData(const FIndividualMapData& IndividualMapData) {
    return FSelectedMap{};
}


