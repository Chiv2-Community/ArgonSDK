#pragma once
#include "CoreMinimal.h"
#include "DialogHandle.h"
#include "EDialogButtons.h"
#include "EDialogTypes.h"
#include "TBLScreenWidget.h"
#include "TBLDialogWidget.generated.h"

class ULocalPlayer;

UCLASS(Blueprintable, EditInlineNew)
class UTBLDialogWidget : public UTBLScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogTypes DialogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogHandle DialogHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalPlayer* m_pLocalOwningPlayer;
    
    UTBLDialogWidget();
    UFUNCTION(BlueprintCallable)
    void ProcessButtonClick(EDialogButtons ButtonClicked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDialogHandle GetDialogHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeText(const FText& Title, const FText& Body);
    
};

