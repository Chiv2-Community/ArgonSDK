#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "CustomizationConfig.generated.h"

class ACustomizationAttachment;
class UCustomizationComponent;
class UMaterialInstanceDynamic;
class UMeshComponent;
class UTexture;

UCLASS(Abstract, Blueprintable)
class UCustomizationConfig : public UObject {
    GENERATED_BODY()
public:
    UCustomizationConfig();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void GetParametersAndMorphTargetsToApply(FName Category, int32 SelectedSwatch, TArray<FName>& ScalarNames, TArray<float>& ScalarValues, TArray<FName>& VectorNames, TArray<FLinearColor>& VectorValues, TArray<FName>& TextureNames, TArray<UTexture*>& TextureValues, TArray<TSoftObjectPtr<UTexture>>& TextureReferenceValues, TArray<FName>& MorphTargetNames, TArray<float>& MorphTargetValues);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetNumSwatchesInCategory(FName Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCategorySwatchNames(FName Category, TArray<FString>& SwatchNames);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCategorySwatchAttachments(FName Category, UCustomizationComponent* CustomizationComponent, TArray<TSubclassOf<ACustomizationAttachment>>& SwatchAttachments);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCategories(TArray<FName>& Categories);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ApplySwatchToMID(FName SwatchCategoryName, int32 SelectedSwatch, UMaterialInstanceDynamic* Mid, UMeshComponent* MeshComponent);
    
};

