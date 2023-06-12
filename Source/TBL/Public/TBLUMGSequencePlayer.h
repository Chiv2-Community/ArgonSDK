#pragma once
#include "CoreMinimal.h"
#include "Animation/UMGSequencePlayer.h"
#include "TBLUMGSequencePlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTBLUMGSequencePlayer : public UUMGSequencePlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingAdvancedAnimation;
    
public:
    UTBLUMGSequencePlayer();
};

