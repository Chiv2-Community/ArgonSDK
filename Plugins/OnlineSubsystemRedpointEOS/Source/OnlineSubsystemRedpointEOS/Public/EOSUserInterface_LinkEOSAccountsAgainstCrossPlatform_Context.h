#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSUserInterface_CandidateEOSAccount.h"
#include "EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.generated.h"

UCLASS(Blueprintable)
class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context : public UObject {
    GENERATED_BODY()
public:
    UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context();
    UFUNCTION(BlueprintCallable)
    void SelectedCandidates(TArray<FEOSUserInterface_CandidateEOSAccount> NewSelectedCandidates);
    
};

