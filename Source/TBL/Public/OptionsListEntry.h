#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "OptionsListEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOptionsListEntry : public UUserWidget {
    GENERATED_BODY()
public:
    UOptionsListEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSelected(const TEnumAsByte<ESelectInfo::Type> SelectInfo);
    
};

