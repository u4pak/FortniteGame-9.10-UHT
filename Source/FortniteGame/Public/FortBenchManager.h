#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortBenchManager.generated.h"

UCLASS(Blueprintable)
class UFortBenchManager : public UObject {
    GENERATED_BODY()
public:
    UFortBenchManager();
    UFUNCTION(BlueprintCallable)
    void StopFortBench();
    
};

