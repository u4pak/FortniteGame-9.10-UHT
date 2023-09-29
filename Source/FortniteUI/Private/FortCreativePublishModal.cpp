#include "FortCreativePublishModal.h"

void UFortCreativePublishModal::PublishMyCurrentCreativePlot(FCreativePublishOptions MyPublishOptions) {
}



void UFortCreativePublishModal::OnPublishedLinksChanged(const FString& ErrorCode, const FString& Mnemonic) {
}






void UFortCreativePublishModal::HandleSubmitClicked() {
}

void UFortCreativePublishModal::HandleNameTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommittMethod) {
}

void UFortCreativePublishModal::HandleNameTextChanged(const FText& Text) {
}

void UFortCreativePublishModal::HandleDescriptionTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommittMethod) {
}

void UFortCreativePublishModal::HandleDescriptionTextChanged(const FText& Text) {
}

void UFortCreativePublishModal::HandleCopyCode() {
}

void UFortCreativePublishModal::HandleCodeConfirmation() {
}

UFortCreativePublishModal::UFortCreativePublishModal() {
    this->DescriptionEntryCharLimit = 150;
    this->NameEntryCharLimit = 35;
    this->bFakePublishingFlow = false;
    this->DescriptionTextOkForSubmit = true;
    this->NameTextOkForSubmit = false;
    this->Container_YoutubeStuff = NULL;
    this->Switcher_Content = NULL;
    this->Text_IslandCode = NULL;
    this->Text_ErrorInNameField = NULL;
    this->Text_ErrorInDescriptionField = NULL;
    this->Text_ErrorOnPublish = NULL;
    this->Text_CharCountTitle = NULL;
    this->Text_CharCountDesc = NULL;
    this->Text_IslandPublishedSuccess = NULL;
    this->Button_Submit = NULL;
    this->Button_CopyCode = NULL;
    this->EditText_Name = NULL;
    this->MultiLineEditText_Description = NULL;
    this->EditText_Description = NULL;
    this->EditText_YoutubeVideoId = NULL;
    this->VolumeToPublish = NULL;
}

