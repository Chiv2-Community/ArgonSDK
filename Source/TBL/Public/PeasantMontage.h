#pragma once
#include "CoreMinimal.h"
#include "PeasantMontage.generated.h"

USTRUCT(BlueprintType)
struct FPeasantMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    TBL_API FPeasantMontage();
};

