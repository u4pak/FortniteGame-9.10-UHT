#include "FortMutatorListComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UFortMutatorListComponent::UnregisterMinigameMutators() {
}

void UFortMutatorListComponent::SetPropertyOverrides(const TMap<FString, FString>& Properties) {
}

void UFortMutatorListComponent::SetMutatorsActive(bool bActive) {
}

void UFortMutatorListComponent::RegisterMinigameMutators() {
}

void UFortMutatorListComponent::OnRep_PropertyOverrideArray() {
}

void UFortMutatorListComponent::OnClientExitVolume(APlayerState* InPlayerState, AFortVolume* InVolume) {
}

void UFortMutatorListComponent::OnClientEnterVolume(APlayerState* InPlayerState, AFortVolume* InVolume) {
}

AFortGameplayMutator* UFortMutatorListComponent::GetMutatorByClass(TSubclassOf<AFortGameplayMutator> MutatorClass) const {
    return NULL;
}

void UFortMutatorListComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMutatorListComponent, PropertyOverrideArray);
}

UFortMutatorListComponent::UFortMutatorListComponent() {
    this->bShouldMakeMutatorsDormant = false;
    this->InitState = EMutatorListInitState::Default;
    this->UserOptions = NULL;
}

