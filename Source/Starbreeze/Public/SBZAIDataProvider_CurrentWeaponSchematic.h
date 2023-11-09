#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "SBZPropertyProvider.h"
#include "SBZAIDataProvider_CurrentWeaponSchematic.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZAIDataProvider_CurrentWeaponSchematic : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPropertyProvider PropertyProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolValue;
    
    USBZAIDataProvider_CurrentWeaponSchematic();
};

