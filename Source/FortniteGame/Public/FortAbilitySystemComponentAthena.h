#pragma once
#include "CoreMinimal.h"
#include "FortAbilitySystemComponent.h"
#include "FortAbilitySystemComponentAthena.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAbilitySystemComponentAthena : public UFortAbilitySystemComponent {
    GENERATED_BODY()
public:
    UFortAbilitySystemComponentAthena();
};

