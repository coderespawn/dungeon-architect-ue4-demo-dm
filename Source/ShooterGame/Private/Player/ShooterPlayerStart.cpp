
#include "ShooterGame.h"
#include "Player/ShooterPlayerStart.h"

AShooterPlayerStart::AShooterPlayerStart(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Spawning normal player start actors gives mobility warnings in the editor.  This is a workaround
	GetCapsuleComponent()->Mobility = EComponentMobility::Movable;
}
