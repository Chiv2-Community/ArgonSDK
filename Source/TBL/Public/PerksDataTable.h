#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDisplayPerk.h"
#include "Templates/SubclassOf.h"
#include "PerksDataTable.generated.h"

class ATBLCharacter;
class UTexture2D;

USTRUCT(BlueprintType)
struct FPerksDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplayPerk DisplayLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATBLCharacter>> Subclasses;
    
    TBL_API FPerksDataTable();
};

