#include "FortCreativeOption.h"

void UFortCreativeOption::SetCurrentIndex(int32 Index) {
}

void UFortCreativeOption::IncrementIndexWithWrap() {
}

int32 UFortCreativeOption::GetValueAtIndex(int32 Index) {
    return 0;
}

int32 UFortCreativeOption::GetValueAtCurrentIndex() {
    return 0;
}

int32 UFortCreativeOption::GetCurrentIndex() {
    return 0;
}

FText UFortCreativeOption::GetCreativeOptionTextAtIndex(int32 Index) {
    return FText::GetEmpty();
}

FText UFortCreativeOption::GetCreativeOptionTextAtCurrent() {
    return FText::GetEmpty();
}

void UFortCreativeOption::DecrementIndexWithWrap() {
}

UFortCreativeOption::UFortCreativeOption() {
    this->MenuListType = UFortMatchmakingKnobsDataSource::CreativeGlobalOption;
    this->CurrentIndex = 0;
}

