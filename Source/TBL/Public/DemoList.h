#pragma once
#include "CoreMinimal.h"
#include "Framework/Views/ITypedTableView.h"
#include "Components/Widget.h"
#include "OnGenerateRowStreamEntryDelegate.h"
#include "DemoList.generated.h"

UCLASS(Blueprintable)
class UDemoList : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateRowStreamEntry OnGenerateRowEvent;
    
    UDemoList();
    UFUNCTION(BlueprintCallable)
    void RefreshDemoList();
    
};

