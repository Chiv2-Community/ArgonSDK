#pragma once
#include "CoreMinimal.h"
#include "ClassCap.h"
#include "EAudioClassType.h"
#include "GlobalMapModifiers.generated.h"

USTRUCT(BlueprintType)
struct FGlobalMapModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClassCap> ClassCaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAudioClassType::Type>> ClassesAllowed;
    
    TBL_API FGlobalMapModifiers();
};

