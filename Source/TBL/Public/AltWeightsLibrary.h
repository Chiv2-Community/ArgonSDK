#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AltWeightsState.h"
#include "AltWeightsLibrary.generated.h"

class ACharacter;
class USkinnedMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class UAltWeightsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAltWeightsLibrary();
    UFUNCTION(BlueprintCallable)
    static bool UpdateSkinWeightsOverride(USkinnedMeshComponent* InComp, FName InBoneName, UPARAM(Ref) FAltWeightsState& InOutState);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSkinWeightsOverride(USkinnedMeshComponent* InComp, const FAltWeightsState& InState);
    
    UFUNCTION(BlueprintCallable)
    static bool InitSkinWeightsState(USkinnedMeshComponent* InComp, UPARAM(Ref) FAltWeightsState& InState);
    
    UFUNCTION(BlueprintCallable)
    static void InitPawnAltWeightsState(ACharacter* Char);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllSkinWeightsOverride(USkinnedMeshComponent* InComp);
    
};

