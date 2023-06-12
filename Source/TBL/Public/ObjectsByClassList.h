#pragma once
#include "CoreMinimal.h"
#include "Framework/Views/ITypedTableView.h"
#include "Components/Widget.h"
#include "OnGenerateRowObjectByClassDelegate.h"
#include "ObjectsByClassList.generated.h"

UCLASS(Blueprintable)
class UObjectsByClassList : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassToList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateRowObjectByClass OnGenerateRowEvent;
    
    UObjectsByClassList();
    UFUNCTION(BlueprintCallable)
    void RefreshList();
    
};

