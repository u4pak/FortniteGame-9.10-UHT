#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "FortConversionResultNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortConversionResultNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> ItemsGranted;
    
    FFortConversionResultNotification();
};

