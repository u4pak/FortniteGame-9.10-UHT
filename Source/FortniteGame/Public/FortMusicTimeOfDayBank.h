#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortDayPhase.h"
#include "FortMusicTimeOfDayBank.generated.h"

class UFortMusicAsset;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMusicTimeOfDayBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMusicAsset* Assets[4];
    
    UFortMusicTimeOfDayBank();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMusicAsset* GetAssetFromDayPhase(TEnumAsByte<EFortDayPhase::Type> DayPhase) const;
    
};

