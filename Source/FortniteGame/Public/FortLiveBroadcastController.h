#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESpectatorCameraType.h"
#include "FortLiveSpectatorController.h"
#include "Templates/SubclassOf.h"
#include "FortLiveBroadcastController.generated.h"

class AActor;
class AFortPlayerMarkerBase;
class AFortPlayerState;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortLiveBroadcastController : public AFortLiveSpectatorController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnToggleOffAirWidgetVisibilty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnToggleNetUIWidgetVisibilty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BroadcastPostProcessingActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerMarkerBase> SquadMarkerActorClass;
    
    AFortLiveBroadcastController();
    UFUNCTION(BlueprintCallable)
    void TryBeginBusPhase();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFollowedPlayer(AFortPlayerState* NewPlayerToFollow, const FVector& SpectatorLocation, bool bValidPos);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnSpectatorCameraTypeChanged(ESpectatorCameraType NewCameraMode, const FVector& SpectatorLocation, bool bValidPos);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBeginBusPhase();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanStartBattleBus();
    
};

