#include "FortCollectionBookProgressionRewardsModalWidget.h"

void UFortCollectionBookProgressionRewardsModalWidget::OnSelectedButtonChanged(UCommonButton* SelectedButton, int32 ButtonIndex) {
}

void UFortCollectionBookProgressionRewardsModalWidget::OnLevelProgressionSet_Implementation(int32 CurrentLevel, float NextLvlPct, int32 MaxAchievedLevel) {
}

void UFortCollectionBookProgressionRewardsModalWidget::OnInputMethodChanged(bool bUsingGamepad) {
}


UFortCollectionBookProgressionRewardsModalWidget::UFortCollectionBookProgressionRewardsModalWidget() {
    this->NumRewardsToShow = 5;
    this->RewardBoxWidget = NULL;
    this->MajorRewardBoxWidget = NULL;
    this->XPTextWidget = NULL;
    this->LevelTextWidget = NULL;
    this->ButtonGroup = NULL;
}

