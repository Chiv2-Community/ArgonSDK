#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSUserInterface_CandidateEOSAccount.h"
#include "EOSUserInterface_SelectEOSAccount_Context.generated.h"

UCLASS(Blueprintable)
class UEOSUserInterface_SelectEOSAccount_Context : public UObject {
    GENERATED_BODY()
public:
    UEOSUserInterface_SelectEOSAccount_Context();
    UFUNCTION(BlueprintCallable)
    void SelectCandidate(FEOSUserInterface_CandidateEOSAccount SelectedCandidate);
    
};

