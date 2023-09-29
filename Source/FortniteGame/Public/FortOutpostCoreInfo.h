#pragma once
#include "CoreMinimal.h"
#include "FortPlacedBuilding.h"
#include "FortOutpostCoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortOutpostCoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlacedBuilding> PlacedBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AccountsWithEditPermission;
    
    FORTNITEGAME_API FFortOutpostCoreInfo();
};

