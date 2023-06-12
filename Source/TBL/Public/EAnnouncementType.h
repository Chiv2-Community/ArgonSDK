#pragma once
#include "CoreMinimal.h"
#include "EAnnouncementType.generated.h"

UENUM(BlueprintType)
enum class EAnnouncementType : uint8 {
    Hotfix,
    Patch,
    ContentUpdate,
    MajorContentUpdate,
    DevBlog,
};

