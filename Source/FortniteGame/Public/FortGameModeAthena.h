#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "AthenaVehicleOverride.h"
#include "EAthenaGamePhaseStep.h"
#include "EForceKickAfterDeathMode.h"
#include "ExitCraftSpawnData.h"
#include "FortGamePvPBase.h"
#include "FortMutatorOwner.h"
#include "FortSpawnActorData.h"
#include "GCSettingsOverride.h"
#include "GameplayMutatorObserverInterface.h"
#include "HotfixVolumePlacement.h"
#include "NotifySafeZoneChangesDelegate.h"
#include "ScorePlacementTable.h"
#include "SupplyDropSpawnData.h"
#include "Templates/SubclassOf.h"
#include "TimeOfDayOverride.h"
#include "FortGameModeAthena.generated.h"

class AActor;
class ABuildingActor;
class AFortAthenaAircraft;
class AFortAthenaSpawningPolicyManager;
class AFortAthenaVehicle;
class AFortGameplayMutator;
class AFortPlayerControllerAthena;
class AFortPlayerControllerSpectating;
class AFortSafeZoneIndicator;
class AFortTeamPrivateInfo;
class AFortTimeOfDayManager;
class AMegaStormManager;
class APlayerState;
class UAthenaAISettings;
class UAthenaCosmeticItemDefinition;
class UAthenaWeaponAlterationEvent;
class UCurveTable;
class UFortGameplayModifierItemDefinition;
class UFortMutatorListComponent;
class UFortServerBotManagerAthena;
class UGameplayEffect;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API AFortGameModeAthena : public AFortGamePvPBase, public IGameplayMutatorObserverInterface, public IFortMutatorOwner {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMapInfoInitialized);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortTeamPrivateInfo*> SortedStormCapPrivateTeams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayForStormCapWarning;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayForStormCapDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenStormCapDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormCapDamagePerTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapInfoInitialized OnMapInfoInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMapInfoInitialized;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifySafeZoneChanges OnSafeZoneUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysDBNO;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> ActorsToClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ClearAreaIgnoreActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverSpawnPickupsOnPawnDeath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadTestCosmetics;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisable3DVoiceChat: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowDamageInWarmup: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludedDefaultSupplyDrops;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludedLTMSupplyDrops;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludedLTMSpawnActors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimeOfDayOverride> TimeOfDayOverrideList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableGCOnServerDuringMatch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGCSettingsOverride> GCSettingsOverrideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlaylistHotfixChangedGCDisabling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlaylistHotfixOriginalGCFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseZebulonDrones;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverloadedInitialConnectTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailedToStartMatchTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrphanedServerCheckTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRecentPlayersUpdates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultWarmupEarlyRequiredPlayerPercent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableStormCapSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PlaylistSupportsStormCapSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStormCapSystemEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysIncludeDisconnectedTeammates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeDisconnectedTeammatesFromAircraftPhase;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EForceKickAfterDeathMode ForceKickAfterDeathMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceKickAfterDeathTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreativeModeGracefulShutdownTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHotfixVolumePlacement> HotfixKillVolumes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHotfixVolumePlacement> HotfixBlockingVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaAircraft*> Aircrafts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerControllerAthena*> AlivePlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamAlivePlayers[100];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarmupRequiredPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmupCountdownDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmupEarlyCountdownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSafeZoneActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSafeZonePaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRemainingWhenPhasePaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GE_OutsideSafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortSafeZoneIndicator> SafeZoneIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMegaStormManager> MegaStormManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SkyTubeDisablePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SafeZonePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortSafeZoneIndicator* SafeZoneIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> SafeZoneLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSafeZoneLocationsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndGameKickPlayersDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventStatSubmitAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMegaStormManager* MegaStormManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceChatChannelPositional;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRandomTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaAISettings* AISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerControllerSpectating*> LiveSpectators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerControllerSpectating> LiveSpectatorPlayerControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerControllerSpectating> LiveBroadcastPlayerControllerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlatformOSSNamesToUploadStatsV1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlatformOSSNamesToUploadStatsV2;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMatchmakingRatingUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlightPathInitialized;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScorePerMinuteAlive;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreMaxMinutesAliveCounted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreForGettingAtLeastOneKill;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScorePerScaledTeamKill;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreForFirstRevive;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreForSubsequentRevives;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAdditionalRevivesToScore;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScorePlacementTable ScorePlacementTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveAIActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaWeaponAlterationEvent*> ActiveWeaponAlterationRules;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockMobilePlayersToTouchInSwitchPool;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllCosmeticsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> SkyDiveContrailCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SkyDiveContrailLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> GliderCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GliderLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> PickaxeCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PickaxeLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> CharacterCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CharacterLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> HatCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HatLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> BackpackCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BackpackLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> DanceCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DanceLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> VictoryPoseCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VictoryPoseLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> MapMarkerCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MapMarkerLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PetLoadTestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> ConsumableEmoteCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> LoadingScreenCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> BattleBusCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSupplyDropSpawnData> SupplyDropSpawnDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FExitCraftSpawnData ExitCraftSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastSpawnedSupplyDropType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaSpawningPolicyManager* SpawningPolicyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortServerBotManagerAthena* ServerBotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAthenaVehicleOverride> AthenaVehicleOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> ItemWrapCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> MusicPacks;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortTimeOfDayManager> TimeOfDayManagerGameplayOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortSpawnActorData> SpawnActorDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveTable* AthenaGameDataTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMutatorListComponent* MutatorListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortGameplayModifierItemDefinition*> CoreGameModeModifiers;
    
public:
    AFortGameModeAthena();
    UFUNCTION(BlueprintCallable)
    bool ShouldSpawnVehicle(TSubclassOf<AFortAthenaVehicle> VehicleClass);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeOfDayManagerGameplayOverride(TSubclassOf<AFortTimeOfDayManager> TimeOfDayManagerClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SafeZoneInsideChecks();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndGameKickPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnCheckForOrphanedServer(bool bFromPlayerLogout);
    
    UFUNCTION(BlueprintCallable)
    void OnAircraftFlightEnded(AFortAthenaAircraft* FortAthenaAircraft);
    
    UFUNCTION(BlueprintCallable)
    void OnAircraftExitedDropZone(AFortAthenaAircraft* FortAthenaAircraft);
    
    UFUNCTION(BlueprintCallable)
    void OnAircraftEnteredDropZone(AFortAthenaAircraft* FortAthenaAircraft);
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpToSafeZonePhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapInfoInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleAllPlaylistLevelsVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFortAthenaVehicle> GetVehicleClassOverride(TSubclassOf<AFortAthenaVehicle> DefaultVehicleClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AFortGameplayMutator* GetMutatorByClass(const AActor* ContextActor, TSubclassOf<AFortGameplayMutator> MutatorClass);
    
    UFUNCTION(BlueprintCallable)
    AFortGameplayMutator* GetGameplayMutator(FGameplayTag MutatorTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FireServerPerformanceEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndGamePhaseStarted();
    
    UFUNCTION(BlueprintCallable)
    void EnableGameplayMutator(FGameplayTag MutatorTag, bool bEnable);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void RemoveMutatorFromList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(RemoveMutatorFromList,);
    
    UFUNCTION()
    void GetMutatorsForContextActor(TArray<AFortGameplayMutator*>& OutMutators, const AActor* ContextActor) const override PURE_VIRTUAL(GetMutatorsForContextActor,);
    
    UFUNCTION()
    void GetMutatorRelevantPlayers(TArray<APlayerState*>& OutPlayers) const override PURE_VIRTUAL(GetMutatorRelevantPlayers,);
    
    UFUNCTION()
    void AddMutatorToList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(AddMutatorToList,);
    
};

