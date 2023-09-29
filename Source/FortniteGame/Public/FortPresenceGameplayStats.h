#pragma once
#include "CoreMinimal.h"
#include "FortPresenceGameplayStats.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPresenceGameplayStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Playlist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFellToDeath;
    
    FFortPresenceGameplayStats();
};

