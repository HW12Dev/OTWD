#pragma once
#include "CoreMinimal.h"
#include "EMutatorType.generated.h"

UENUM(BlueprintType)
enum class EMutatorType : uint8 {
    BaseModifier,
    Multiplier,
    Modifier,
};

