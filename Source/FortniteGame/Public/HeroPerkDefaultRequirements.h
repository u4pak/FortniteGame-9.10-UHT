#pragma once
#include "CoreMinimal.h"
#include "EFortItemTier.h"
#include "EFortRarity.h"
#include "HeroPerkDefaultRequirements.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FHeroPerkDefaultRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemTier MinimumHeroTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumHeroLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity MinimumHeroRarity;
    
    FHeroPerkDefaultRequirements();
};

