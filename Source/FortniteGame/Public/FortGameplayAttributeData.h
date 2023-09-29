#pragma once
#include "CoreMinimal.h"
#include "GameplayAttributeData.h"
#include "FortGameplayAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortGameplayAttributeData : public FGameplayAttributeData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Maximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldClampBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnclampedBaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnclampedCurrentValue;
    
public:
    FFortGameplayAttributeData();
};

