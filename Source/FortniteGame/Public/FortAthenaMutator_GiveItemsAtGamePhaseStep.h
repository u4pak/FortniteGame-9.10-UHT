#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaMutator.h"
#include "ItemsToGive.h"
#include "FortAthenaMutator_GiveItemsAtGamePhaseStep.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_GiveItemsAtGamePhaseStep : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhaseStep PhaseToGiveItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemsToGive> ItemsToGive;
    
public:
    AFortAthenaMutator_GiveItemsAtGamePhaseStep();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
    
};

