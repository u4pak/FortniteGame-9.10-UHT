#include "ReplicationGraphNode_FortVolumeGrid.h"

void UReplicationGraphNode_FortVolumeGrid::HandleStreamedLevelUnloaded() {
}

void UReplicationGraphNode_FortVolumeGrid::HandleStreamedLevelShown() {
}

void UReplicationGraphNode_FortVolumeGrid::HandleStreamedLevelLoaded() {
}

void UReplicationGraphNode_FortVolumeGrid::HandleStreamedLevelHidden() {
}

UReplicationGraphNode_FortVolumeGrid::UReplicationGraphNode_FortVolumeGrid() {
    this->FortVolume = NULL;
    this->FortVolumeGrid2D = NULL;
    this->FortVolumeAlwaysRelevantList = NULL;
    this->FortVolumeGlobalRelevancyNode = NULL;
}

