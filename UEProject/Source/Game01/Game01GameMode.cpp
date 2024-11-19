// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game01GameMode.h"
#include "Game01Character.h"
#include "UObject/ConstructorHelpers.h"

AGame01GameMode::AGame01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
