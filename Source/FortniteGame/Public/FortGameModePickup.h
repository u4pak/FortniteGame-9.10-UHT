#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortPickupAthena.h"
#include "FortGameModePickup.generated.h"

UCLASS(Blueprintable)
class AFortGameModePickup : public AFortPickupAthena {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InteractionTime;
    
public:
    AFortGameModePickup();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalInterrupt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalBeginLongUse();
    
};

