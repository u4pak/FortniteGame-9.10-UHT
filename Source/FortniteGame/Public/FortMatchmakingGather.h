#pragma once
#include "CoreMinimal.h"
#include "FortMatchmakingPolicy.h"
#include "FortMatchmakingGather.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMatchmakingGather : public UFortMatchmakingPolicy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToJoinInProgress;
    
public:
    UFortMatchmakingGather();
};

