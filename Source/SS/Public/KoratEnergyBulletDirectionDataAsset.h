#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratEnergyBulletDirectionDataAsset.generated.h"

class USSEnergyBulletDirectionDataAssetRecord;

UCLASS(Blueprintable)
class UKoratEnergyBulletDirectionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSEnergyBulletDirectionDataAssetRecord*> PtrRecords;
    
public:
    UKoratEnergyBulletDirectionDataAsset();

};

