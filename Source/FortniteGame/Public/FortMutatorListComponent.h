#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMutatorListInitState.h"
#include "OnMutatorListSettingsChangedDelegate.h"
#include "OnMutatorListSettingsInitializedDelegate.h"
#include "PropertyOverrideData.h"
#include "Templates/SubclassOf.h"
#include "FortMutatorListComponent.generated.h"

class AFortGameplayMutator;
class AFortVolume;
class APlayerState;
class UPlaylistUserOptions;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMutatorListComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMakeMutatorsDormant;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMutatorListInitState InitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AFortGameplayMutator>> MutatorDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptions* UserOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortGameplayMutator*> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutatorListSettingsInitialized OnSettingsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutatorListSettingsChanged OnSettingsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PropertyOverrideArray, meta=(AllowPrivateAccess=true))
    FPropertyOverrideData PropertyOverrideArray;
    
    UFortMutatorListComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterMinigameMutators();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPropertyOverrides(const TMap<FString, FString>& Properties);
    
    UFUNCTION(BlueprintCallable)
    void SetMutatorsActive(bool bActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterMinigameMutators();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PropertyOverrideArray();
    
    UFUNCTION(BlueprintCallable)
    void OnClientExitVolume(APlayerState* InPlayerState, AFortVolume* InVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnClientEnterVolume(APlayerState* InPlayerState, AFortVolume* InVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortGameplayMutator* GetMutatorByClass(TSubclassOf<AFortGameplayMutator> MutatorClass) const;
    
};

