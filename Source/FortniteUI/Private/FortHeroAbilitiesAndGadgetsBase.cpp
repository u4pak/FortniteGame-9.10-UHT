#include "FortHeroAbilitiesAndGadgetsBase.h"

void UFortHeroAbilitiesAndGadgetsBase::Refresh(UFortCampaignHeroLoadoutItem* HeroLoadout) {
}

UFortHeroAbilitiesAndGadgetsBase::UFortHeroAbilitiesAndGadgetsBase() {
    this->bHideAbilities = false;
    this->bHideGadgets = false;
    this->AssignedMemberIndex = -1;
    this->HorizontalAbilitiesList = NULL;
    this->GadgetsWidget = NULL;
}

