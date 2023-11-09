#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLeftDelegate.generated.h"

class ASBZPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLeft, ASBZPlayerCharacter*, PlayerCharacter);

