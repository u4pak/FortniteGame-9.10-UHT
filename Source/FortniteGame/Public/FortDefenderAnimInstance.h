#pragma once
#include "CoreMinimal.h"
#include "EFortCustomGender.h"
#include "FortAIAnimInstance.h"
#include "FortDefenderAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortDefenderAnimInstance : public UFortAIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomGender::Type> Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldWalkRightFootForward: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedAdjustedPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuthoredJogSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuthoredWalkSpeed;
    
public:
    UFortDefenderAnimInstance();
};

