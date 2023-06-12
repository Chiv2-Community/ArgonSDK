#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnGenerateCheckboxDelegate.h"
#include "OnGenerateComboBoxDelegate.h"
#include "OnGenerateKeybindDelegate.h"
#include "OnGenerateSliderDelegate.h"
#include "OnGenerateSubcategoryHeaderDelegate.h"
#include "OnItemSelectedDelegate.h"
#include "OptionsList.generated.h"

class UObject;
class UOptionsScreenCategory;
class UTBLScrollBarStyleDataAsset;

UCLASS(Blueprintable)
class UOptionsList : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionsScreenCategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TableRowStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateSubcategoryHeader OnGenerateSubcategoryHeaderEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateCheckbox OnGenerateCheckboxEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateSlider OnGenerateSliderEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateComboBox OnGenerateComboBoxEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateKeybind OnGenerateKeybindEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelected OnItemSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLScrollBarStyleDataAsset* ScrollBarStyle;
    
public:
    UOptionsList();
    UFUNCTION(BlueprintCallable)
    void SetCategory(UOptionsScreenCategory* InCategory);
    
    UFUNCTION(BlueprintCallable)
    void SelectWidget(UObject* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstEntryInSubcategory(const UObject* Object) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstEntry(const UObject* Object) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetSelectedWidget();
    
};

