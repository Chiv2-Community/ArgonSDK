#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TBLButtonAnimation_deprecated.h"
#include "TBLMaterialButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTBLMaterialButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTBLMaterialButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetStartingInterpProgress(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayButtonAnimation(FTBLButtonAnimation_deprecated InAnimation, bool ReverseAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateMaterial(FName MaterialParamName, float InProgress);
    
};

