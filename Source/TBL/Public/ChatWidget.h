#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "AddedChatLineSignatureDelegate.h"
#include "ChangeAlwaysVisibleDelegate.h"
#include "EnterInputModeSignatureDelegate.h"
#include "EnterLastChannelInputModeSignatureDelegate.h"
#include "OnGenerateRowChatLineDelegate.h"
#include "ChatWidget.generated.h"

UCLASS(Blueprintable, Config=Game)
class TBL_API UChatWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddedChatLineSignature OnAddedChatLine;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnterInputModeSignature OnEnterInputMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeAlwaysVisible OnChangedAlwaysVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnterLastChannelInputModeSignature OnEnterLastChannelInputMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTimestamps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAbbreviatedChatHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetBool bUseAbbreviatedChatHistoryDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsToConsiderMessageFresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateRowChatLine OnGenerateRowEvent;
    
    UChatWidget();
    UFUNCTION(BlueprintCallable)
    void UsedChat();
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysVisible(bool InAlwaysVisible);
    
};

