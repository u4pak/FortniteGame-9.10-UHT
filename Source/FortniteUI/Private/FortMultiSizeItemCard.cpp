#include "FortMultiSizeItemCard.h"

bool UFortMultiSizeItemCard::ShouldUseNewItemCards() {
    return false;
}

void UFortMultiSizeItemCard::SetShouldSuppressItemTypeIcon(const bool Value) {
}

void UFortMultiSizeItemCard::SetShouldDisplayItemAsReward(const bool Value) {
}

void UFortMultiSizeItemCard::SetShouldCollapseItem(const bool Value) {
}

void UFortMultiSizeItemCard::SetShouldCollapseBorderPadding(const bool Value) {
}

void UFortMultiSizeItemCard::SetRarityOverride(const EFortRarity NewRarityOverride) {
}

void UFortMultiSizeItemCard::SetQuantityOverride(const int32 NewQuantityOverride) {
}

void UFortMultiSizeItemCard::SetEmptyItemType(const EFortItemType NewEmptyItemType) {
}

void UFortMultiSizeItemCard::SetCardSize(const EFortItemCardSize CardSize) {
}

EFortItemCardSize UFortMultiSizeItemCard::GetCardSize() const {
    return EFortItemCardSize::XXS;
}

UFortMultiSizeItemCard::UFortMultiSizeItemCard() {
    this->BPItemCardSize = EFortItemCardSize::XXS;
    this->ShouldDisplayItemAsReward = false;
    this->QuantityOverride = -1;
    this->RarityOverride = EFortRarity::NumRarityValues;
    this->EmptyItemType = EFortItemType::WorldItem;
    this->ShouldSuppressItemTypeIcon = false;
    this->ShouldSuppressTierMeter = false;
    this->ShouldCollapseBorderPadding = false;
    this->ShouldCollapseItem = false;
}

