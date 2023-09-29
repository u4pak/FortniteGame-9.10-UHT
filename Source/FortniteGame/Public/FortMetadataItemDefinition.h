#pragma once
#include "CoreMinimal.h"
#include "FortItemDefinition.h"
#include "FortMetadataItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMetadataItemDefinition : public UFortItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevel;
    
public:
    UFortMetadataItemDefinition();
};

