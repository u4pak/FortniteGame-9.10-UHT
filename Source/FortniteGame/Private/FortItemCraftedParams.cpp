#include "FortItemCraftedParams.h"

void UFortItemCraftedParams::SetParams(const UFortSchematicItemDefinition* _SchematicDefinition, AFortPlayerController* _CraftedBy, int32 _AmountCrafted, bool _bItemWasQuickCrafted, UFortItemCraftedParams*& ThisParam) {
}

void UFortItemCraftedParams::BreakParams(UFortSchematicItemDefinition*& _SchematicDefinition, AFortPlayerController*& _CraftedBy, int32& _AmountCrafted, bool& _bItemWasQuickCrafted) {
}

UFortItemCraftedParams::UFortItemCraftedParams() {
    this->SchematicDefinition = NULL;
    this->CraftedBy = NULL;
    this->AmountCrafted = 0;
    this->bItemWasQuickCrafted = false;
}

