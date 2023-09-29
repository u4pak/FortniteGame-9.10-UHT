#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Net/VoiceConfig.h"
#include "LiveStreamVoiceSubsystem.generated.h"

UCLASS(Blueprintable)
class LIVESTREAMVOICE_API ULiveStreamVoiceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceSettings PlaybackSettings;
    
public:
    ULiveStreamVoiceSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetVoiceSettings(const FVoiceSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void EnableLocalVoiceProcessing(uint8 LocalUserNum, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ClearVoiceSettings();
    
};

