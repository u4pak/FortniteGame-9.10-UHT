#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "Templates/SubclassOf.h"
#include "MashScoreData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMashScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ScoreValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScoreText;
    
    FORTNITEGAME_API FMashScoreData();
};

