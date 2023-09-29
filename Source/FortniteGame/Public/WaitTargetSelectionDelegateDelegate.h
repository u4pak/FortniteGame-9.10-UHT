#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayTagContainer.h"
#include "WaitTargetSelectionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaitTargetSelectionDelegate, const FGameplayAbilityTargetDataHandle&, TargetData, FGameplayTag, ApplicationTag);

