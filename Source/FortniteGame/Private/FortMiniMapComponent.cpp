#include "FortMiniMapComponent.h"
#include "Net/UnrealNetwork.h"

void UFortMiniMapComponent::SetupMiniMapComponent(UTexture2D* MiniMapIcon, FLinearColor IconColor, FLinearColor PulseColor, float ColorPulsesPerSecond, float SizePulsesPerSecond) {
}

void UFortMiniMapComponent::SetMinimapViewableDistance(float ViewDistance) {
}

void UFortMiniMapComponent::SetMiniMapLocationOffset(const FVector& LocationOffset) {
}

void UFortMiniMapComponent::SetMiniMapIndicatorIsVisibleOnMiniMap(bool bVisibleOnMiniMap) {
}

void UFortMiniMapComponent::SetMiniMapIndicatorIsVisible(bool bVisible) {
}

void UFortMiniMapComponent::SetMiniMapIconSizePulsesPerSecond(float SizePulsesPerSecond) {
}

void UFortMiniMapComponent::SetMiniMapIconScale(const FVector2D& IconScale) {
}

void UFortMiniMapComponent::SetMiniMapIconPulseColor(FLinearColor PulseColor) {
}

void UFortMiniMapComponent::SetMiniMapIconColorPulsesPerSecond(float ColorPulsesPerSecond) {
}

void UFortMiniMapComponent::SetMiniMapIconColor(FLinearColor InColor) {
}

void UFortMiniMapComponent::SetMiniMapIcon(UTexture2D* MiniMapIcon) {
}

void UFortMiniMapComponent::OverrideLocalMiniMapIndicatorIsVisible(bool bVisible) {
}

void UFortMiniMapComponent::OverrideLocalMiniMapIcon(UTexture2D* MiniMapIcon) {
}

void UFortMiniMapComponent::OnRep_MiniMapData() {
}

void UFortMiniMapComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMiniMapComponent, MiniMapData);
}

UFortMiniMapComponent::UFortMiniMapComponent() {
    this->LocalMinimapIconOverride = NULL;
}

