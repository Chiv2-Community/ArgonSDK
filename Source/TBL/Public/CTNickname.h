#pragma once
#include "CoreMinimal.h"
#include "CTBase.h"
#include "CTNickname.generated.h"

UCLASS(Blueprintable)
class TBL_API UCTNickname : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Nickname;
    
    UCTNickname();
};

