#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAudioClassType.h"
#include "DefaultWeaponDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDefaultWeaponDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WeaponDefIds;
    
    TBL_API FDefaultWeaponDataTable();
};

