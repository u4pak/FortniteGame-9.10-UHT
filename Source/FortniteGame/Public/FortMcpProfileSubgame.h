#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "FortMcpProfile.h"
#include "FortQuestObjectiveCompletion.h"
#include "FortSubgameClientSettings.h"
#include "FortMcpProfileSubgame.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileSubgame : public UFortMcpProfile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSubgameClientSettings CachedClientSettings;
    
public:
    UFortMcpProfileSubgame();
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UpdateQuests(const TArray<FFortQuestObjectiveCompletion>& Advance, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UpdateQuestClientObjectives(const TArray<FFortQuestObjectiveCompletion>& Advance, UPARAM(NotReplicated) FClientUrlContext& Context);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetPinnedQuests(const TArray<FString>& PinnedQuestIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetItemFavoriteStatusBatch(const TArray<FString>& ItemIds, const TArray<bool>& itemFavStatus, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetItemFavoriteStatus(const FString& TargetItemId, bool bFavorite, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ServerQuestLogin(const FString& MatchmakingSessionId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void MarkNewQuestNotificationSent(const TArray<FString>& ItemIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void FortRerollDailyQuest(const FString& QuestId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ClientQuestLogin(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ClaimQuestReward(const FString& QuestId, int32 SelectedRewardIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    
};

