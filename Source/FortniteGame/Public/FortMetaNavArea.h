#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavAreaMeta.h"
#include "NavAgentData.h"
#include "FortMetaNavArea.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMetaNavArea : public UNavAreaMeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavAgentData> AgentData;
    
    UFortMetaNavArea();
};

