// Copyright Epic Games, Inc. All Rights Reserved.

#include "MCP_TestGameMode.h"
#include "MCP_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMCP_TestGameMode::AMCP_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
