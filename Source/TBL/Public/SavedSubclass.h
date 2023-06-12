#pragma once
#include "CoreMinimal.h"
#include "SavedSubclass.generated.h"

class ATBLCharacter;

USTRUCT(BlueprintType)
struct FSavedSubclass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATBLCharacter> ParentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATBLCharacter> Subclass;
    
    TBL_API FSavedSubclass();
};

