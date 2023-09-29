#include "FortReplayContext.h"

void UFortReplayContext::ToggleViewSettingsVisibility() {
}

void UFortReplayContext::TogglePlayPause() {
}

void UFortReplayContext::TogglePlayerListVisibility() {
}

bool UFortReplayContext::ToggleIconVisibility(UClass* ToToggle) {
    return false;
}

void UFortReplayContext::ToggleHUDVisibility() {
}

void UFortReplayContext::TakeScreenshot() {
}

void UFortReplayContext::SkipTo(const float TimeInSeconds) {
}

void UFortReplayContext::SkipForward(const float TimeInSeconds) {
}

void UFortReplayContext::SkipBack(const float TimeInSeconds) {
}

void UFortReplayContext::SetTimelineInputFocus(const bool bShouldHaveFocus) {
}

void UFortReplayContext::ReplayHUDCleanup() {
}

void UFortReplayContext::JumpToPreviousEvent() {
}

void UFortReplayContext::JumpToNextEvent() {
}

void UFortReplayContext::JumpToEvent(int32 EventIndex) {
}

void UFortReplayContext::JumpReplayToTimelinePosition(float TimeRatio) {
}

bool UFortReplayContext::IsDepthOfFieldActive() {
    return false;
}

void UFortReplayContext::IncreasePlaybackMultiplier() {
}

float UFortReplayContext::GetMaxMapZoomLevel() const {
    return 0.0f;
}

FString UFortReplayContext::GetEventTooltip(int32 EventIndex) {
    return TEXT("");
}

FText UFortReplayContext::GetCameraNameFromType(const ESpectatorCameraType CamType) const {
    return FText::GetEmpty();
}

void UFortReplayContext::EnableTransportNavigation() {
}

void UFortReplayContext::DisableTransportNavigation() {
}

void UFortReplayContext::DecreasePlaybackMultiplier() {
}

UFortReplayContext::UFortReplayContext() {
    this->TimeBeforeEvent = 10.00f;
    this->SpectatingPC = NULL;
}

