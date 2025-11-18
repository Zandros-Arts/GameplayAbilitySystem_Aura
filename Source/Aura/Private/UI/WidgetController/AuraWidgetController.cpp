// Copyright BigNasty


#include "UI/WidgetController/AuraWidgetController.h"

#include "UI/Widget/AuraUserWidget.h"

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
	
}

void UAuraWidgetController::BroadcastInitialValues()
{
	
}
