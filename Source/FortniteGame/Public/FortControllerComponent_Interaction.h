#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "TInteractionType.h"
#include "FortControllerComponent_Interaction.generated.h"

class AActor;
class UAudioComponent;
class UFortInteractContextInfo;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_Interaction : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* LongInteractAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortInteractContextInfo* PossibleInteractContextInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortInteractContextInfo* InteractResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractActor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterInteractrTracesBehindMyFortPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MobileUpdateCachedInteractActorsCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileUpdateCachedInteractActorsCooldownLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTapInteractEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHoldingUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRetryUse;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRetryUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldBlockInteractionsForAllVehiclePassengers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortInteractContextInfo* AutoDoorInteractResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CurrentlyHighlightedActors;
    
public:
    UFortControllerComponent_Interaction();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttemptInteract(AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, TEnumAsByte<TInteractionType> InteractType, UObject* OptionalObjectData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortInteractContextInfo* K2_GetInteractResponse();
    
    UFUNCTION(BlueprintCallable)
    void FixupInteractionWidgetsOnUnzoom();
    
};

