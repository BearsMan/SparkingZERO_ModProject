#pragma once
#include "CoreMinimal.h"
#include "EGeneralFateAttribute2.h"
#include "KoratCharacterDataAssetRecord.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "SSCharacterDataAsset.generated.h"

UCLASS(Blueprintable)
class USSCharacterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataAssetRecord CharacterDataAssetRecord;
    
    USSCharacterDataAsset();

    UFUNCTION(BlueprintCallable)
    void TestDamageModelSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetDesignatedDataList();
    
    UFUNCTION(BlueprintCallable)
    void SetChangeCharacterActionData();
    
    UFUNCTION(BlueprintCallable)
    bool ImportGeneralFateCombination(const TMap<FKoratCharacterDataList, EGeneralFateAttribute2>& InMap);
    
    UFUNCTION(BlueprintCallable)
    void FixedEffectBPEnumMap();
    
    UFUNCTION(BlueprintCallable)
    void Check();
    
    UFUNCTION(BlueprintCallable)
    void BatchAddSpecialFateDataMap();
    
    UFUNCTION(BlueprintCallable)
    bool AutoSetGeneralFateDataMap(const FString& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void AutoGenerateDataAsset();
    
};

