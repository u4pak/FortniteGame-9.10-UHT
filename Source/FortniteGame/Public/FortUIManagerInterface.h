#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortUIManagerInterface.generated.h"

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortUIManagerInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortUIManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KillConfirmation();
    
};

