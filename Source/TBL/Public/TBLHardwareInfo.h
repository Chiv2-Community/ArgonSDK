#pragma once
#include "CoreMinimal.h"
#include "TBLHardwareInfo.generated.h"

USTRUCT(BlueprintType)
struct FTBLHardwareInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPhysicalGBRam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCoresPhysical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCoresLogical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RHIAdapterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RHIVendorId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DedicatedVideoMemory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DedicatedSystemMemory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SharedSystemMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CPUVendor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CPUBrand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CPUInfo;
    
    TBL_API FTBLHardwareInfo();
};

