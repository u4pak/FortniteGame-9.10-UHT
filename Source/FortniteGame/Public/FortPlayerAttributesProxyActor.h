#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "FortPlayerAttributeSets.h"
#include "FortPlayerAttributesProxyActor.generated.h"

class UFortAbilitySystemComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerAttributesProxyActor : public AActor, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerAttributeSets AttributeSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
public:
    AFortPlayerAttributesProxyActor();
    
    // Fix for true pure virtual functions not being implemented
};

