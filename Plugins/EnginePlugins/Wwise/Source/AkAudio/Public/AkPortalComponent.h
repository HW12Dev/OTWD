#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkPortalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkPortalComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkPortalComponent();
};

