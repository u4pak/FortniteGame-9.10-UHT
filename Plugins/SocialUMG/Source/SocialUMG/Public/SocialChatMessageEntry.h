#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserListEntry.h"
#include "Blueprint/UserWidget.h"
#include "SocialChatMessageEntryStyle.h"
#include "SocialChatMessageEntry.generated.h"

class UButton;
class UHorizontalBox;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialChatMessageEntry : public UUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialChatMessageEntryStyle DefaultStyle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_SenderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_MessageButton;
    
public:
    USocialChatMessageEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

