#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EFortDisplayTier.h"
#include "EFortWeaponTriggerType.h"
#include "FortWorldItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "FortWeaponItemDefinition.generated.h"

class AFortWeapon;
class AFortWeaponAsyncLoadHelper;
class UCurveFloat;
class UCustomCharacterPart;
class UFortAlterationItemDefinition;
class UFortGameplayAbility;
class USkeletalMesh;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortWeaponItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortWeapon> WeaponActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> WeaponMeshOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle WeaponStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlterationSlotsLoadoutRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaselineAlterationSlotsLoadoutRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAlterationItemDefinition> BaseAlteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAlterationItemDefinition> BaseCosmeticAlteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortGameplayAbility> PrimaryFireAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortGameplayAbility> SecondaryFireAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortGameplayAbility> ReloadAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortGameplayAbility> OnHitAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UFortGameplayAbility>> EquippedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> EquippedCharacterParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> AmmoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowAmmoPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DegradedPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortWeaponTriggerType::Type> TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortDisplayTier DisplayTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesCustomAmmoType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowTargetingDuringReload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTargetingPreventsReload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysChargeUpToMin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReticleCornerOutsideSpreadRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bValidForLastEquipped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPreventDefaultPreload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitNotifyDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ReticleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ReticleAutoFireImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ReticleCornerAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> HitNotifyImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> HitNotifyLocationImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MuzzleBlockedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ReticleAltCenterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ReticleOuterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ReticleAltOuterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ReticleCenterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ReticleCenterPerfectAimImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ReticleCenterImageOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ReticleInvalidTargetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> HitNotifyOpacityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnalyticTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActualAnalyticFNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortWeaponAsyncLoadHelper* AsyncLoadHelper;
    
public:
    UFortWeaponItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetingPreventsReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAllowTargetingDuringReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUniqueAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetWeaponStatHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetWeaponMeshOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFortWeapon> GetWeaponActorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsesCustomAmmoType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EFortWeaponTriggerType::Type> GetTriggerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShortDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortGameplayAbility> GetSecondaryFireAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetReticleOuterImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetReticleInvalidTargetImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetReticleImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetReticleCornerAngles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetReticleCenterPerfectAimImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetReticleCenterImageOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetReticleCenterImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetReticleAutoFireImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetReticleAltOuterImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetReticleAltCenterImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortGameplayAbility> GetReloadAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortGameplayAbility> GetPrimaryFireAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortGameplayAbility> GetOnHitAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetMuzzleBlockedImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLowAmmoPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveFloat* GetHitNotifyOpacityCurve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetHitNotifyLocationImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetHitNotifyImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHitNotifyDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UFortGameplayAbility>> GetEquippedAbilities() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDisplayTierAsText(const EFortDisplayTier NewDisplayTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortDisplayTier GetDisplayTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDegradedPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAlterationItemDefinition* GetBaseCosmeticAlteration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAlterationItemDefinition* GetBaseAlteration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAnalyticTags() const;
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadWeaponMeshOverride(AFortWeaponAsyncLoadHelper* InAsyncLoadHelper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AlwaysChargeUpToMin() const;
    
};

