#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "FortAccountItem.h"
#include "FortCardPackItem.generated.h"

class UFortAccountItemDefinition;
class UFortItem;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCardPackItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString pack_source;
    
    UFortCardPackItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChoicePack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChoices(TArray<UFortAccountItemDefinition*>& Choices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChoiceItems(TArray<UFortItem*>& ChoiceAttributes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStoreOpen() const;
    
};

