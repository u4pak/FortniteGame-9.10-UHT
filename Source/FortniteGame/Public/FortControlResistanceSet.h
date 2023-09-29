#pragma once
#include "CoreMinimal.h"
#include "TickableAttributeSetInterface.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortControlResistanceSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortControlResistanceSet : public UFortAttributeSet, public ITickableAttributeSetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControlResistance, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ControlResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxControlResistance, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxControlResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ControlResistanceRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ControlResistanceRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ControlResistanceRegenThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData KnockbackThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData KnockbackMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ImpactDamageResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ImpactDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ImpactDamage;
    
    UFortControlResistanceSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxControlResistance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlResistance();
    
    
    // Fix for true pure virtual functions not being implemented
};

