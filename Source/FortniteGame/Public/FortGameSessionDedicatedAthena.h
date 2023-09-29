#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameSessionDedicated.h"
#include "FortGameSessionDedicatedAthena.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameSessionDedicatedAthena : public AFortGameSessionDedicated {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDownloadEventsAfterHotfixCheck;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReconnectToMMSDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxReconnectToMMSDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MMSVersionCompatability;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MMSTicketURLServer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMSPingInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullMeshRetryDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshNetworkGCTimerRate;
    
public:
    AFortGameSessionDedicatedAthena();
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleExitingSpawningStartup();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleAllPlaylistLevelsVisible();
    
};

