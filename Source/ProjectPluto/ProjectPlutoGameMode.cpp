// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectPlutoGameMode.h"
#include "ProjectPlutoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectPlutoGameMode::AProjectPlutoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
