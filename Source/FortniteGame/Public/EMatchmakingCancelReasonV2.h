#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingCancelReasonV2.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingCancelReasonV2 : uint8 {
    Explicit,
    JoinedParty,
    LeftParty,
    PartyMemberJoined,
    PartyMemberLeft,
    PartyMemberCanceled,
    PlayReplay,
    UIDestroyed,
    PCDestroyed,
    AppBackgrounded,
    HotfixOutdated,
    TournamentOver,
    NotInParty,
    CrossplayBlocked,
    TournamentCrossplayBlocked,
    AccountLevelTooLow,
    FillNoCrossplay,
    Unknown,
};

