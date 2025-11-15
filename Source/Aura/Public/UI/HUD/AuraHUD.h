// Copyright BigNasty

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AuraHUD.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraHUD : public AHUD
{
	GENERATED_BODY()
public:

	TObjectPtr<UAuraUserWidget> OverlayWidget;

protected:
	
	
private:

	UPROPERTY(EDitAnywhere)
	TSubclassOf<UAuraUserWidget> OverlayWidgetClass;
	
};
