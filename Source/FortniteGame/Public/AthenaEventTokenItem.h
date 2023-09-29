#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "AthenaEventTokenItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaEventTokenItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString game_code;
    
    UAthenaEventTokenItem();
};

