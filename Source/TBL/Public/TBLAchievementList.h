#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TBLAchievementList.generated.h"

class UTBLAchievementTask;

UCLASS(Abstract, Blueprintable)
class UTBLAchievementList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UTBLAchievementTask*> Achievements;
    
    UTBLAchievementList();
};

