#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterControlTable.generated.h"

USTRUCT(BlueprintType)
struct FCharacterControlTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalTurnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalTurnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    TBL_API FCharacterControlTable();
};

