#pragma once
#include "CoreMinimal.h"
#include "OnCursorModeChangingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCursorModeChangingDelegate, bool, bCursorModeEnabled);

