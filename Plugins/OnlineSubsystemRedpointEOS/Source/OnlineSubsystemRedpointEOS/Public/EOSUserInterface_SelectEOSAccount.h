#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOSUserInterface_CandidateEOSAccount.h"
#include "EOSUserInterface_SelectEOSAccount.generated.h"

class UEOSUserInterface_SelectEOSAccount_Context;

UINTERFACE(Blueprintable, MinimalAPI)
class UEOSUserInterface_SelectEOSAccount : public UInterface {
    GENERATED_BODY()
};

class IEOSUserInterface_SelectEOSAccount : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupUserInterface(UEOSUserInterface_SelectEOSAccount_Context* Context, const TArray<FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates);
    
};

