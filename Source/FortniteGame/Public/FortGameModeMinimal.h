#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FortGameModeMinimal.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeMinimal : public AGameModeBase {
    GENERATED_BODY()
public:
    AFortGameModeMinimal();
};

