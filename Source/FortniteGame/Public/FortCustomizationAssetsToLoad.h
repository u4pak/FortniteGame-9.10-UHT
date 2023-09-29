#pragma once
#include "CoreMinimal.h"
#include "FortCustomizationAssetsToLoad.generated.h"

class UCustomCharacterPart;
class UFortHeroType;
class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortCustomizationAssetsToLoad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortHeroType*> HeroTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CharacterParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> ItemDefs;
    
    FORTNITEGAME_API FFortCustomizationAssetsToLoad();
};

