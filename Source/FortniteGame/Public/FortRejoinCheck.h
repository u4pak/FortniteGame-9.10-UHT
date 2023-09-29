#pragma once
#include "CoreMinimal.h"
#include "RejoinCheck.h"
#include "FortRejoinCheck.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortRejoinCheck : public URejoinCheck {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbandonAfterCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttemptingAbandon;
    
public:
    UFortRejoinCheck();
};

