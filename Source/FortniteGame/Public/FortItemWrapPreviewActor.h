#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortUICameraFrameTargetInterface.h"
#include "ItemWrapPreviewEntry.h"
#include "FortItemWrapPreviewActor.generated.h"

class UAthenaItemWrapDefinition;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AFortItemWrapPreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemWrapPreviewEntry CurrentEntryInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* MyWrap;
    
public:
    AFortItemWrapPreviewActor();
protected:
    UFUNCTION(BlueprintCallable)
    void StartLoadingNextPreviewActor(int32 SlotIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewItemWrap(const UAthenaItemWrapDefinition* ItemWrap);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewSkeletalMeshLoaded(USkeletalMesh* LoadedMesh, const FItemWrapPreviewEntry& EntryInfo);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWrapToSkelMesh(USkeletalMeshComponent* MeshComp);
    
    
    // Fix for true pure virtual functions not being implemented
};

