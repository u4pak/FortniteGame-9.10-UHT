#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MyFortCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FMyFortCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TooltipTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ModifiedTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> Attributes;
    
    FMyFortCategoryData();
};

