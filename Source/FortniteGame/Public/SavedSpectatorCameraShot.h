#pragma once
#include "CoreMinimal.h"
#include "NotificationUISettings.h"
#include "SavedSpectatorCameraState.h"
#include "SavedSpectatorCameraShot.generated.h"

USTRUCT(BlueprintType)
struct FSavedSpectatorCameraShot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedSpectatorCameraState CameraState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShotStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MESSAGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationUISettings MessageUISettings;
    
    FORTNITEGAME_API FSavedSpectatorCameraShot();
};

