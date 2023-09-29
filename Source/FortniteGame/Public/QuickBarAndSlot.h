#pragma once
#include "CoreMinimal.h"
#include "EFortQuickBars.h"
#include "QuickBarAndSlot.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FQuickBarAndSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuickBars QuickBarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuickBarSlot;
    
    FQuickBarAndSlot();
};

