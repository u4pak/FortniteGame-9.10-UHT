#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "AbilityToolSpawnParameters.h"
#include "FortDecoTool.h"
#include "FortAbilityDecoTool.generated.h"

class ABuildingActor;
class UFortGameplayAbility;

UCLASS(Blueprintable, MinimalAPI)
class AFortAbilityDecoTool : public AFortDecoTool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAbilityToolSpawnParameters CachedSpawnParameters;
    
public:
    AFortAbilityDecoTool();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    void GetSpawnParameters(FAbilityToolSpawnParameters& OutSpawnParamters) const;
    
    UFUNCTION(BlueprintCallable)
    UFortGameplayAbility* GetPlacementAbilityInstance();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FGameplayAbilitySpecHandle GetPlacementAbilityHandle();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ABuildingActor* AbilitySpawnDeco(const FAbilityToolSpawnParameters& SpawnParameters);
    
};

