#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "FortAlterableItemDefinition.h"
#include "Recipe.h"
#include "FortSchematicItemDefinition.generated.h"

class AFortPlayerPawn;
class UFortWorldItemDefinition;
class USoundBase;

UCLASS(Blueprintable, MinimalAPI)
class UFortSchematicItemDefinition : public UFortAlterableItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CraftingRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> CraftingSuccessSound;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableCategoryHandle LootLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CraftingTimeRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSchematicDisplayName;
    
    UFortSchematicItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetResultWorldItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRecipe GetRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuantityProduced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCraftingTimeForCharacter(int32 Level, const AFortPlayerPawn* FortPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCraftingTime(int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetCraftingSuccessSound() const;
    
};

