#pragma once
#include "CoreMinimal.h"
#include "ESBZGameMachineStateError.h"
#include "SBZStateMachineData.h"
#include "SBZStateMachineDataGameError.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataGameError : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGameMachineStateError ErrorType;
    
    USBZStateMachineDataGameError();
};

