#include "OptionsList.h"

void UOptionsList::SetCategory(UOptionsScreenCategory* InCategory) {
}

void UOptionsList::SelectWidget(UObject* Item) {
}

bool UOptionsList::IsFirstEntryInSubcategory(const UObject* Object) const {
    return false;
}

bool UOptionsList::IsFirstEntry(const UObject* Object) const {
    return false;
}

UWidget* UOptionsList::GetSelectedWidget() {
    return NULL;
}

UOptionsList::UOptionsList() {
    this->ItemHeight = 16.00f;
    this->Category = NULL;
    this->ScrollBarStyle = NULL;
}

