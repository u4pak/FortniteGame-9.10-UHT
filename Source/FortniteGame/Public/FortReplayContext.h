#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "ESpectatorCameraType.h"
#include "FortReplayFXState.h"
#include "FortReplayPlaybackState.h"
#include "NoParamDelegateDelegate.h"
#include "OnCurrentShotChangedDelegate.h"
#include "ReplayFXStateChangeDelegate.h"
#include "ReplayHudVisibilityChangedDelegate.h"
#include "ReplayLevelStreamingChangedDelegate.h"
#include "ReplayPauseStateChangedDelegate.h"
#include "ReplayPlaybackMultiplierChangedDelegate.h"
#include "ReplayScrubCompleteDelegate.h"
#include "ReplayTimeChangedDelegate.h"
#include "ReplayTimelineFocusChangedDelegate.h"
#include "ReplayTimelineMarkerAddedDelegate.h"
#include "ReplayTimelineMarkersClearedDelegate.h"
#include "ReplayTimelineRangeChangedDelegate.h"
#include "ToggleReplayPlayerListDelegate.h"
#include "ToggleReplayViewSettingsDelegate.h"
#include "FortReplayContext.generated.h"

class AFortPlayerControllerSpectating;
class UFortSpectateClickableMapIcon;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortReplayContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortReplayPlaybackState PlaybackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortReplayFXState EffectsState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayFXStateChange OnReplayFXStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayPauseStateChanged OnPauseStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayTimeChanged OnReplayTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayTimelineRangeChanged OnReplayTimelineChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayPlaybackMultiplierChanged OnReplayPlaybackMultiplierChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayHudVisibilityChanged OnReplayHudVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToggleReplayViewSettings OnToggleReplayViewSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToggleReplayPlayerList OnToggleReplayPlayerList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayLevelStreamingChanged OnReplayLevelStreamingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayTimelineFocusChanged OnReplayTimelineFocusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayTimelineMarkerAdded OnReplayTimelineMarkerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayTimelineMarkersCleared OnReplayTimelineMarkersCleared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayScrubComplete OnReplayScrubComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnToggleSequencer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnSequenceFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentShotChanged OnSequenceShotChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortSpectateClickableMapIcon*> InteractiveMapIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, bool> UniqueMapIconVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerSpectating* SpectatingPC;
    
public:
    UFortReplayContext();
    UFUNCTION(BlueprintCallable)
    void ToggleViewSettingsVisibility();
    
    UFUNCTION(BlueprintCallable)
    void TogglePlayPause();
    
    UFUNCTION(BlueprintCallable)
    void TogglePlayerListVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool ToggleIconVisibility(UClass* ToToggle);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHUDVisibility();
    
    UFUNCTION(BlueprintCallable)
    void TakeScreenshot();
    
    UFUNCTION(BlueprintCallable)
    void SkipTo(const float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SkipForward(const float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SkipBack(const float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelineInputFocus(const bool bShouldHaveFocus);
    
    UFUNCTION(BlueprintCallable)
    void ReplayHUDCleanup();
    
    UFUNCTION(BlueprintCallable)
    void JumpToPreviousEvent();
    
    UFUNCTION(BlueprintCallable)
    void JumpToNextEvent();
    
    UFUNCTION(BlueprintCallable)
    void JumpToEvent(int32 EventIndex);
    
    UFUNCTION(BlueprintCallable)
    void JumpReplayToTimelinePosition(float TimeRatio);
    
    UFUNCTION(BlueprintCallable)
    bool IsDepthOfFieldActive();
    
    UFUNCTION(BlueprintCallable)
    void IncreasePlaybackMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxMapZoomLevel() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetEventTooltip(int32 EventIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCameraNameFromType(const ESpectatorCameraType CamType) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableTransportNavigation();
    
    UFUNCTION(BlueprintCallable)
    void DisableTransportNavigation();
    
    UFUNCTION(BlueprintCallable)
    void DecreasePlaybackMultiplier();
    
};

