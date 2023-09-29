#pragma once
#include "CoreMinimal.h"
#include "OnlineHotfixManager.h"
#include "FortHotfixManager.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHotfixManager : public UOnlineHotfixManager {
    GENERATED_BODY()
public:
    UFortHotfixManager();
};

