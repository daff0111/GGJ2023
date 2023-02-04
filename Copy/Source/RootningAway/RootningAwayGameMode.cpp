// Copyright Epic Games, Inc. All Rights Reserved.

#include "RootningAwayGameMode.h"
#include "RootningAwayCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARootningAwayGameMode::ARootningAwayGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
