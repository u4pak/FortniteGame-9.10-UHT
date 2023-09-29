#pragma once
#include "CoreMinimal.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_Hover.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_Hover : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_Intro;
    
public:
    AFortAthenaMutator_Hover();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
    
};

