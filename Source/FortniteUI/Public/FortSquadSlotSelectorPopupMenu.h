#pragma once
#include "CoreMinimal.h"
#include "FortPopupMenu.h"
#include "FortSquadSlotSelectorPopupMenu.generated.h"

class UFortSquadSlotSelectorButton;

UCLASS(Blueprintable, EditInlineNew)
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu {
    GENERATED_BODY()
public:
    UFortSquadSlotSelectorPopupMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortSquadSlotSelectorButton* GetHostButton() const;
    
};

