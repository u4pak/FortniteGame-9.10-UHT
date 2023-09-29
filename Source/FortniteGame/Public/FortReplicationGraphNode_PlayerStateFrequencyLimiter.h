#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode.h"
#include "FortReplicationGraphNode_PlayerStateFrequencyLimiter.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UFortReplicationGraphNode_PlayerStateFrequencyLimiter();
};

