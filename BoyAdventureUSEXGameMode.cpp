// Copyright Epic Games, Inc. All Rights Reserved.

#include "BoyAdventureUSEXGameMode.h"
#include "BoyAdventureUSEXCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABoyAdventureUSEXGameMode::ABoyAdventureUSEXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
