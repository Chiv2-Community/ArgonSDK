#include "CrossplayPlatformHelpers.h"

ECrossplayPlatform UCrossplayPlatformHelpers::StringToPlatform(const FString& String) {
    return ECrossplayPlatform::PlayStation;
}

FString UCrossplayPlatformHelpers::PlatformToString(ECrossplayPlatform Platform) {
    return TEXT("");
}

ECrossplayPlatform UCrossplayPlatformHelpers::GetPlatform() {
    return ECrossplayPlatform::PlayStation;
}

UCrossplayPlatformHelpers::UCrossplayPlatformHelpers() {
}

