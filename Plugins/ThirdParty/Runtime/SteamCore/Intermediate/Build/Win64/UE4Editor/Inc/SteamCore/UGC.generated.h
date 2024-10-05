// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPublishedFileID;
struct FUGCQueryHandle;
struct FUGCUpdateHandle;
enum class ESteamItemPreviewType : uint8;
enum class ESteamWorkshopFileType : uint8;
enum class ESteamUGCQuery : uint8;
enum class ESteamUGCMatchingUGCType : uint8;
struct FSteamID;
enum class ESteamUserUGCList : uint8;
enum class ESteamUserUGCListSortOrder : uint8;
enum class ESteamItemState : uint8;
enum class ESteamItemUpdateStatus : uint8;
struct FSteamUGCDetails;
enum class ESteamItemStatistic : uint8;
enum class ESteamRemoteStoragePublishedFileVisibility : uint8;
#ifdef STEAMCORE_UGC_generated_h
#error "UGC.generated.h already included, missing '#pragma once' in UGC.h"
#endif
#define STEAMCORE_UGC_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddAppDependency); \
	DECLARE_FUNCTION(execAddDependency); \
	DECLARE_FUNCTION(execAddExcludedTag); \
	DECLARE_FUNCTION(execAddItemKeyValueTag); \
	DECLARE_FUNCTION(execAddItemPreviewFile); \
	DECLARE_FUNCTION(execAddItemPreviewVideo); \
	DECLARE_FUNCTION(execAddItemToFavorites); \
	DECLARE_FUNCTION(execAddRequiredKeyValueTag); \
	DECLARE_FUNCTION(execAddRequiredTag); \
	DECLARE_FUNCTION(execAddRequiredTagGroup); \
	DECLARE_FUNCTION(execBInitWorkshopForGameServer); \
	DECLARE_FUNCTION(execCreateItem); \
	DECLARE_FUNCTION(execCreateQueryAllUGCRequest); \
	DECLARE_FUNCTION(execCreateQueryUGCDetailsRequest); \
	DECLARE_FUNCTION(execCreateQueryUserUGCRequest); \
	DECLARE_FUNCTION(execDeleteItem); \
	DECLARE_FUNCTION(execDownloadItem); \
	DECLARE_FUNCTION(execGetAppDependencies); \
	DECLARE_FUNCTION(execGetItemDownloadInfo); \
	DECLARE_FUNCTION(execGetItemInstallInfo); \
	DECLARE_FUNCTION(execGetItemState); \
	DECLARE_FUNCTION(execGetItemUpdateProgress); \
	DECLARE_FUNCTION(execGetNumSubscribedItems); \
	DECLARE_FUNCTION(execGetQueryUGCAdditionalPreview); \
	DECLARE_FUNCTION(execGetQueryUGCChildren); \
	DECLARE_FUNCTION(execGetQueryUGCKeyValueTag); \
	DECLARE_FUNCTION(execGetQueryUGCMetadata); \
	DECLARE_FUNCTION(execGetQueryUGCNumAdditionalPreviews); \
	DECLARE_FUNCTION(execGetQueryUGCNumKeyValueTags); \
	DECLARE_FUNCTION(execGetQueryUGCNumTags); \
	DECLARE_FUNCTION(execGetQueryUGCPreviewURL); \
	DECLARE_FUNCTION(execGetQueryUGCResult); \
	DECLARE_FUNCTION(execGetQueryUGCStatistic); \
	DECLARE_FUNCTION(execGetQueryUGCTag); \
	DECLARE_FUNCTION(execGetQueryUGCTagDisplayName); \
	DECLARE_FUNCTION(execGetSubscribedItems); \
	DECLARE_FUNCTION(execGetUserItemVote); \
	DECLARE_FUNCTION(execReleaseQueryUGCRequest); \
	DECLARE_FUNCTION(execRemoveAppDependency); \
	DECLARE_FUNCTION(execRemoveDependency); \
	DECLARE_FUNCTION(execRemoveItemFromFavorites); \
	DECLARE_FUNCTION(execRemoveItemKeyValueTags); \
	DECLARE_FUNCTION(execRemoveItemPreview); \
	DECLARE_FUNCTION(execSendQueryUGCRequest); \
	DECLARE_FUNCTION(execSetAllowCachedResponse); \
	DECLARE_FUNCTION(execSetAllowLegacyUpload); \
	DECLARE_FUNCTION(execSetCloudFileNameFilter); \
	DECLARE_FUNCTION(execSetItemContent); \
	DECLARE_FUNCTION(execSetItemDescription); \
	DECLARE_FUNCTION(execSetItemMetadata); \
	DECLARE_FUNCTION(execSetItemPreview); \
	DECLARE_FUNCTION(execSetItemTags); \
	DECLARE_FUNCTION(execSetItemTitle); \
	DECLARE_FUNCTION(execSetItemUpdateLanguage); \
	DECLARE_FUNCTION(execSetItemVisibility); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execSetMatchAnyTag); \
	DECLARE_FUNCTION(execSetRankedByTrendDays); \
	DECLARE_FUNCTION(execSetReturnAdditionalPreviews); \
	DECLARE_FUNCTION(execSetReturnChildren); \
	DECLARE_FUNCTION(execSetReturnKeyValueTags); \
	DECLARE_FUNCTION(execSetReturnLongDescription); \
	DECLARE_FUNCTION(execSetReturnMetadata); \
	DECLARE_FUNCTION(execSetReturnOnlyIDs); \
	DECLARE_FUNCTION(execSetReturnPlaytimeStats); \
	DECLARE_FUNCTION(execSetReturnTotalOnly); \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execSetUserItemVote); \
	DECLARE_FUNCTION(execStartItemUpdate); \
	DECLARE_FUNCTION(execStartPlaytimeTracking); \
	DECLARE_FUNCTION(execStopPlaytimeTracking); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingForAllItems); \
	DECLARE_FUNCTION(execSubmitItemUpdate); \
	DECLARE_FUNCTION(execSubscribeItem); \
	DECLARE_FUNCTION(execSuspendDownloads); \
	DECLARE_FUNCTION(execUnsubscribeItem); \
	DECLARE_FUNCTION(execUpdateItemPreviewFile); \
	DECLARE_FUNCTION(execUpdateItemPreviewVideo);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAppDependency); \
	DECLARE_FUNCTION(execAddDependency); \
	DECLARE_FUNCTION(execAddExcludedTag); \
	DECLARE_FUNCTION(execAddItemKeyValueTag); \
	DECLARE_FUNCTION(execAddItemPreviewFile); \
	DECLARE_FUNCTION(execAddItemPreviewVideo); \
	DECLARE_FUNCTION(execAddItemToFavorites); \
	DECLARE_FUNCTION(execAddRequiredKeyValueTag); \
	DECLARE_FUNCTION(execAddRequiredTag); \
	DECLARE_FUNCTION(execAddRequiredTagGroup); \
	DECLARE_FUNCTION(execBInitWorkshopForGameServer); \
	DECLARE_FUNCTION(execCreateItem); \
	DECLARE_FUNCTION(execCreateQueryAllUGCRequest); \
	DECLARE_FUNCTION(execCreateQueryUGCDetailsRequest); \
	DECLARE_FUNCTION(execCreateQueryUserUGCRequest); \
	DECLARE_FUNCTION(execDeleteItem); \
	DECLARE_FUNCTION(execDownloadItem); \
	DECLARE_FUNCTION(execGetAppDependencies); \
	DECLARE_FUNCTION(execGetItemDownloadInfo); \
	DECLARE_FUNCTION(execGetItemInstallInfo); \
	DECLARE_FUNCTION(execGetItemState); \
	DECLARE_FUNCTION(execGetItemUpdateProgress); \
	DECLARE_FUNCTION(execGetNumSubscribedItems); \
	DECLARE_FUNCTION(execGetQueryUGCAdditionalPreview); \
	DECLARE_FUNCTION(execGetQueryUGCChildren); \
	DECLARE_FUNCTION(execGetQueryUGCKeyValueTag); \
	DECLARE_FUNCTION(execGetQueryUGCMetadata); \
	DECLARE_FUNCTION(execGetQueryUGCNumAdditionalPreviews); \
	DECLARE_FUNCTION(execGetQueryUGCNumKeyValueTags); \
	DECLARE_FUNCTION(execGetQueryUGCNumTags); \
	DECLARE_FUNCTION(execGetQueryUGCPreviewURL); \
	DECLARE_FUNCTION(execGetQueryUGCResult); \
	DECLARE_FUNCTION(execGetQueryUGCStatistic); \
	DECLARE_FUNCTION(execGetQueryUGCTag); \
	DECLARE_FUNCTION(execGetQueryUGCTagDisplayName); \
	DECLARE_FUNCTION(execGetSubscribedItems); \
	DECLARE_FUNCTION(execGetUserItemVote); \
	DECLARE_FUNCTION(execReleaseQueryUGCRequest); \
	DECLARE_FUNCTION(execRemoveAppDependency); \
	DECLARE_FUNCTION(execRemoveDependency); \
	DECLARE_FUNCTION(execRemoveItemFromFavorites); \
	DECLARE_FUNCTION(execRemoveItemKeyValueTags); \
	DECLARE_FUNCTION(execRemoveItemPreview); \
	DECLARE_FUNCTION(execSendQueryUGCRequest); \
	DECLARE_FUNCTION(execSetAllowCachedResponse); \
	DECLARE_FUNCTION(execSetAllowLegacyUpload); \
	DECLARE_FUNCTION(execSetCloudFileNameFilter); \
	DECLARE_FUNCTION(execSetItemContent); \
	DECLARE_FUNCTION(execSetItemDescription); \
	DECLARE_FUNCTION(execSetItemMetadata); \
	DECLARE_FUNCTION(execSetItemPreview); \
	DECLARE_FUNCTION(execSetItemTags); \
	DECLARE_FUNCTION(execSetItemTitle); \
	DECLARE_FUNCTION(execSetItemUpdateLanguage); \
	DECLARE_FUNCTION(execSetItemVisibility); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execSetMatchAnyTag); \
	DECLARE_FUNCTION(execSetRankedByTrendDays); \
	DECLARE_FUNCTION(execSetReturnAdditionalPreviews); \
	DECLARE_FUNCTION(execSetReturnChildren); \
	DECLARE_FUNCTION(execSetReturnKeyValueTags); \
	DECLARE_FUNCTION(execSetReturnLongDescription); \
	DECLARE_FUNCTION(execSetReturnMetadata); \
	DECLARE_FUNCTION(execSetReturnOnlyIDs); \
	DECLARE_FUNCTION(execSetReturnPlaytimeStats); \
	DECLARE_FUNCTION(execSetReturnTotalOnly); \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execSetUserItemVote); \
	DECLARE_FUNCTION(execStartItemUpdate); \
	DECLARE_FUNCTION(execStartPlaytimeTracking); \
	DECLARE_FUNCTION(execStopPlaytimeTracking); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingForAllItems); \
	DECLARE_FUNCTION(execSubmitItemUpdate); \
	DECLARE_FUNCTION(execSubscribeItem); \
	DECLARE_FUNCTION(execSuspendDownloads); \
	DECLARE_FUNCTION(execUnsubscribeItem); \
	DECLARE_FUNCTION(execUpdateItemPreviewFile); \
	DECLARE_FUNCTION(execUpdateItemPreviewVideo);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGC(); \
	friend struct Z_Construct_UClass_UUGC_Statics; \
public: \
	DECLARE_CLASS(UUGC, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUGC)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUUGC(); \
	friend struct Z_Construct_UClass_UUGC_Statics; \
public: \
	DECLARE_CLASS(UUGC, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUGC)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGC(UUGC&&); \
	NO_API UUGC(const UUGC&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGC(UUGC&&); \
	NO_API UUGC(const UUGC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUGC)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_41_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UUGC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UGC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
