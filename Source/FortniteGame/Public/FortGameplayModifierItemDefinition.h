#pragma once
#include "CoreMinimal.h"
#include "FortAbilitySetDeliveryInfo.h"
#include "FortAccountItemDefinition.h"
#include "FortGameplayEffectDeliveryInfo.h"
#include "FortGameplayModifierItemDefinition.generated.h"

class AFortGameplayMutator;

UCLASS(Blueprintable, MinimalAPI)
class UFortGameplayModifierItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayEffectDeliveryInfo> PersistentGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetDeliveryInfo> PersistentAbilitySets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AFortGameplayMutator>> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenInUI;
    
public:
    UFortGameplayModifierItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHiddenInUI() const;
    
};

