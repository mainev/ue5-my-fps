// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFPSPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Engine/LocalPlayer.h"

void AMyFPSPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AMyFPSPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();


	// Add Input Mapping Contexts
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}

	}

}
