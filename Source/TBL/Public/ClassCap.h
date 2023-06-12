#pragma once
#include "CoreMinimal.h"
#include "EAudioClassType.h"
#include "ClassCap.generated.h"

USTRUCT(BlueprintType)
struct FClassCap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNum;
    
    TBL_API FClassCap();
};

