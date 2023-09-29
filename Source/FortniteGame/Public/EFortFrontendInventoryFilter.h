#pragma once
#include "CoreMinimal.h"
#include "EFortFrontendInventoryFilter.generated.h"

UENUM(BlueprintType)
enum class EFortFrontendInventoryFilter : uint8 {
    Schematics,
    WorldItems,
    WorldItemsInGame,
    WorldItemsStorage,
    WorldItemsTransfer,
    ConsumablesAndAccountResources,
    Heroes,
    Defenders,
    Survivors,
    AthenaCharacter,
    AthenaBackpack,
    AthenaPickaxe,
    AthenaGliders,
    AthenaContrails,
    AthenaEmotes,
    AthenaItemWraps,
    AthenaLoadingScreens,
    AthenaLobbyMusic,
    HestiaWeapons,
    HestiaResources,
    Invisible,
    Max_None,
};

