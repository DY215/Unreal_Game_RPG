// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_Game_RPGGameMode.h"
#include "Unreal_Game_RPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_Game_RPGGameMode::AUnreal_Game_RPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
