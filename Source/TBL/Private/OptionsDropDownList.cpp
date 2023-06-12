#include "OptionsDropDownList.h"

void UOptionsDropDownList::SetItemSelection(UDropDownListItem*& InItem, bool bSelected, TEnumAsByte<ESelectInfo::Type> Type) {
}

void UOptionsDropDownList::RemoveAllItems() {
}

UWidget* UOptionsDropDownList::GetSelectedWidget() {
    return NULL;
}

int32 UOptionsDropDownList::AddItem(FText Text, int32 Index) {
    return 0;
}

UOptionsDropDownList::UOptionsDropDownList() {
    this->ItemHeight = 16.00f;
}

