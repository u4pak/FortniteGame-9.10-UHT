#pragma once
#include "CoreMinimal.h"
#include "EEventTokenType.h"
#include "FortAccountItemDefinition.h"
#include "AthenaEventTokenItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaEventTokenItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventTokenType TokenType;
    
public:
    UAthenaEventTokenItemDefinition();
};

