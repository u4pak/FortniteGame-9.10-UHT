#pragma once
#include "CoreMinimal.h"
#include "PlaylistAccess.h"
#include "PlaylistAccessOverride.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPlaylistAccessOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Platforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaylistAccess OverrideAccess;
    
    FPlaylistAccessOverride();
};

