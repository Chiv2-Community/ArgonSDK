#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETBLPS5HapticType.h"
#include "TBLPS5HapticsAnimNotify.generated.h"

class UTBLPS5HapticsContainer;

UCLASS(Blueprintable, CollapseCategories)
class UTBLPS5HapticsAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETBLPS5HapticType PS5HapticType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTBLPS5HapticsContainer> PS5HapticsEffect;
    
    UTBLPS5HapticsAnimNotify();
};

