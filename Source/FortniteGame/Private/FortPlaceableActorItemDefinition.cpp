#include "FortPlaceableActorItemDefinition.h"

FName UFortPlaceableActorItemDefinition::GetActorName() const {
    return NAME_None;
}

UFortPlaceableActorItemDefinition* UFortPlaceableActorItemDefinition::CreatePlaceableActorItemDefinitionFromActor(FBuildingDuplicationData DuplicationData, FSlateBrush ImageToDisplay) {
    return NULL;
}

UFortPlaceableActorItemDefinition::UFortPlaceableActorItemDefinition() {
    this->BasePlaceableActorClass = NULL;
}

