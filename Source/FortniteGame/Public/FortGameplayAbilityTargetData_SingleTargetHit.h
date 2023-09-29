#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData_SingleTargetHit.h"
#include "FortGameplayAbilityTargetData_SingleTargetHit.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData_SingleTargetHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CartridgeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponInfo;
    
    FORTNITEGAME_API FFortGameplayAbilityTargetData_SingleTargetHit();
};

