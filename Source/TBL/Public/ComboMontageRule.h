#pragma once
#include "CoreMinimal.h"
#include "ComboMontageRule.generated.h"

USTRUCT(BlueprintType)
struct FComboMontageRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousComboState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextComboState;
    
    TBL_API FComboMontageRule();
};
FORCEINLINE uint32 GetTypeHash(const FComboMontageRule) { return 0; }

