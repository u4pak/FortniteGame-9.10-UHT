#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "EFortStatType.h"
#include "FortAccountItemDefinition.h"
#include "FortStatItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortStatItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortStatType Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute StatAttribute;
    
public:
    UFortStatItemDefinition();
};

