#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "BuildingTrapFloor.h"
#include "BuildingTrapLauncher.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABuildingTrapLauncher : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LaunchStrength;
    
    ABuildingTrapLauncher();
};

