#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECountdownDisplay.h"
#include "TimerDisplayData.h"
#include "AthenaChallengeCountdownDisplay.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeCountdownDisplay : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountdownDisplay DisplayType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerDisplayData DisplayData[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TimeRemaining;
    
public:
    UAthenaChallengeCountdownDisplay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeSet(const FTimerDisplayData& DisplayStyle);
    
};

