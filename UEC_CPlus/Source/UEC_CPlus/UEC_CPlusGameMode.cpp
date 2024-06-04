// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEC_CPlusGameMode.h"
#include "UEC_CPlusCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEC_CPlusGameMode::AUEC_CPlusGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
