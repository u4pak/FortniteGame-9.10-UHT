#pragma once
#include "CoreMinimal.h"
#include "OutpostPrestigeEffects.h"
#include "OutpostPrestigeEffectsPerTheater.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FOutpostPrestigeEffectsPerTheater {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheaterSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostPrestigeEffects PrestigeEffects;
    
    FOutpostPrestigeEffectsPerTheater();
};

