// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ReinoDasFadasGameMode.h"
#include "ReinoDasFadasCharacter.h"

AReinoDasFadasGameMode::AReinoDasFadasGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AReinoDasFadasCharacter::StaticClass();	
}
