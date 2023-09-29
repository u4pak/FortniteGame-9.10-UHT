#pragma once
#include "CoreMinimal.h"
#include "EFortDayPhase.h"
#include "DayNightPhaseChangeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDayNightPhaseChangeSignature, TEnumAsByte<EFortDayPhase::Type>, CurrentDayPhase, TEnumAsByte<EFortDayPhase::Type>, PreviousDayPhase, bool, bAtCreation);

