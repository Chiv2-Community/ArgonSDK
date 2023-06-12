#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HUDMarkerDisplayInfo.h"
#include "HudMarkerTicketStruct.generated.h"

USTRUCT(BlueprintType)
struct FHudMarkerTicketStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TicketsModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDMarkerDisplayInfo DisplayInfo;
    
    TBL_API FHudMarkerTicketStruct();
};

