#include "FortPartyContext.h"

void UFortPartyContext::ShowLocalPlayerExternalProfile() {
}

void UFortPartyContext::ShowInitialCrossplayPrompt() {
}

void UFortPartyContext::ShowExternalProfile(const FUniqueNetIdRepl& ProfileToShow) {
}

void UFortPartyContext::ShowExternalFriendsUI() {
}

bool UFortPartyContext::ShouldShowExternalFriendsUI() const {
    return false;
}

bool UFortPartyContext::ShouldShowCrossplayWarningDialog() const {
    return false;
}

bool UFortPartyContext::ShouldMcpPartyInvitesBeEnabled() const {
    return false;
}

void UFortPartyContext::SetPartyPrivacySetting(EPartyType PartyType, bool bLeaderFriendsOnly, bool bLeaderInvitesOnly) {
}

void UFortPartyContext::SetMcpPartyInvitesEnabled(bool bEnabled) {
}

void UFortPartyContext::SetLocalPlayerLFG(bool bInLFG) {
}

void UFortPartyContext::SetLocalPartyMemberLocation(EFortPartyMemberLocation Location) {
}

void UFortPartyContext::SetLocalPartyMemberEmoting(const UFortMontageItemDefinitionBase* EmoteAsset) {
}

void UFortPartyContext::SendTeamMemberFriendRequest(const FFortTeamMemberInfo& TeamMemberInfo) {
}

void UFortPartyContext::SendPartyInviteNetID(const FUniqueNetIdRepl& PlayerID) {
}

void UFortPartyContext::SendMcpFriendRequest(const FUniqueNetIdRepl& PlayerID) {
}

void UFortPartyContext::SendConsoleFriendRequest(const FUniqueNetIdRepl& PlayerID) {
}

void UFortPartyContext::ProcessPendingChangedMemberInfos() {
}

void UFortPartyContext::LeaveParty() {
}

void UFortPartyContext::LeaveAction(bool bInStayWithParty) {
}

bool UFortPartyContext::IsValidNetID(const FUniqueNetIdRepl& UniqueNetId) {
    return false;
}

bool UFortPartyContext::IsPlayerInOurParty(const FUniqueNetIdRepl& PlayerIdToCheck) const {
    return false;
}

bool UFortPartyContext::IsNetIdFromLocalPlayersPlatform(const FUniqueNetIdRepl& PlayerID) const {
    return false;
}

bool UFortPartyContext::IsLocalPlayerPartyLeader() const {
    return false;
}

bool UFortPartyContext::IsLocalPlayerLFG() const {
    return false;
}

bool UFortPartyContext::IsLocalPlayerInParty() const {
    return false;
}

bool UFortPartyContext::IsInLocalPlayersParty(const FUniqueNetIdRepl& PlayerID) const {
    return false;
}

bool UFortPartyContext::IsEntirePartyInFrontEnd() const {
    return false;
}

bool UFortPartyContext::HasPendingMcpPartyInvitation(const FUniqueNetIdRepl& PlayerID) const {
    return false;
}

bool UFortPartyContext::GetPartyPrivacySetting(EPartyType& OutPartyType, bool& OutLeaderFriendsOnly, bool& OutLeaderInvitesOnly) {
    return false;
}

bool UFortPartyContext::GetPartyMemberLocation(const FUniqueNetIdRepl& MemberId, EFortPartyMemberLocation& LocationOut) const {
    return false;
}

ECommonInputType UFortPartyContext::GetPartyMemberInputType(const FUniqueNetIdRepl& MemberId) const {
    return ECommonInputType::MouseAndKeyboard;
}

EFortPartyMemberDisplayState UFortPartyContext::GetPartyMemberDisplayState(const FFortTeamMemberInfo& PartyMemberInfo) const {
    return EFortPartyMemberDisplayState::Open;
}

int32 UFortPartyContext::GetNumPlayersInLocalParty() const {
    return 0;
}

EFortFriendRequestStatus UFortPartyContext::GetMcpFriendRequestStatusForPlayer(const FUniqueNetIdRepl& PlayerID) const {
    return EFortFriendRequestStatus::None;
}

int32 UFortPartyContext::GetMaxTeamSizeForSelectedTheater() const {
    return 0;
}

bool UFortPartyContext::GetLocalTeamTeamMemberInfo(AFortPlayerState* TeamMemberState, FFortTeamMemberInfo& TeamMemberInfo) {
    return false;
}

void UFortPartyContext::GetLocalPlayerTeamMemberInfo(FFortTeamMemberInfo& LocalPlayerInfo) const {
}

UFortUITeamInfo* UFortPartyContext::GetLocalPlayerTeam() const {
    return NULL;
}

FString UFortPartyContext::GetLocalPlayerDisplayName() const {
    return TEXT("");
}

EFortPartyState UFortPartyContext::GetLocalPartyProgression() const {
    return EFortPartyState::Undetermined;
}

bool UFortPartyContext::GetLocalPartyMemberLocation(EFortPartyMemberLocation& Location) const {
    return false;
}

EFortFriendRequestStatus UFortPartyContext::GetFriendRequestStatusForTeamMember(const FFortTeamMemberInfo& TeamMemberInfo, FUniqueNetIdRepl& UniqueIdUsed, bool& bIsMcpId) const {
    return EFortFriendRequestStatus::None;
}

int32 UFortPartyContext::GetCurrentPartyMaxSize() const {
    return 0;
}

EFortFriendRequestStatus UFortPartyContext::GetConsoleFriendRequestStatusForPlayer(const FUniqueNetIdRepl& PlayerID) const {
    return EFortFriendRequestStatus::None;
}

EAthenaPartyMemberReadyType UFortPartyContext::GetAthenaPartyMemberReadyType(const FUniqueNetIdRepl& MemberId) const {
    return EAthenaPartyMemberReadyType::Ready;
}

FText UFortPartyContext::GetAthenaPartyMemberReadyText(const FUniqueNetIdRepl& MemberId) const {
    return FText::GetEmpty();
}

bool UFortPartyContext::CanShowExternalProfile(const FString& TargetPlatform) const {
    return false;
}

bool UFortPartyContext::CanBeInvitedNetID(const FUniqueNetIdRepl& PlayerID) {
    return false;
}

void UFortPartyContext::AcceptMcpFriendRequest(const FUniqueNetIdRepl& PlayerID) {
}

UFortPartyContext::UFortPartyContext() {
    this->LocalPlayerTeam = NULL;
    this->bShouldTryToJoinEpicPartyOnConsoleFailure = true;
}

