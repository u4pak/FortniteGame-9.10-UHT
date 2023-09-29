#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortAlterationItem.generated.h"

class UFortAlterationItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAlterationItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UFortAlterationItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAlterationItemDefinition* GetAlterationDefinitionBP() const;
    
};

