#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "FortQueryGenerator_Enemies.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_Enemies : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerceivedEnemiesOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSleepCapableAIUsePerceivedEnemiesOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSleepingAIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxTimeSincePerceived;
    
public:
    UFortQueryGenerator_Enemies();
};

