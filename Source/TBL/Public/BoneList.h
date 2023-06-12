#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BoneList.generated.h"

UCLASS(Blueprintable)
class UBoneList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Bones;
    
    UBoneList();
};

