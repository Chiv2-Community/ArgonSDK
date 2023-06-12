#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "ChatInputEditableTextBox.generated.h"

UCLASS(Blueprintable)
class UChatInputEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UChatInputEditableTextBox();
};

