#pragma once
#include "CoreMinimal.h"
#include "Engine_misc.generated.h"

UCLASS(Blueprintable)
class UAssemblyBlueprint : public UBlueprint
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Engine")
    bool bIsMacro;                                                                    // 0x00A0 (size: 0x1)

    //void OnBlueprintChanged(class UBlueprint* Blueprint);
}; // Size: 0xA8

UCLASS(Blueprintable)
class UAssemblyInstance : public UObject
{
    GENERATED_BODY()
    //char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

UCLASS(Blueprintable)
class UAssemblyObject : public UObject
{
    GENERATED_BODY()
    //char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

USTRUCT(BlueprintType)
struct FBlendedLODSkelMeshSkinWeights
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category="Engine")
    TArray<FSkelMeshSkinWeightInfo> Weights;                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

USTRUCT(BlueprintType)
struct FDebugTimeDiscrepancyDetection
{
    GENERATED_BODY()
    //float ClientError;                                                                // 0x0000 (size: 0x4)
    //float TimeDiscrepancy;                                                            // 0x0004 (size: 0x4)
    //float LifetimeRawTimeDiscrepancy;                                                 // 0x0008 (size: 0x4)
    //float Lifetime;                                                                   // 0x000C (size: 0x4)
    //bool Resolving;                                                                   // 0x0010 (size: 0x1)
    //char padding_0[0x3];                                                              // 0x0011 (size: 0x3)
    //float ClientDelta;                                                                // 0x0014 (size: 0x4)
    //float ServerDelta;                                                                // 0x0018 (size: 0x4)
    //float ClientTimeStamp;                                                            // 0x001C (size: 0x4)
    //float DeltaOverride;                                                              // 0x0020 (size: 0x4)
    //float TimeToPayBack;                                                              // 0x0024 (size: 0x4)
    //float BaseDelta;                                                                  // 0x0028 (size: 0x4)
    //float ServerDeltaSinceLastMovementUpdate;                                         // 0x002C (size: 0x4)
    //float TimeDiscrepancyAccumulatedClientDeltasSinceLastServerTick;                  // 0x0030 (size: 0x4)

}; // Size: 0x34

USTRUCT(BlueprintType)
struct FTextureAtlasEntryInfo
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Engine")
    FName SlotName;                                                                   // 0x0000 (size: 0x8)
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Engine")
    TArray<FVector2D> UVTranslate;                                                    // 0x0008 (size: 0x10)
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Engine")
    TArray<FVector2D> UVScale;                                                        // 0x0018 (size: 0x10)

}; // Size: 0x28

UCLASS(Blueprintable)
class UTextureAtlasInfo : public UDataAsset
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Engine")
    TArray<FTextureAtlasEntryInfo> Data;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40