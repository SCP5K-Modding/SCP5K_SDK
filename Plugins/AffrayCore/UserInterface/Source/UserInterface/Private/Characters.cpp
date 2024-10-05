#include "Characters.h"

FCharacters::FCharacters() {
    this->ClearanceLevel = ECharacterClearanceLevel::None;
    this->Classification = ECharacterClassification::None;
    this->Age = 0;
    this->Sex = ECharacterSex::None;
    this->Height = 0.00f;
}

