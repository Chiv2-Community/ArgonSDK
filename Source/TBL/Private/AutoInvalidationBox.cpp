#include "AutoInvalidationBox.h"

UAutoInvalidationBox::UAutoInvalidationBox() {
    this->UpdateWeight = 1;
    this->UpdateCategory = EStaggeredUpdateCategory::Widget;
}

