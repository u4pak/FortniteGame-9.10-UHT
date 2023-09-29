#include "FortBroadcastRemoteClientInfo.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortBroadcastRemoteClientInfo::ServerSetPlayerInventoryActive_Implementation(bool bInventorypActive) {
}
bool AFortBroadcastRemoteClientInfo::ServerSetPlayerInventoryActive_Validate(bool bInventorypActive) {
    return true;
}

void AFortBroadcastRemoteClientInfo::ServerSetPlayerInteracting_Implementation(bool bInteracting) {
}
bool AFortBroadcastRemoteClientInfo::ServerSetPlayerInteracting_Validate(bool bInteracting) {
    return true;
}

void AFortBroadcastRemoteClientInfo::ServerSetPlayerFullScreenMapActive_Implementation(bool bFullscreenMapActive) {
}
bool AFortBroadcastRemoteClientInfo::ServerSetPlayerFullScreenMapActive_Validate(bool bFullscreenMapActive) {
    return true;
}

void AFortBroadcastRemoteClientInfo::ServerSetPlayerEventScore_Implementation(int32 EventScore) {
}
bool AFortBroadcastRemoteClientInfo::ServerSetPlayerEventScore_Validate(int32 EventScore) {
    return true;
}

void AFortBroadcastRemoteClientInfo::ServerSetPlayerEditTileData_Implementation(const TArray<int32>& EditTileData) {
}
bool AFortBroadcastRemoteClientInfo::ServerSetPlayerEditTileData_Validate(const TArray<int32>& EditTileData) {
    return true;
}

void AFortBroadcastRemoteClientInfo::ServerSetPlayerCanDBNORevive_Implementation(bool bCanDBNORevive) {
}
bool AFortBroadcastRemoteClientInfo::ServerSetPlayerCanDBNORevive_Validate(bool bCanDBNORevive) {
    return true;
}

void AFortBroadcastRemoteClientInfo::ServerSetPlayerBuildingMaterial_Implementation(TEnumAsByte<EFortResourceType::Type> Material) {
}
bool AFortBroadcastRemoteClientInfo::ServerSetPlayerBuildingMaterial_Validate(TEnumAsByte<EFortResourceType::Type> Material) {
    return true;
}

void AFortBroadcastRemoteClientInfo::ServerSetPlayerBuildableClass_Implementation(TSubclassOf<ABuildingSMActor> BuildableClass) {
}
bool AFortBroadcastRemoteClientInfo::ServerSetPlayerBuildableClass_Validate(TSubclassOf<ABuildingSMActor> BuildableClass) {
    return true;
}

void AFortBroadcastRemoteClientInfo::OnServerRespawnTimeChanged(float InRespawnTime) {
}

void AFortBroadcastRemoteClientInfo::OnServerRemoveMapMarker(FMarkerID InMarkerID) {
}

void AFortBroadcastRemoteClientInfo::OnServerPoiTagIDChanged(int16 InPoiTagID) {
}

void AFortBroadcastRemoteClientInfo::OnServerPlayerWeakspotSpawned(FBuildingWeakSpotData& WeakspotData) {
}

void AFortBroadcastRemoteClientInfo::OnServerPlayerQuickChatEntryChanged(const FAthenaQuickChatActiveEntry& ChatEntry) {
}

void AFortBroadcastRemoteClientInfo::OnServerPlayerEditActorChanged(ABuildingSMActor* EditActor) {
}

void AFortBroadcastRemoteClientInfo::OnServerPlayerDamagedResourceBuilding(ABuildingSMActor* BuildingSMActor, TEnumAsByte<EFortResourceType::Type> PotentialResourceType, int32 PotentialResourceCount, bool bDestroyed, bool bJustHitWeakspot) {
}

void AFortBroadcastRemoteClientInfo::OnServerAddMapMarker(FFortWorldMarkerData InMarkerData) {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteWeakspotData() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteRespawnTime() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemotePoiTagID() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteIsInventoryActive() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteIsInteracting() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteIsFullScreenMapActive() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteEventScore() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteEditTileData() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteEditActor() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteChatEntry() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteCanDBNORevive() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteBuildingMaterial() {
}

void AFortBroadcastRemoteClientInfo::OnRep_RemoteBuildableClass() {
}

void AFortBroadcastRemoteClientInfo::OnRep_bActive() {
}

void AFortBroadcastRemoteClientInfo::OnPlayerInventoryActiveChanged(bool bInventoryActive) {
}

void AFortBroadcastRemoteClientInfo::OnPlayerInteractLongUseChanged(bool bInteracting) {
}

void AFortBroadcastRemoteClientInfo::OnPlayerFullScreenMapActiveChanged(bool bFullscreenMapActive) {
}

void AFortBroadcastRemoteClientInfo::OnPlayerEventScoreChanged(int32 EventScore) {
}

void AFortBroadcastRemoteClientInfo::OnPlayerEditPreviewChanged(ABuildingSMActor* EditedActor) {
}

void AFortBroadcastRemoteClientInfo::OnPlayerCanDBNOReviveChanged(bool bCanDBNORevive) {
}

void AFortBroadcastRemoteClientInfo::OnPlayerBuildingMaterialChanged() {
}

void AFortBroadcastRemoteClientInfo::OnPlayerBuildableClassChanged() {
}

void AFortBroadcastRemoteClientInfo::ClientRemotePlayerRemoveMapMarker_Implementation(FMarkerID MarkerID) {
}

void AFortBroadcastRemoteClientInfo::ClientRemotePlayerDamagedResourceBuilding_Implementation(ABuildingSMActor* BuildingSMActor, TEnumAsByte<EFortResourceType::Type> PotentialResourceType, int32 PotentialResourceCount, bool bDestroyed, bool bJustHitWeakspot) {
}

void AFortBroadcastRemoteClientInfo::ClientRemotePlayerAddMapMarker_Implementation(FFortWorldMarkerData InMarkerData) {
}

void AFortBroadcastRemoteClientInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, bActive);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, bRemoteIsInteracting);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, RemoteEditActor);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, RemoteEditTileData);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, RemoteBuildableClass);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, RemoteBuildingMaterial);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, bRemoteIsFullScreenMapActive);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, bRemoteIsInventoryActive);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, bRemoteCanDBNORevive);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, RemoteChatEntry);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, RemoteWeakspotData);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, RemoteRespawnTime);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, RemotePoiTagID);
    DOREPLIFETIME(AFortBroadcastRemoteClientInfo, RemoteEventScore);
}

AFortBroadcastRemoteClientInfo::AFortBroadcastRemoteClientInfo() {
    this->bActive = false;
    this->bRemoteIsInteracting = false;
    this->RemoteEditActor = NULL;
    this->RemoteBuildableClass = NULL;
    this->RemoteBuildingMaterial = EFortResourceType::Wood;
    this->bRemoteIsFullScreenMapActive = false;
    this->bRemoteIsInventoryActive = false;
    this->bRemoteCanDBNORevive = false;
    this->RemoteRespawnTime = 0.00f;
    this->RemotePoiTagID = -1;
    this->RemoteEventScore = -1;
}

