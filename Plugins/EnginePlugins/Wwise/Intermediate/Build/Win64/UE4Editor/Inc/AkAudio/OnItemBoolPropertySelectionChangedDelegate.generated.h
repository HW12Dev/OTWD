// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_OnItemBoolPropertySelectionChangedDelegate_generated_h
#error "OnItemBoolPropertySelectionChangedDelegate.generated.h already included, missing '#pragma once' in OnItemBoolPropertySelectionChangedDelegate.h"
#endif
#define AKAUDIO_OnItemBoolPropertySelectionChangedDelegate_generated_h

#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemBoolPropertySelectionChangedDelegate_h_5_DELEGATE \
struct _Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms \
{ \
	FString PropertySelected; \
}; \
static inline void FOnItemBoolPropertySelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemBoolPropertySelectionChanged, const FString& PropertySelected) \
{ \
	_Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms Parms; \
	Parms.PropertySelected=PropertySelected; \
	OnItemBoolPropertySelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemBoolPropertySelectionChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
