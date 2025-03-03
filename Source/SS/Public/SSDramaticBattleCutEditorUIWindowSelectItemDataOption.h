#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorUIWindowButtonGuideDataList.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.h"
#include "SSDramaticBattleCutEditorUIWindowSelectItemDataOption.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowSelectItemDataOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WindowTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowButtonGuideDataList UIWindowButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList ListItemTemplate;
    
    SS_API FSSDramaticBattleCutEditorUIWindowSelectItemDataOption();
};

