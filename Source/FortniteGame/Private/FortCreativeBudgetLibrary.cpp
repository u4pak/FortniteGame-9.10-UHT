#include "FortCreativeBudgetLibrary.h"
#include "Templates/SubclassOf.h"

bool UFortCreativeBudgetLibrary::CanPlacePlayset(UFortPlaysetItemDefinition* ItemDefinition, APlayerController* Controller) {
    return false;
}

bool UFortCreativeBudgetLibrary::CanPlaceInstanceOfClass(APlayerController* Controller, TSubclassOf<AActor> Class, const FVector& Location) {
    return false;
}

bool UFortCreativeBudgetLibrary::CanPlaceClassInstances(APlayerController* Controller, const TArray<TSubclassOf<AActor>> Classes, const FVector& Location) {
    return false;
}

UFortCreativeBudgetLibrary::UFortCreativeBudgetLibrary() {
}

