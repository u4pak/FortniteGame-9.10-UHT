#include "FortAlterationWidget.h"

void UFortAlterationWidget::Setup(UFortAlterationInfo* InAlterationInfo) {
}


UFortAlterationInfo* UFortAlterationWidget::GetAlterationInfo() const {
    return NULL;
}

UFortAlterationWidget::UFortAlterationWidget() {
    this->MaxPipCount = 0.00f;
    this->AlterationInfo = NULL;
}

