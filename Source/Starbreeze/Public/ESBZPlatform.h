#pragma once
#include "CoreMinimal.h"
#include "ESBZPlatform.generated.h"

UENUM(BlueprintType)
enum class ESBZPlatform : uint8 {
    Unknown,
    Windows,
    PS4,
    XboxOne,
    Mac,
    Linux,
    MAX,
};

