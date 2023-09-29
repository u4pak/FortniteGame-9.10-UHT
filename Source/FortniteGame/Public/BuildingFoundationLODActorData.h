#pragma once
#include "CoreMinimal.h"
#include "BuildingFoundationLODActorData.generated.h"

class ALODActor;
class UMaterialInstanceDynamic;
class UTexture2DDynamic;

USTRUCT(BlueprintType)
struct FBuildingFoundationLODActorData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALODActor> LODActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* VisibilityMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* VisibilityTexture;
    
    FORTNITEGAME_API FBuildingFoundationLODActorData();
};

