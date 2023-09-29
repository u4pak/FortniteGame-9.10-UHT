#include "FortCollectionBookProgressWidget.h"

void UFortCollectionBookProgressWidget::OnSlottedItemOperationComplete(const UFortAccountItem* ItemSlotted, FName SlotId) {
}

void UFortCollectionBookProgressWidget::OnCollectionBookPreviewXPChange_Implementation(float PreviewCompletionPct) {
}

void UFortCollectionBookProgressWidget::OnCollectionBookPageSelected_Implementation(const UFortCollectionBookPage* SelectedPage) {
}

void UFortCollectionBookProgressWidget::OnCollectionBookLevelProgressionChanged_Implementation(float NewCompletionPct) {
}

void UFortCollectionBookProgressWidget::OnCollectionBookLevelChanged_Implementation(int32 NewLevel) {
}

void UFortCollectionBookProgressWidget::HandleDetailsModalWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel) {
}

UFortCollectionBookProgressWidget::UFortCollectionBookProgressWidget() {
    this->CachedXPLevel = -1;
    this->CachedXPCompletionPct = -1.00f;
    this->ProgressionRewardsPreviewWidget = NULL;
    this->XPTextWidget = NULL;
    this->LevelTextWidget = NULL;
    this->DetailsButtonWidget = NULL;
    this->PageDetailsWidget = NULL;
    this->DetailsModalWidget = NULL;
}

