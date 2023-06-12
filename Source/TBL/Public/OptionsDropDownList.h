#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/Widget.h"
#include "OnGenerateEntryDelegate.h"
#include "OptionsDropDownList.generated.h"

class UDropDownListItem;

UCLASS(Blueprintable)
class UOptionsDropDownList : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDropDownListItem*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateEntry OnGenerateRowEvent;
    
    UOptionsDropDownList();
    UFUNCTION(BlueprintCallable)
    void SetItemSelection(UPARAM(Ref) UDropDownListItem*& InItem, bool bSelected, TEnumAsByte<ESelectInfo::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetSelectedWidget();
    
    UFUNCTION(BlueprintCallable)
    int32 AddItem(FText Text, int32 Index);
    
};

