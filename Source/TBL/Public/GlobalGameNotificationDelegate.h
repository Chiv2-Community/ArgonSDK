#pragma once
#include "CoreMinimal.h"
#include "EGlobalGameNotificationCategory.h"
#include "GlobalGameNotificationDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FGlobalGameNotification, EGlobalGameNotificationCategory, Category, FText, Title, FText, Body, FName, Subcategory, UObject*, Data);

