#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayAttribute.h"
#include "GameplayTagContainer.h"
#include "FortAttributeInitializationKey.h"
#include "FortDamageSourceInterface.h"
#include "FortWorldItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "FortGadgetItemDefinition.generated.h"

class UAttributeSet;
class UCustomCharacterPart;
class UFortAbilitySet;
class UFortAnimInstance;
class UFortFootstepAudioBank;
class UFortGameplayAbility;
class UFortWeaponItemDefinition;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGadgetItemDefinition : public UFortWorldItemDefinition, public IFortDamageSourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GadgetPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyGadgetWhenTrackedAttributesIsZero: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasChargeUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDropAllOnEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanChangePreviewImageDuringGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CharacterParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortAnimInstance> AnimBPOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFootstepAudioBank> FootstepBankOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilitySet> AbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAttributeSet> AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> TrackedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> OnDestroyParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> OnDestroySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OnDestroyAttachToSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortGameplayAbility> GameplayAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDVisibilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWeaponItemDefinition> WeaponItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidForLastEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute LevelAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeId;
    
public:
    UFortGadgetItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTrackedAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasChargeUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWeaponItemDefinition* GetWeaponItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAttribute GetLevelAttribute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortGameplayAbility> GetGameplayAbility() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

