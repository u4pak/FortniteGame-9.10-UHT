#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Particles/EmitterCameraLensEffectBase.h"
#include "FortEmitterCameraLensEffectDirectional.generated.h"

class AFortPawn;

UCLASS(Blueprintable)
class AFortEmitterCameraLensEffectDirectional : public AEmitterCameraLensEffectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* DamageInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DamageInstigatorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotationParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    AFortEmitterCameraLensEffectDirectional();
    UFUNCTION(BlueprintCallable)
    void SetTint(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetStrength(float InStrength);
    
};

