#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "FortAlwaysRelevantActorInfo.h"
#include "FortReplicationGraphNode_BroadcastSpectator.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphNode_BroadcastSpectator : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAlwaysRelevantActorInfo> PastViewedTargets;
    
public:
    UFortReplicationGraphNode_BroadcastSpectator();
};

