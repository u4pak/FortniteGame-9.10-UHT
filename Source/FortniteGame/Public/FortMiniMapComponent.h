#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortMiniMapData.h"
#include "FortVisibilityComponent.h"
#include "FortMiniMapComponent.generated.h"

class UFortMiniMapIndicator;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMiniMapComponent : public UFortVisibilityComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MiniMapData, meta=(AllowPrivateAccess=true))
    FFortMiniMapData MiniMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* LocalMinimapIconOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortMiniMapIndicator> MinimapIndicator;
    
public:
    UFortMiniMapComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetupMiniMapComponent(UTexture2D* MiniMapIcon, FLinearColor IconColor, FLinearColor PulseColor, float ColorPulsesPerSecond, float SizePulsesPerSecond);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMinimapViewableDistance(float ViewDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapLocationOffset(const FVector& LocationOffset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapIndicatorIsVisibleOnMiniMap(bool bVisibleOnMiniMap);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapIndicatorIsVisible(bool bVisible);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapIconSizePulsesPerSecond(float SizePulsesPerSecond);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapIconScale(const FVector2D& IconScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapIconPulseColor(FLinearColor PulseColor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapIconColorPulsesPerSecond(float ColorPulsesPerSecond);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapIconColor(FLinearColor InColor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapIcon(UTexture2D* MiniMapIcon);
    
    UFUNCTION(BlueprintCallable)
    void OverrideLocalMiniMapIndicatorIsVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void OverrideLocalMiniMapIcon(UTexture2D* MiniMapIcon);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MiniMapData();
    
};

