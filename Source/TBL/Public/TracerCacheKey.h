#pragma once
#include "CoreMinimal.h"
#include "TracerCacheKey.generated.h"

USTRUCT(BlueprintType)
struct FTracerCacheKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    TBL_API FTracerCacheKey();
};
FORCEINLINE uint32 GetTypeHash(const FTracerCacheKey) { return 0; }

