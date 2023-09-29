#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortEventFlagsNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortEventFlagsNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime RefreshTime;
    
    FFortEventFlagsNotification();
};

