#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortDamageSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortDamageSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OutgoingBaseDamage, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData OutgoingBaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OutgoingBaseEnvironmentalDamage, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData OutgoingBaseEnvironmentalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OutgoingBaseImpactDamage, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData OutgoingBaseImpactDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OutgoingAbilityDamage, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData OutgoingAbilityDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OutgoingBaseAbilityDamageMultiplier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData OutgoingBaseAbilityDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ZoneCritMultiplier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ZoneCritMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DiceCritChance, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData DiceCritChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DiceCritMultiplier, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData DiceCritMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_KnockbackMagnitude, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData KnockbackMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_KnockbackZAngle, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData KnockbackZAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StunTime, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData StunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponSkill, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData WeaponSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData CritRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxMeleeComboLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShieldDamageScale, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ShieldDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthDamageScale, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData HealthDamageScale;
    
public:
    UFortDamageSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ZoneCritMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponSkill();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StunTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShieldDamageScale();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OutgoingBaseImpactDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OutgoingBaseEnvironmentalDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OutgoingBaseDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OutgoingBaseAbilityDamageMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OutgoingAbilityDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_KnockbackZAngle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_KnockbackMagnitude();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthDamageScale();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DiceCritMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DiceCritChance();
    
};

