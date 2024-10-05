// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageFileReadAsyncComplete;
struct FUGCFileWriteStreamHandle;
struct FSteamUGCHandle;
enum class ESteamRemoteStoragePlatform : uint8;
struct FSteamID;
enum class ESteamUGCReadAction : uint8;
#ifdef STEAMCORE_RemoteStorage_generated_h
#error "RemoteStorage.generated.h already included, missing '#pragma once' in RemoteStorage.h"
#endif
#define STEAMCORE_RemoteStorage_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileDelete); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFileReadAsync); \
	DECLARE_FUNCTION(execFileReadAsyncComplete); \
	DECLARE_FUNCTION(execFileShare); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileWriteAsync); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetUGCDetails); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execUGCDownload); \
	DECLARE_FUNCTION(execUGCDownloadToLocation); \
	DECLARE_FUNCTION(execUGCRead);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileDelete); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFileReadAsync); \
	DECLARE_FUNCTION(execFileReadAsyncComplete); \
	DECLARE_FUNCTION(execFileShare); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileWriteAsync); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetUGCDetails); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execUGCDownload); \
	DECLARE_FUNCTION(execUGCDownloadToLocation); \
	DECLARE_FUNCTION(execUGCRead);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteStorage(); \
	friend struct Z_Construct_UClass_URemoteStorage_Statics; \
public: \
	DECLARE_CLASS(URemoteStorage, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(URemoteStorage)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_INCLASS \
private: \
	static void StaticRegisterNativesURemoteStorage(); \
	friend struct Z_Construct_UClass_URemoteStorage_Statics; \
public: \
	DECLARE_CLASS(URemoteStorage, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(URemoteStorage)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteStorage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteStorage(URemoteStorage&&); \
	NO_API URemoteStorage(const URemoteStorage&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteStorage(URemoteStorage&&); \
	NO_API URemoteStorage(const URemoteStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteStorage)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_21_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class URemoteStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RemoteStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
