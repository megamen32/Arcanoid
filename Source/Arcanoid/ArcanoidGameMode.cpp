// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ArcanoidGameMode.h"
#include "ArcanoidCharacter.h"

AArcanoidGameMode::AArcanoidGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AArcanoidCharacter::StaticClass();	
}
