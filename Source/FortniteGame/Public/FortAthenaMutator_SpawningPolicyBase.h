#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "ObjectiveSpecialActorContainer.h"
#include "FortAthenaMutator_SpawningPolicyBase.generated.h"

class UFortAthenaMutator_SpawningPolicyData;

UCLASS(Abstract, Blueprintable)
class AFortAthenaMutator_SpawningPolicyBase : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FObjectiveSpecialActorContainer> SpecialActorIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedSpecialActorIdx;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnFailureLockoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase GamePhaseToStartSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldCenterGroundCheckAtFoundLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldMaintainItemCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowedDespawnToMaintainItemCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaMutator_SpawningPolicyData* ItemDataRemovalQueryPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxRespawnTime;
    
public:
    AFortAthenaMutator_SpawningPolicyBase();
};

