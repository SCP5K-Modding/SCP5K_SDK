// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODSettings() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODCodec();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODPlatforms();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODOutput();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODLogging();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODProjectLocale();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODPlatformSettings();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPoolSizes();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static UEnum* EFMODCodec_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODCodec, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODCodec"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODCodec::Type>()
	{
		return EFMODCodec_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODCodec(EFMODCodec_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODCodec"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODCodec_Hash() { return 134714573U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODCodec()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODCodec"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODCodec_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODCodec::VORBIS", (int64)EFMODCodec::VORBIS },
				{ "EFMODCodec::FADPCM", (int64)EFMODCodec::FADPCM },
				{ "EFMODCodec::OPUS", (int64)EFMODCodec::OPUS },
				{ "EFMODCodec::XMA", (int64)EFMODCodec::XMA },
				{ "EFMODCodec::AT9", (int64)EFMODCodec::AT9 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AT9.Name", "EFMODCodec::AT9" },
				{ "FADPCM.Name", "EFMODCodec::FADPCM" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "OPUS.Name", "EFMODCodec::OPUS" },
				{ "VORBIS.Name", "EFMODCodec::VORBIS" },
				{ "XMA.Name", "EFMODCodec::XMA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMODCodec",
				"EFMODCodec::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFMODPlatforms_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODPlatforms, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODPlatforms"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODPlatforms::Type>()
	{
		return EFMODPlatforms_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODPlatforms(EFMODPlatforms_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODPlatforms"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODPlatforms_Hash() { return 1765370907U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODPlatforms()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODPlatforms"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODPlatforms_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODPlatforms::Windows", (int64)EFMODPlatforms::Windows },
				{ "EFMODPlatforms::Linux", (int64)EFMODPlatforms::Linux },
				{ "EFMODPlatforms::Mac", (int64)EFMODPlatforms::Mac },
				{ "EFMODPlatforms::Android", (int64)EFMODPlatforms::Android },
				{ "EFMODPlatforms::IOS", (int64)EFMODPlatforms::IOS },
				{ "EFMODPlatforms::PS4", (int64)EFMODPlatforms::PS4 },
				{ "EFMODPlatforms::PS5", (int64)EFMODPlatforms::PS5 },
				{ "EFMODPlatforms::Deprecated", (int64)EFMODPlatforms::Deprecated },
				{ "EFMODPlatforms::Switch", (int64)EFMODPlatforms::Switch },
				{ "EFMODPlatforms::XboxOne", (int64)EFMODPlatforms::XboxOne },
				{ "EFMODPlatforms::XSX", (int64)EFMODPlatforms::XSX },
				{ "EFMODPlatforms::Editor", (int64)EFMODPlatforms::Editor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Android.Name", "EFMODPlatforms::Android" },
				{ "Deprecated.Name", "EFMODPlatforms::Deprecated" },
				{ "Editor.Name", "EFMODPlatforms::Editor" },
				{ "IOS.Name", "EFMODPlatforms::IOS" },
				{ "Linux.Name", "EFMODPlatforms::Linux" },
				{ "Mac.Name", "EFMODPlatforms::Mac" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "PS4.Name", "EFMODPlatforms::PS4" },
				{ "PS5.Name", "EFMODPlatforms::PS5" },
				{ "Switch.Name", "EFMODPlatforms::Switch" },
				{ "Windows.Name", "EFMODPlatforms::Windows" },
				{ "XboxOne.Name", "EFMODPlatforms::XboxOne" },
				{ "XSX.Name", "EFMODPlatforms::XSX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMODPlatforms",
				"EFMODPlatforms::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFMODOutput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODOutput, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODOutput"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODOutput::Type>()
	{
		return EFMODOutput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODOutput(EFMODOutput_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODOutput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODOutput_Hash() { return 3011102366U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODOutput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODOutput"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODOutput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODOutput::TYPE_AUTODETECT", (int64)EFMODOutput::TYPE_AUTODETECT },
				{ "EFMODOutput::TYPE_NOSOUND", (int64)EFMODOutput::TYPE_NOSOUND },
				{ "EFMODOutput::TYPE_WASAPI", (int64)EFMODOutput::TYPE_WASAPI },
				{ "EFMODOutput::TYPE_ASIO", (int64)EFMODOutput::TYPE_ASIO },
				{ "EFMODOutput::TYPE_PULSEAUDIO", (int64)EFMODOutput::TYPE_PULSEAUDIO },
				{ "EFMODOutput::TYPE_ALSA", (int64)EFMODOutput::TYPE_ALSA },
				{ "EFMODOutput::TYPE_COREAUDIO", (int64)EFMODOutput::TYPE_COREAUDIO },
				{ "EFMODOutput::TYPE_AUDIOTRACK", (int64)EFMODOutput::TYPE_AUDIOTRACK },
				{ "EFMODOutput::TYPE_OPENSL", (int64)EFMODOutput::TYPE_OPENSL },
				{ "EFMODOutput::TYPE_AUDIOOUT", (int64)EFMODOutput::TYPE_AUDIOOUT },
				{ "EFMODOutput::TYPE_AUDIO3D", (int64)EFMODOutput::TYPE_AUDIO3D },
				{ "EFMODOutput::TYPE_NNAUDIO", (int64)EFMODOutput::TYPE_NNAUDIO },
				{ "EFMODOutput::TYPE_WINSONIC", (int64)EFMODOutput::TYPE_WINSONIC },
				{ "EFMODOutput::TYPE_AAUDIO", (int64)EFMODOutput::TYPE_AAUDIO },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "TYPE_AAUDIO.Comment", "/** Android - AAudio. (Default on Android 8.1 and above) */" },
				{ "TYPE_AAUDIO.Name", "EFMODOutput::TYPE_AAUDIO" },
				{ "TYPE_AAUDIO.ToolTip", "Android - AAudio. (Default on Android 8.1 and above)" },
				{ "TYPE_ALSA.Comment", "/** Linux - Advanced Linux Sound Architecture. (Default on Linux if PulseAudio isn't available) */" },
				{ "TYPE_ALSA.Name", "EFMODOutput::TYPE_ALSA" },
				{ "TYPE_ALSA.ToolTip", "Linux - Advanced Linux Sound Architecture. (Default on Linux if PulseAudio isn't available)" },
				{ "TYPE_ASIO.Comment", "/** Win - Low latency ASIO 2.0. */" },
				{ "TYPE_ASIO.Name", "EFMODOutput::TYPE_ASIO" },
				{ "TYPE_ASIO.ToolTip", "Win - Low latency ASIO 2.0." },
				{ "TYPE_AUDIO3D.Comment", "/** PS4 - Audio3D. */" },
				{ "TYPE_AUDIO3D.Name", "EFMODOutput::TYPE_AUDIO3D" },
				{ "TYPE_AUDIO3D.ToolTip", "PS4 - Audio3D." },
				{ "TYPE_AUDIOOUT.Comment", "/** PS4 / PS5 - Audio Out. (Default on PS4, PS5) */" },
				{ "TYPE_AUDIOOUT.Name", "EFMODOutput::TYPE_AUDIOOUT" },
				{ "TYPE_AUDIOOUT.ToolTip", "PS4 / PS5 - Audio Out. (Default on PS4, PS5)" },
				{ "TYPE_AUDIOTRACK.Comment", "/** Android - Java Audio Track. (Default on Android 2.2 and below) */" },
				{ "TYPE_AUDIOTRACK.Name", "EFMODOutput::TYPE_AUDIOTRACK" },
				{ "TYPE_AUDIOTRACK.ToolTip", "Android - Java Audio Track. (Default on Android 2.2 and below)" },
				{ "TYPE_AUTODETECT.Comment", "/** Picks the best output mode for the platform.This is the default. */" },
				{ "TYPE_AUTODETECT.Name", "EFMODOutput::TYPE_AUTODETECT" },
				{ "TYPE_AUTODETECT.ToolTip", "Picks the best output mode for the platform.This is the default." },
				{ "TYPE_COREAUDIO.Comment", "/** Mac / iOS - Core Audio. (Default on Mac and iOS) */" },
				{ "TYPE_COREAUDIO.Name", "EFMODOutput::TYPE_COREAUDIO" },
				{ "TYPE_COREAUDIO.ToolTip", "Mac / iOS - Core Audio. (Default on Mac and iOS)" },
				{ "TYPE_NNAUDIO.Comment", "/** Switch - nn::audio. (Default on Switch) */" },
				{ "TYPE_NNAUDIO.Name", "EFMODOutput::TYPE_NNAUDIO" },
				{ "TYPE_NNAUDIO.ToolTip", "Switch - nn::audio. (Default on Switch)" },
				{ "TYPE_NOSOUND.Comment", "/** All - Perform all mixing but discard the final output. */" },
				{ "TYPE_NOSOUND.Name", "EFMODOutput::TYPE_NOSOUND" },
				{ "TYPE_NOSOUND.ToolTip", "All - Perform all mixing but discard the final output." },
				{ "TYPE_OPENSL.Comment", "/** Android - OpenSL ES. (Default on Android 2.3 up to 7.1) */" },
				{ "TYPE_OPENSL.Name", "EFMODOutput::TYPE_OPENSL" },
				{ "TYPE_OPENSL.ToolTip", "Android - OpenSL ES. (Default on Android 2.3 up to 7.1)" },
				{ "TYPE_PULSEAUDIO.Comment", "/** Linux - Pulse Audio. (Default on Linux if available) */" },
				{ "TYPE_PULSEAUDIO.Name", "EFMODOutput::TYPE_PULSEAUDIO" },
				{ "TYPE_PULSEAUDIO.ToolTip", "Linux - Pulse Audio. (Default on Linux if available)" },
				{ "TYPE_WASAPI.Comment", "/** Win / UWP / Xbox One / Game Core - Windows Audio Session API. (Default on Windows, Xbox One, Game Core and UWP) */" },
				{ "TYPE_WASAPI.Name", "EFMODOutput::TYPE_WASAPI" },
				{ "TYPE_WASAPI.ToolTip", "Win / UWP / Xbox One / Game Core - Windows Audio Session API. (Default on Windows, Xbox One, Game Core and UWP)" },
				{ "TYPE_WINSONIC.Comment", "/** Win10 / Xbox One / Game Core - Windows Sonic. */" },
				{ "TYPE_WINSONIC.Name", "EFMODOutput::TYPE_WINSONIC" },
				{ "TYPE_WINSONIC.ToolTip", "Win10 / Xbox One / Game Core - Windows Sonic." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMODOutput",
				"EFMODOutput::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFMODSpeakerMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODSpeakerMode"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODSpeakerMode::Type>()
	{
		return EFMODSpeakerMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODSpeakerMode(EFMODSpeakerMode_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODSpeakerMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_Hash() { return 2289651176U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODSpeakerMode"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODSpeakerMode::Stereo", (int64)EFMODSpeakerMode::Stereo },
				{ "EFMODSpeakerMode::Surround_5_1", (int64)EFMODSpeakerMode::Surround_5_1 },
				{ "EFMODSpeakerMode::Surround_7_1", (int64)EFMODSpeakerMode::Surround_7_1 },
				{ "EFMODSpeakerMode::Surround_7_1_4", (int64)EFMODSpeakerMode::Surround_7_1_4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
				{ "Stereo.Comment", "// The speakers are stereo\n" },
				{ "Stereo.Name", "EFMODSpeakerMode::Stereo" },
				{ "Stereo.ToolTip", "The speakers are stereo" },
				{ "Surround_5_1.Comment", "// 5.1 speaker setup\n" },
				{ "Surround_5_1.Name", "EFMODSpeakerMode::Surround_5_1" },
				{ "Surround_5_1.ToolTip", "5.1 speaker setup" },
				{ "Surround_7_1.Comment", "// 7.1 speaker setup\n" },
				{ "Surround_7_1.Name", "EFMODSpeakerMode::Surround_7_1" },
				{ "Surround_7_1.ToolTip", "7.1 speaker setup" },
				{ "Surround_7_1_4.Comment", "// 7.1.4 speaker setup\n" },
				{ "Surround_7_1_4.Name", "EFMODSpeakerMode::Surround_7_1_4" },
				{ "Surround_7_1_4.ToolTip", "7.1.4 speaker setup" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMODSpeakerMode",
				"EFMODSpeakerMode::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFMODLogging_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODLogging, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODLogging"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODLogging>()
	{
		return EFMODLogging_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODLogging(EFMODLogging_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODLogging"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODLogging_Hash() { return 3818620986U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODLogging()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODLogging"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODLogging_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEVEL_NONE", (int64)LEVEL_NONE },
				{ "LEVEL_ERROR", (int64)LEVEL_ERROR },
				{ "LEVEL_WARNING", (int64)LEVEL_WARNING },
				{ "LEVEL_LOG", (int64)LEVEL_LOG },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LEVEL_ERROR.Name", "LEVEL_ERROR" },
				{ "LEVEL_LOG.Name", "LEVEL_LOG" },
				{ "LEVEL_NONE.Name", "LEVEL_NONE" },
				{ "LEVEL_WARNING.Name", "LEVEL_WARNING" },
				{ "ModuleRelativePath", "Classes/FMODSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMODLogging",
				"EFMODLogging",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFMODProjectLocale::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODProjectLocale, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODProjectLocale"), sizeof(FFMODProjectLocale), Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODProjectLocale>()
{
	return FFMODProjectLocale::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODProjectLocale(FFMODProjectLocale::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODProjectLocale"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODProjectLocale
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODProjectLocale()
	{
		UScriptStruct::DeferCppStructOps<FFMODProjectLocale>(FName(TEXT("FMODProjectLocale")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODProjectLocale;
	struct Z_Construct_UScriptStruct_FFMODProjectLocale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocaleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocaleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocaleCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocaleCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefault_MetaData[];
#endif
		static void NewProp_bDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODProjectLocale>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n    * Human readable locale name, displayed in Blueprints.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Human readable locale name, displayed in Blueprints." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName = { "LocaleName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODProjectLocale, LocaleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n    * Locale code. Must correspond to project locale codes in FMOD Studio project.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Locale code. Must correspond to project locale codes in FMOD Studio project." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode = { "LocaleCode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODProjectLocale, LocaleCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n    * Default locale at startup. Only one locale should be marked as default.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Default locale at startup. Only one locale should be marked as default." },
	};
#endif
	void Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_SetBit(void* Obj)
	{
		((FFMODProjectLocale*)Obj)->bDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault = { "bDefault", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFMODProjectLocale), &Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"FMODProjectLocale",
		sizeof(FFMODProjectLocale),
		alignof(FFMODProjectLocale),
		Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODProjectLocale()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODProjectLocale"), sizeof(FFMODProjectLocale), Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash() { return 292888301U; }
class UScriptStruct* FFMODPlatformSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODPlatformSettings, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODPlatformSettings"), sizeof(FFMODPlatformSettings), Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODPlatformSettings>()
{
	return FFMODPlatformSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODPlatformSettings(FFMODPlatformSettings::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODPlatformSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODPlatformSettings
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODPlatformSettings()
	{
		UScriptStruct::DeferCppStructOps<FFMODPlatformSettings>(FName(TEXT("FMODPlatformSettings")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODPlatformSettings;
	struct Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealChannelCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RealChannelCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeakerMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomPoolSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Codecs_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Codecs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Codecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Codecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODPlatformSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Real Channel Count\n" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Real Channel Count" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount = { "RealChannelCount", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, RealChannelCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n    * Sample rate to use, or 0 to match system rate.\n    * eg. 0, 22050, 24000, 32000, 44100, 48000.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Sample rate to use, or 0 to match system rate.\neg. 0, 22050, 24000, 32000, 44100, 48000." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "Comment", "/**\n    * Project Output Format, should match the mode set up for the Studio project.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Project Output Format, should match the mode set up for the Studio project." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode = { "SpeakerMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, SpeakerMode), Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "Comment", "/**\n    * Built-in output types that can be used to run the mixer.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Built-in output types that can be used to run the mixer." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, OutputType), Z_Construct_UEnum_FMODStudio_EFMODOutput, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n     * Use specified memory pool size, units in bytes. Disabled by default.\n     * FMOD may become unstable if the limit is exceeded!\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Use specified memory pool size, units in bytes. Disabled by default.\nFMOD may become unstable if the limit is exceeded!" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize = { "CustomPoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, CustomPoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_ValueProp = { "Codecs", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_Key_KeyProp = { "Codecs_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FMODStudio_EFMODCodec, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Codecs\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Codecs" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs = { "Codecs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, Codecs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"FMODPlatformSettings",
		sizeof(FFMODPlatformSettings),
		alignof(FFMODPlatformSettings),
		Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODPlatformSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODPlatformSettings"), sizeof(FFMODPlatformSettings), Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash() { return 910502078U; }
class UScriptStruct* FCustomPoolSizes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomPoolSizes, Z_Construct_UPackage__Script_FMODStudio(), TEXT("CustomPoolSizes"), sizeof(FCustomPoolSizes), Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FCustomPoolSizes>()
{
	return FCustomPoolSizes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomPoolSizes(FCustomPoolSizes::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("CustomPoolSizes"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFCustomPoolSizes
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFCustomPoolSizes()
	{
		UScriptStruct::DeferCppStructOps<FCustomPoolSizes>(FName(TEXT("CustomPoolSizes")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFCustomPoolSizes;
	struct Z_Construct_UScriptStruct_FCustomPoolSizes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desktop_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Desktop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mobile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mobile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Switch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XboxOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomPoolSizes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default = 0 (Disabled) units in bytes*/" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop = { "Desktop", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, Desktop), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default = 0 (Disabled) units in bytes*/" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile = { "Mobile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, Mobile), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default = 0 (Disabled) units in bytes*/" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4 = { "PS4", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, PS4), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default = 0 (Disabled) units in bytes*/" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, Switch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default = 0 (Disabled) units in bytes*/" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Default = 0 (Disabled) units in bytes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne = { "XboxOne", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, XboxOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"CustomPoolSizes",
		sizeof(FCustomPoolSizes),
		alignof(FCustomPoolSizes),
		Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomPoolSizes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomPoolSizes"), sizeof(FCustomPoolSizes), Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash() { return 2366781117U; }
	void UFMODSettings::StaticRegisterNativesUFMODSettings()
	{
	}
	UClass* Z_Construct_UClass_UFMODSettings_NoRegister()
	{
		return UFMODSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFMODSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadAllBanks_MetaData[];
#endif
		static void NewProp_bLoadAllBanks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadAllBanks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadAllSampleData_MetaData[];
#endif
		static void NewProp_bLoadAllSampleData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadAllSampleData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLiveUpdate_MetaData[];
#endif
		static void NewProp_bEnableLiveUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLiveUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorLiveUpdate_MetaData[];
#endif
		static void NewProp_bEnableEditorLiveUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorLiveUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankOutputDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BankOutputDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Locales_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locales_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locales;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vol0VirtualLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vol0VirtualLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchHardwareSampleRate_MetaData[];
#endif
		static void NewProp_bMatchHardwareSampleRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchHardwareSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealChannelCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RealChannelCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalChannelCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalChannelCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSPBufferLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DSPBufferLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSPBufferCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DSPBufferCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileBufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StudioUpdatePeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StudioUpdatePeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialOutputDriverName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InitialOutputDriverName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAllBuses_MetaData[];
#endif
		static void NewProp_bLockAllBuses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAllBuses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryPoolSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemoryPoolSizes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiveUpdatePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LiveUpdatePort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorLiveUpdatePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorLiveUpdatePort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadBanksDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReloadBanksDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAPIErrorLogging_MetaData[];
#endif
		static void NewProp_bEnableAPIErrorLogging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAPIErrorLogging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMemoryTracking_MetaData[];
#endif
		static void NewProp_bEnableMemoryTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMemoryTracking;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PluginFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentBrowserPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentBrowserPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcePlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ForcePlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterBankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterBankName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipLoadBankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkipLoadBankName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StudioBankKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StudioBankKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WavWriterPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WavWriterPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoggingLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OcclusionParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientVolumeParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AmbientVolumeParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientLPFParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AmbientLPFParameter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Platforms_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platforms_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Platforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FMODSettings.h" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/**\n     * Whether to load all banks at startup.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Whether to load all banks at startup." },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bLoadAllBanks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks = { "bLoadAllBanks", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/**\n     * Whether to load all bank sample data into memory at startup.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Whether to load all bank sample data into memory at startup." },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bLoadAllSampleData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData = { "bLoadAllSampleData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/**\n     * Enable live update in non-final builds.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Enable live update in non-final builds." },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableLiveUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate = { "bEnableLiveUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/**\n    * Enable live update in Editor for Auditioning. *Requires Restart*\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Enable live update in Editor for Auditioning. *Requires Restart*" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableEditorLiveUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate = { "bEnableEditorLiveUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/**\n     * Path to find your studio bank output directory, relative to Content directory.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Path to find your studio bank output directory, relative to Content directory." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory = { "BankOutputDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, BankOutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/** Project Output Format, should match the mode set up for the Studio project. */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Project Output Format, should match the mode set up for the Studio project." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, OutputFormat), Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/**\n    * Built-in output types that can be used to run the mixer.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Built-in output types that can be used to run the mixer." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, OutputType), Z_Construct_UEnum_FMODStudio_EFMODOutput, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_Inner = { "Locales", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFMODProjectLocale, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n    * Locales for localized banks. These should match the project locales configured in the FMOD Studio project.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Locales for localized banks. These should match the project locales configured in the FMOD Studio project." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales = { "Locales", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, Locales), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * The signal level at which channels are virtualized. Virtual channels are processed, but do not produce any output.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "The signal level at which channels are virtualized. Virtual channels are processed, but do not produce any output." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel = { "Vol0VirtualLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, Vol0VirtualLevel), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * Sample rate to use, or 0 to match system rate.\n     * eg. 0, 22050, 24000, 32000, 44100, 48000.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Sample rate to use, or 0 to match system rate.\neg. 0, 22050, 24000, 32000, 44100, 48000." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n    * Whether to match hardware sample rate where reasonable (44.1kHz to 48kHz).\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Whether to match hardware sample rate where reasonable (44.1kHz to 48kHz)." },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bMatchHardwareSampleRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate = { "bMatchHardwareSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * Number of actual software voices that can be used at once.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Number of actual software voices that can be used at once." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount = { "RealChannelCount", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, RealChannelCount), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * Total number of voices available that can be either real or virtual.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Total number of voices available that can be either real or virtual." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount = { "TotalChannelCount", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, TotalChannelCount), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * DSP mixer buffer length (eg. 512, 1024) or 0 for system default.\n     * When changing the Buffer Length, Buffer Count also needs to be set.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "DSP mixer buffer length (eg. 512, 1024) or 0 for system default.\nWhen changing the Buffer Length, Buffer Count also needs to be set." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength = { "DSPBufferLength", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, DSPBufferLength), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * DSP mixer buffer count (eg. 2, 4) or 0 for system default.\n     * When changing the Buffer Count, Buffer Length also needs to be set.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "DSP mixer buffer count (eg. 2, 4) or 0 for system default.\nWhen changing the Buffer Count, Buffer Length also needs to be set." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount = { "DSPBufferCount", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, DSPBufferCount), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * File buffer size in bytes (2048 by default).\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "File buffer size in bytes (2048 by default)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize = { "FileBufferSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, FileBufferSize), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * Studio update period in milliseconds, or 0 for default (which means 20ms).\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Studio update period in milliseconds, or 0 for default (which means 20ms)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod = { "StudioUpdatePeriod", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, StudioUpdatePeriod), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * Output device to choose at system start up, or empty for default.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Output device to choose at system start up, or empty for default." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName = { "InitialOutputDriverName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, InitialOutputDriverName), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * Lock all mixer buses at startup, making sure they are created up front.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Lock all mixer buses at startup, making sure they are created up front." },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bLockAllBuses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses = { "bLockAllBuses", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "Comment", "/**\n     * Use specified memory pool size for platform, units in bytes. Disabled by default.\n     * FMOD may become unstable if the limit is exceeded!\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Use specified memory pool size for platform, units in bytes. Disabled by default.\nFMOD may become unstable if the limit is exceeded!" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes = { "MemoryPoolSizes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, MemoryPoolSizes), Z_Construct_UScriptStruct_FCustomPoolSizes, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * Live update port to use, or 0 for default.\n     */" },
		{ "EditCondition", "bEnableLiveUpdate" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Live update port to use, or 0 for default." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort = { "LiveUpdatePort", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, LiveUpdatePort), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n    * Live update port to use while in editor for auditioning. *Requires Restart*\n    */" },
		{ "EditCondition", "bEnableEditorLiveUpdate" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Live update port to use while in editor for auditioning. *Requires Restart*" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort = { "EditorLiveUpdatePort", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, EditorLiveUpdatePort), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n    * Delay in seconds before automatically reloading modified banks from disk. This can be extended if building\n    * banks takes a long time and UE4 tries to reload banks before building is completed.\n    * Set to 0 to disable automatic bank reloading.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Delay in seconds before automatically reloading modified banks from disk. This can be extended if building\nbanks takes a long time and UE4 tries to reload banks before building is completed.\nSet to 0 to disable automatic bank reloading." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay = { "ReloadBanksDelay", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, ReloadBanksDelay), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * Will log internal API errors when enabled.\n     */" },
		{ "DisplayName", "Enable API Error Logging" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Will log internal API errors when enabled." },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableAPIErrorLogging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging = { "bEnableAPIErrorLogging", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n    * Enable memory tracking.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Enable memory tracking." },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableMemoryTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking = { "bEnableMemoryTracking", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_Inner = { "PluginFiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * Extra plugin files to load.\n     * The plugin files should sit alongside the FMOD dynamic libraries in the ThirdParty directory.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Extra plugin files to load.\nThe plugin files should sit alongside the FMOD dynamic libraries in the ThirdParty directory." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles = { "PluginFiles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, PluginFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * Directory for content to appear in content window. Be careful changing this!\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Directory for content to appear in content window. Be careful changing this!" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix = { "ContentBrowserPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, ContentBrowserPrefix), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * Force platform directory name, or leave empty for automatic (Desktop/Mobile/PS4/XBoxOne)\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Force platform directory name, or leave empty for automatic (Desktop/Mobile/PS4/XBoxOne)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName = { "ForcePlatformName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, ForcePlatformName), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * Name of master bank.  The default in Studio is \"Master Bank\".\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Name of master bank.  The default in Studio is \"Master Bank\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName = { "MasterBankName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, MasterBankName), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * Skip bank files of the given name.\n     * Can be used to load all banks except for a certain set, such as localization banks.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Skip bank files of the given name.\nCan be used to load all banks except for a certain set, such as localization banks." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName = { "SkipLoadBankName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, SkipLoadBankName), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/*\n    * Specify the key for loading sounds from encrypted banks.\n    */" },
		{ "DisplayName", "Encryption Key" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "* Specify the key for loading sounds from encrypted banks." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey = { "StudioBankKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, StudioBankKey), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n    * Force wav writer output, for debugging only.  Setting this will prevent normal sound output!\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Force wav writer output, for debugging only.  Setting this will prevent normal sound output!" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath = { "WavWriterPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, WavWriterPath), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/*\n    * Specify the logging level to use in a debug/development build.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "* Specify the logging level to use in a debug/development build." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel = { "LoggingLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, LoggingLevel), Z_Construct_UEnum_FMODStudio_EFMODLogging, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n    * Name of the parameter used in Studio to control Occlusion effects.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Name of the parameter used in Studio to control Occlusion effects." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter = { "OcclusionParameter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, OcclusionParameter), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n    * Name of the parameter used in Studio to control Ambient volume.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Name of the parameter used in Studio to control Ambient volume." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter = { "AmbientVolumeParameter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, AmbientVolumeParameter), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n    * Name of the parameter used in Studio to control Ambient LPF effects.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "Name of the parameter used in Studio to control Ambient LPF effects." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter = { "AmbientLPFParameter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, AmbientLPFParameter), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_ValueProp = { "Platforms", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFMODPlatformSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_Key_KeyProp = { "Platforms_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FMODStudio_EFMODPlatforms, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "Comment", "/*\n    * Used to specify platform specific settings.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "ToolTip", "* Used to specify platform specific settings." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, Platforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFMODSettings_Statics::ClassParams = {
		&UFMODSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFMODSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODSettings, 3371876964);
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODSettings>()
	{
		return UFMODSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODSettings(Z_Construct_UClass_UFMODSettings, &UFMODSettings::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
