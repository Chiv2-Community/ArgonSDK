#pragma once
#include "CoreMinimal.h"
#include "EClassRepNodeMapping.generated.h"

UENUM(BlueprintType)
enum class EClassRepNodeMapping : uint8 {
    Default,
    NotRouted,
    RelevantAllConnections,
    RelevantAllConnectionsSlow,
    LowFreq_Spatialize_Static,
    LowFreq_Spatialize_Dynamic,
    LowFreq_Spatialize_Dormancy,
    HighFreq_Spatialize_Static,
    HighFreq_Spatialize_Dynamic,
    HighFreq_Spatialize_Dormancy,
    MediumFreq_Spatialize_Static,
    MediumFreq_Spatialize_Dynamic,
    MediumFreq_Spatialize_Dynamic_NoDynamicSpatialization,
    MediumFreq_Spatialize_Dormancy,
};

