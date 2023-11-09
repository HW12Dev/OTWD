#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Templates/SubclassOf.h"
#include "SBZCheatManagerSettings.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class USBZCheatManagerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> QuickSummonActorClasses;
    
public:
    USBZCheatManagerSettings();
    UFUNCTION(BlueprintCallable)
    static TArray<TSoftClassPtr<AActor>> GetQuickSummonActorClasses();
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AActor> GetQuickSummonActorClassByName(const FString& Name);
    
};

