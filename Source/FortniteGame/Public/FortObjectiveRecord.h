#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortObjectiveRecord.generated.h"

class AFortObjectiveBase;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortObjectiveRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortObjectiveBase> ObjectiveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ObjectiveData;
    
    FFortObjectiveRecord();
};

