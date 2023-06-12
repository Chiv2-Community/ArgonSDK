#pragma once
#include "CoreMinimal.h"
#include "EAnnouncementType.h"
#include "VirtualGood.h"
#include "VirtualGoodAnnouncement.generated.h"

UCLASS(Blueprintable)
class TBL_API UVirtualGoodAnnouncement : public UVirtualGood {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnnouncementType AnnouncementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakeoverInMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysToRemainActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysToRemainPrimary;
    
    UVirtualGoodAnnouncement();
};

