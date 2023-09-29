#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "ERespawnRequirements.h"
#include "FortAthenaMutator.h"
#include "ItemsToDropOnDeath.h"
#include "FortAthenaMutator_ItemDropOnDeath.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_ItemDropOnDeath : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERespawnRequirements RespawnRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentAmmoToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AmmoDespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AmmoStormDespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxAmmoTypeDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxResourceTypeDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemsToDropOnDeath> ItemsToDrop;
    
public:
    AFortAthenaMutator_ItemDropOnDeath();
};

