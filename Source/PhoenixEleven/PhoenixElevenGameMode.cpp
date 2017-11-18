// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PhoenixElevenGameMode.h"
#include "PhoenixElevenHUD.h"
#include "PhoenixElevenCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhoenixElevenGameMode::APhoenixElevenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APhoenixElevenHUD::StaticClass();
}
