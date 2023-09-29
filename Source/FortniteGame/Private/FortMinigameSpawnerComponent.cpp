#include "FortMinigameSpawnerComponent.h"
#include "Net/UnrealNetwork.h"

void UFortMinigameSpawnerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMinigameSpawnerComponent, ToSpawnList);
}

UFortMinigameSpawnerComponent::UFortMinigameSpawnerComponent() {
}

