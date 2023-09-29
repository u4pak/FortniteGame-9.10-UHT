#pragma once
#include "CoreMinimal.h"
#include "ClientPilotComponent.h"
#include "FortClientPilot_Base.generated.h"

class ABuildingActor;
class ABuildingSMActor;
class AFortPawn;
class AFortPickup;

UCLASS(Blueprintable, MinimalAPI, Config=Game, Within=FortPlayerController)
class UFortClientPilot_Base : public UClientPilotComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* EnemyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPickup* PickupTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* BuildingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* EditTarget;
    
    UFortClientPilot_Base();
};

