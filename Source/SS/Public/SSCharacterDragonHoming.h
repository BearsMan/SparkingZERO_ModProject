#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataDragonHomingParameter.h"
#include "SSCharacterDragonHoming.generated.h"

class USSDragonHomingDataAsset;

UCLASS(Blueprintable)
class USSCharacterDragonHoming : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonHomingDataAsset* DragonHomingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDragonHomingParameter MovementParameter;
    
public:
    USSCharacterDragonHoming();

};

