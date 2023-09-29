#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VehicleTeleportPortal.generated.h"

class AFortAthenaVehicle;

UINTERFACE(Blueprintable)
class UVehicleTeleportPortal : public UInterface {
    GENERATED_BODY()
};

class IVehicleTeleportPortal : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyTeleportedVehicle(AFortAthenaVehicle* Vehicle);
    
};

