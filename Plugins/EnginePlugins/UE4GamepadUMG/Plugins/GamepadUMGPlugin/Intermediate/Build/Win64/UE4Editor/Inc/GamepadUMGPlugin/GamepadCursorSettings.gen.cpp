// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GamepadCursorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamepadCursorSettings() {}
// Cross Module References
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UGamepadCursorSettings_NoRegister();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UGamepadCursorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_GamepadUMGPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	void UGamepadCursorSettings::StaticRegisterNativesUGamepadCursorSettings()
	{
	}
	UClass* Z_Construct_UClass_UGamepadCursorSettings_NoRegister()
	{
		return UGamepadCursorSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGamepadCursorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_GamepadUMGPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "GamepadCursorSettings.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalogCursorNoAcceleration_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			auto NewProp_bAnalogCursorNoAcceleration_SetBit = [](void* Obj){ ((UGamepadCursorSettings*)Obj)->bAnalogCursorNoAcceleration = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalogCursorNoAcceleration = { UE4CodeGen_Private::EPropertyClass::Bool, "bAnalogCursorNoAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGamepadCursorSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAnalogCursorNoAcceleration_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAnalogCursorNoAcceleration_MetaData, ARRAY_COUNT(NewProp_bAnalogCursorNoAcceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEngineAnalogCursor_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			auto NewProp_bUseEngineAnalogCursor_SetBit = [](void* Obj){ ((UGamepadCursorSettings*)Obj)->bUseEngineAnalogCursor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEngineAnalogCursor = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseEngineAnalogCursor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGamepadCursorSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseEngineAnalogCursor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseEngineAnalogCursor_MetaData, ARRAY_COUNT(NewProp_bUseEngineAnalogCursor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorSize = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorSize), METADATA_PARAMS(NewProp_AnalogCursorSize_MetaData, ARRAY_COUNT(NewProp_AnalogCursorSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorAccelerationMultiplier_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorAccelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorAccelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorAccelerationMultiplier), METADATA_PARAMS(NewProp_AnalogCursorAccelerationMultiplier_MetaData, ARRAY_COUNT(NewProp_AnalogCursorAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorDeadZone_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorDeadZone = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorDeadZone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorDeadZone), METADATA_PARAMS(NewProp_AnalogCursorDeadZone_MetaData, ARRAY_COUNT(NewProp_AnalogCursorDeadZone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAnalogCursorSpeed_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAnalogCursorSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MinAnalogCursorSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, MinAnalogCursorSpeed), METADATA_PARAMS(NewProp_MinAnalogCursorSpeed_MetaData, ARRAY_COUNT(NewProp_MinAnalogCursorSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorDragCoefficientWhenHovered_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorDragCoefficientWhenHovered = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorDragCoefficientWhenHovered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorDragCoefficientWhenHovered), METADATA_PARAMS(NewProp_AnalogCursorDragCoefficientWhenHovered_MetaData, ARRAY_COUNT(NewProp_AnalogCursorDragCoefficientWhenHovered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorDragCoefficient_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorDragCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorDragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorDragCoefficient), METADATA_PARAMS(NewProp_AnalogCursorDragCoefficient_MetaData, ARRAY_COUNT(NewProp_AnalogCursorDragCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAnalogCursorSpeedWhenHovered_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAnalogCursorSpeedWhenHovered = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAnalogCursorSpeedWhenHovered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, MaxAnalogCursorSpeedWhenHovered), METADATA_PARAMS(NewProp_MaxAnalogCursorSpeedWhenHovered_MetaData, ARRAY_COUNT(NewProp_MaxAnalogCursorSpeedWhenHovered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAnalogCursorSpeed_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAnalogCursorSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAnalogCursorSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, MaxAnalogCursorSpeed), METADATA_PARAMS(NewProp_MaxAnalogCursorSpeed_MetaData, ARRAY_COUNT(NewProp_MaxAnalogCursorSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorAccelerationCurve_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "GamepadCursorSettings" },
				{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnalogCursorAccelerationCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "AnalogCursorAccelerationCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorAccelerationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_AnalogCursorAccelerationCurve_MetaData, ARRAY_COUNT(NewProp_AnalogCursorAccelerationCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAnalogCursorNoAcceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseEngineAnalogCursor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnalogCursorSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnalogCursorAccelerationMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnalogCursorDeadZone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinAnalogCursorSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnalogCursorDragCoefficientWhenHovered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnalogCursorDragCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAnalogCursorSpeedWhenHovered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAnalogCursorSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnalogCursorAccelerationCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGamepadCursorSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGamepadCursorSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamepadCursorSettings, 4265360784);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamepadCursorSettings(Z_Construct_UClass_UGamepadCursorSettings, &UGamepadCursorSettings::StaticClass, TEXT("/Script/GamepadUMGPlugin"), TEXT("UGamepadCursorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamepadCursorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
