#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaPlayersLeftBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPlayersLeftBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaPlayersLeftBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayersLeftText(const FText& PlayersText);
    
};

