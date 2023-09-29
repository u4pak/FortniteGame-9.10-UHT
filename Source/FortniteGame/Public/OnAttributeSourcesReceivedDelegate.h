#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "OnAttributeSourcesReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAttributeSourcesReceived, const FGameplayAttribute&, Attribute);

