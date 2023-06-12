#pragma once
#include "CoreMinimal.h"
#include "TBLGameMode.h"
#include "Templates/SubclassOf.h"
#include "TutorialGameMode.generated.h"

class AActor;
class ULoadoutSelection;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ATutorialGameMode : public ATBLGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OverridePlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULoadoutSelection> OverrideLoadout;
    
    ATutorialGameMode();
    UFUNCTION(BlueprintCallable)
    void SetPlayerStart(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadout(TSubclassOf<ULoadoutSelection> Loadout);
    
};

