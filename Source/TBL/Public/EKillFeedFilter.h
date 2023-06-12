#pragma once
#include "CoreMinimal.h"
#include "EKillFeedFilter.generated.h"

UENUM(BlueprintType)
namespace EKillFeedFilter {
    enum Type {
        AllMessages,
        PersonalMessages,
        NoMessages,
    };
}

