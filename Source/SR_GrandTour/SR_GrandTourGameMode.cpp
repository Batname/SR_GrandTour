// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SR_GrandTourGameMode.h"
#include "SR_GrandTourHUD.h"
#include "SR_GrandTourCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASR_GrandTourGameMode::ASR_GrandTourGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASR_GrandTourHUD::StaticClass();
}
