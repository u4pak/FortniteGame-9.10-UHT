#pragma once
#include "CoreMinimal.h"
#include "AthenaDanceItemDefinition.h"
#include "PetSyncedDanceItemDefinition.generated.h"

class UAnimMontage;
class UAthenaPetItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UPetSyncedDanceItemDefinition : public UAthenaDanceItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> DefaultPetAnimation;
    
public:
    UPetSyncedDanceItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetPetAnimation(const UAthenaPetItemDefinition* PetItemDef) const;
    
};

