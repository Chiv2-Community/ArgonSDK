#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UserFeedback.h"
#include "UserFeedbackAndBugReportsLibrary.generated.h"

class UObject;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class UUserFeedbackAndBugReportsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUserFeedbackAndBugReportsLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SubmitUserFeedback(UObject* WorldContextObject, const FUserFeedback& Report, bool bIncludeHardwareInfo);
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserHashedID();
    
    UFUNCTION(BlueprintCallable)
    static FString GetHardwareInformation();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGameInfo(UWorld* World);
    
};

