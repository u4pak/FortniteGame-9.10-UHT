#pragma once
#include "CoreMinimal.h"
#include "PartyFailureLogSubmitReason.generated.h"

USTRUCT(BlueprintType)
struct FPartyFailureLogSubmitReason {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubReason;
    
    FORTNITEGAME_API FPartyFailureLogSubmitReason();
};

