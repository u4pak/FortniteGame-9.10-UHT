#include "FortMusicTimeOfDayBank.h"

UFortMusicAsset* UFortMusicTimeOfDayBank::GetAssetFromDayPhase(TEnumAsByte<EFortDayPhase::Type> DayPhase) const {
    return NULL;
}

UFortMusicTimeOfDayBank::UFortMusicTimeOfDayBank() {
    this->Assets[0] = NULL;
    this->Assets[1] = NULL;
    this->Assets[2] = NULL;
    this->Assets[3] = NULL;
}

