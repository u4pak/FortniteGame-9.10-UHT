#pragma once
#include "CoreMinimal.h"
#include "EEventTournamentRound.generated.h"

UENUM(BlueprintType)
enum class EEventTournamentRound : uint8 {
    Qualifiers,
    SemiFinals,
    Finals,
    Unknown,
};

