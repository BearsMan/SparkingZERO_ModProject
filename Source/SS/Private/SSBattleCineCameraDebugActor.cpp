#include "SSBattleCineCameraDebugActor.h"

ASSBattleCineCameraDebugActor::ASSBattleCineCameraDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationMaxSpeedFreeCamera = 90.00f;
    this->AngleMaxSpeedFreeCamera = 90.00f;
    this->MovementMaxSpeedFreeCamera = 3000.00f;
    this->AngleMinFreeCamera = -80.00f;
    this->AngleMaxFreeCamera = 80.00f;
    this->BattleCameraMode = EBattleCineCameraMode::BattleCameraModeBattle;
    this->BattleCameraTarget = EBattleCineCameraTarget::BattleCameraTargetNon;
}


