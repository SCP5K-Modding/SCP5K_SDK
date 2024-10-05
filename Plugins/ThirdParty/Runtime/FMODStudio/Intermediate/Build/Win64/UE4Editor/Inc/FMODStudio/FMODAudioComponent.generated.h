// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFMODEvent;
#ifdef FMODSTUDIO_FMODAudioComponent_generated_h
#error "FMODAudioComponent.generated.h already included, missing '#pragma once' in FMODAudioComponent.h"
#endif
#define FMODSTUDIO_FMODAudioComponent_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


template<> FMODSTUDIO_API UScriptStruct* StaticStruct<struct FFMODOcclusionDetails>();

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


template<> FMODSTUDIO_API UScriptStruct* StaticStruct<struct FFMODAttenuationDetails>();

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_116_DELEGATE \
struct _Script_FMODStudio_eventOnTimelineBeat_Parms \
{ \
	int32 Bar; \
	int32 Beat; \
	int32 Position; \
	float Tempo; \
	int32 TimeSignatureUpper; \
	int32 TimeSignatureLower; \
}; \
static inline void FOnTimelineBeat_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineBeat, int32 Bar, int32 Beat, int32 Position, float Tempo, int32 TimeSignatureUpper, int32 TimeSignatureLower) \
{ \
	_Script_FMODStudio_eventOnTimelineBeat_Parms Parms; \
	Parms.Bar=Bar; \
	Parms.Beat=Beat; \
	Parms.Position=Position; \
	Parms.Tempo=Tempo; \
	Parms.TimeSignatureUpper=TimeSignatureUpper; \
	Parms.TimeSignatureLower=TimeSignatureLower; \
	OnTimelineBeat.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_113_DELEGATE \
struct _Script_FMODStudio_eventOnTimelineMarker_Parms \
{ \
	FString Name; \
	int32 Position; \
}; \
static inline void FOnTimelineMarker_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineMarker, const FString& Name, int32 Position) \
{ \
	_Script_FMODStudio_eventOnTimelineMarker_Parms Parms; \
	Parms.Name=Name; \
	Parms.Position=Position; \
	OnTimelineMarker.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_111_DELEGATE \
static inline void FOnSoundStopped_DelegateWrapper(const FMulticastScriptDelegate& OnSoundStopped) \
{ \
	OnSoundStopped.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_109_DELEGATE \
static inline void FOnEventStopped_DelegateWrapper(const FMulticastScriptDelegate& OnEventStopped) \
{ \
	OnEventStopped.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetProgrammerSoundName); \
	DECLARE_FUNCTION(execGetTimelinePosition); \
	DECLARE_FUNCTION(execSetTimelinePosition); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execSetProperty); \
	DECLARE_FUNCTION(execGetParameterValue); \
	DECLARE_FUNCTION(execGetParameter); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execGetPaused); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execKeyOff); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetEvent);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetProgrammerSoundName); \
	DECLARE_FUNCTION(execGetTimelinePosition); \
	DECLARE_FUNCTION(execSetTimelinePosition); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execSetProperty); \
	DECLARE_FUNCTION(execGetParameterValue); \
	DECLARE_FUNCTION(execGetParameter); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execGetPaused); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execKeyOff); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetEvent);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFMODAudioComponent(); \
	friend struct Z_Construct_UClass_UFMODAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UFMODAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODAudioComponent)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_INCLASS \
private: \
	static void StaticRegisterNativesUFMODAudioComponent(); \
	friend struct Z_Construct_UClass_UFMODAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UFMODAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODAudioComponent)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODAudioComponent(UFMODAudioComponent&&); \
	NO_API UFMODAudioComponent(const UFMODAudioComponent&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODAudioComponent(UFMODAudioComponent&&); \
	NO_API UFMODAudioComponent(const UFMODAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODAudioComponent)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_136_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FMODAudioComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FMODSTUDIO_API UClass* StaticClass<class UFMODAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h


#define FOREACH_ENUM_EFMODEVENTPROPERTY(op) \
	op(EFMODEventProperty::ChannelPriority) \
	op(EFMODEventProperty::ScheduleDelay) \
	op(EFMODEventProperty::ScheduleLookahead) \
	op(EFMODEventProperty::MinimumDistance) \
	op(EFMODEventProperty::MaximumDistance) \
	op(EFMODEventProperty::Count) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
