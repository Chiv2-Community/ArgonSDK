#include "ObjectsByClassList.h"

void UObjectsByClassList::RefreshList() {
}

UObjectsByClassList::UObjectsByClassList() {
    this->ItemHeight = 16.00f;
    this->SelectionMode = ESelectionMode::Single;
    this->ClassToList = NULL;
}

