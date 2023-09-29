#pragma once
#include "CoreMinimal.h"
#include "EFortCombatEvents.generated.h"

UENUM(BlueprintType)
namespace EFortCombatEvents {
    enum Type {
        HuskFollowing,
        SmasherFollowing,
        TrollFollowing,
        FlingerFollowing,
        TakerFollowing,
        HuskCombatNearby,
        SmasherCombatNearby,
        TrollCombatNearby,
        FlingerCombatNearby,
        TakerCombatNearby,
        PlayerTakeDamage,
        PlayerHealth,
        PlayerLookAtEnemy,
        PlayerDamageEnemy,
        PlayerKilledEnemy,
        AtlasTakeDamage,
        AtlasHealth,
        AtlasDestroyed,
        TrapFiring,
        BuildingTakeDamage,
        FoodHealingPotential,
        PlayerAmmo,
        EnemiesNear,
        PlayerMovement,
        BuildingDamagedNearObjective,
        TrapDamageEnemy,
        ObjectivePathCost,
        PlayerPathCost,
        Max_None,
    };
}

