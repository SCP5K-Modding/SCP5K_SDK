// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/FBPSteamResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBPSteamResult() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
// End Cross Module References
	static UEnum* FBPSteamResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("FBPSteamResult"));
		}
		return Singleton;
	}
	template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<FBPSteamResult>()
	{
		return FBPSteamResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FBPSteamResult(FBPSteamResult_StaticEnum, TEXT("/Script/AdvancedSteamSessions"), TEXT("FBPSteamResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Hash() { return 3698461340U; }
	UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FBPSteamResult"), 0, Get_Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FBPSteamResult::K_EResultInvalid", (int64)FBPSteamResult::K_EResultInvalid },
				{ "FBPSteamResult::k_EResultOK", (int64)FBPSteamResult::k_EResultOK },
				{ "FBPSteamResult::k_EResultFail", (int64)FBPSteamResult::k_EResultFail },
				{ "FBPSteamResult::k_EResultNoConnection", (int64)FBPSteamResult::k_EResultNoConnection },
				{ "FBPSteamResult::k_EResultInvalidPassword", (int64)FBPSteamResult::k_EResultInvalidPassword },
				{ "FBPSteamResult::k_EResultLoggedInElsewhere", (int64)FBPSteamResult::k_EResultLoggedInElsewhere },
				{ "FBPSteamResult::k_EResultInvalidProtocolVer", (int64)FBPSteamResult::k_EResultInvalidProtocolVer },
				{ "FBPSteamResult::k_EResultInvalidParam", (int64)FBPSteamResult::k_EResultInvalidParam },
				{ "FBPSteamResult::k_EResultFileNotFound", (int64)FBPSteamResult::k_EResultFileNotFound },
				{ "FBPSteamResult::k_EResultBusy", (int64)FBPSteamResult::k_EResultBusy },
				{ "FBPSteamResult::k_EResultInvalidState", (int64)FBPSteamResult::k_EResultInvalidState },
				{ "FBPSteamResult::k_EResultInvalidName", (int64)FBPSteamResult::k_EResultInvalidName },
				{ "FBPSteamResult::k_EResultInvalidEmail", (int64)FBPSteamResult::k_EResultInvalidEmail },
				{ "FBPSteamResult::k_EResultDuplicateName", (int64)FBPSteamResult::k_EResultDuplicateName },
				{ "FBPSteamResult::k_EResultAccessDenied", (int64)FBPSteamResult::k_EResultAccessDenied },
				{ "FBPSteamResult::k_EResultTimeout", (int64)FBPSteamResult::k_EResultTimeout },
				{ "FBPSteamResult::k_EResultBanned", (int64)FBPSteamResult::k_EResultBanned },
				{ "FBPSteamResult::k_EResultAccountNotFound", (int64)FBPSteamResult::k_EResultAccountNotFound },
				{ "FBPSteamResult::k_EResultInvalidSteamID", (int64)FBPSteamResult::k_EResultInvalidSteamID },
				{ "FBPSteamResult::k_EResultServiceUnavailable", (int64)FBPSteamResult::k_EResultServiceUnavailable },
				{ "FBPSteamResult::k_EResultNotLoggedOn", (int64)FBPSteamResult::k_EResultNotLoggedOn },
				{ "FBPSteamResult::k_EResultPending", (int64)FBPSteamResult::k_EResultPending },
				{ "FBPSteamResult::k_EResultEncryptionFailure", (int64)FBPSteamResult::k_EResultEncryptionFailure },
				{ "FBPSteamResult::k_EResultInsufficientPrivilege", (int64)FBPSteamResult::k_EResultInsufficientPrivilege },
				{ "FBPSteamResult::k_EResultLimitExceeded", (int64)FBPSteamResult::k_EResultLimitExceeded },
				{ "FBPSteamResult::k_EResultRevoked", (int64)FBPSteamResult::k_EResultRevoked },
				{ "FBPSteamResult::k_EResultExpired", (int64)FBPSteamResult::k_EResultExpired },
				{ "FBPSteamResult::k_EResultAlreadyRedeemed", (int64)FBPSteamResult::k_EResultAlreadyRedeemed },
				{ "FBPSteamResult::k_EResultDuplicateRequest", (int64)FBPSteamResult::k_EResultDuplicateRequest },
				{ "FBPSteamResult::k_EResultAlreadyOwned", (int64)FBPSteamResult::k_EResultAlreadyOwned },
				{ "FBPSteamResult::k_EResultIPNotFound", (int64)FBPSteamResult::k_EResultIPNotFound },
				{ "FBPSteamResult::k_EResultPersistFailed", (int64)FBPSteamResult::k_EResultPersistFailed },
				{ "FBPSteamResult::k_EResultLockingFailed", (int64)FBPSteamResult::k_EResultLockingFailed },
				{ "FBPSteamResult::k_EResultLogonSessionReplaced", (int64)FBPSteamResult::k_EResultLogonSessionReplaced },
				{ "FBPSteamResult::k_EResultConnectFailed", (int64)FBPSteamResult::k_EResultConnectFailed },
				{ "FBPSteamResult::k_EResultHandshakeFailed", (int64)FBPSteamResult::k_EResultHandshakeFailed },
				{ "FBPSteamResult::k_EResultIOFailure", (int64)FBPSteamResult::k_EResultIOFailure },
				{ "FBPSteamResult::k_EResultRemoteDisconnect", (int64)FBPSteamResult::k_EResultRemoteDisconnect },
				{ "FBPSteamResult::k_EResultShoppingCartNotFound", (int64)FBPSteamResult::k_EResultShoppingCartNotFound },
				{ "FBPSteamResult::k_EResultBlocked", (int64)FBPSteamResult::k_EResultBlocked },
				{ "FBPSteamResult::k_EResultIgnored", (int64)FBPSteamResult::k_EResultIgnored },
				{ "FBPSteamResult::k_EResultNoMatch", (int64)FBPSteamResult::k_EResultNoMatch },
				{ "FBPSteamResult::k_EResultAccountDisabled", (int64)FBPSteamResult::k_EResultAccountDisabled },
				{ "FBPSteamResult::k_EResultServiceReadOnly", (int64)FBPSteamResult::k_EResultServiceReadOnly },
				{ "FBPSteamResult::k_EResultAccountNotFeatured", (int64)FBPSteamResult::k_EResultAccountNotFeatured },
				{ "FBPSteamResult::k_EResultAdministratorOK", (int64)FBPSteamResult::k_EResultAdministratorOK },
				{ "FBPSteamResult::k_EResultContentVersion", (int64)FBPSteamResult::k_EResultContentVersion },
				{ "FBPSteamResult::k_EResultTryAnotherCM", (int64)FBPSteamResult::k_EResultTryAnotherCM },
				{ "FBPSteamResult::k_EResultPasswordRequiredToKickSession", (int64)FBPSteamResult::k_EResultPasswordRequiredToKickSession },
				{ "FBPSteamResult::k_EResultAlreadyLoggedInElsewhere", (int64)FBPSteamResult::k_EResultAlreadyLoggedInElsewhere },
				{ "FBPSteamResult::k_EResultSuspended", (int64)FBPSteamResult::k_EResultSuspended },
				{ "FBPSteamResult::k_EResultCancelled", (int64)FBPSteamResult::k_EResultCancelled },
				{ "FBPSteamResult::k_EResultDataCorruption", (int64)FBPSteamResult::k_EResultDataCorruption },
				{ "FBPSteamResult::k_EResultDiskFull", (int64)FBPSteamResult::k_EResultDiskFull },
				{ "FBPSteamResult::k_EResultRemoteCallFailed", (int64)FBPSteamResult::k_EResultRemoteCallFailed },
				{ "FBPSteamResult::k_EResultPasswordUnset", (int64)FBPSteamResult::k_EResultPasswordUnset },
				{ "FBPSteamResult::k_EResultExternalAccountUnlinked", (int64)FBPSteamResult::k_EResultExternalAccountUnlinked },
				{ "FBPSteamResult::k_EResultPSNTicketInvalid", (int64)FBPSteamResult::k_EResultPSNTicketInvalid },
				{ "FBPSteamResult::k_EResultExternalAccountAlreadyLinked", (int64)FBPSteamResult::k_EResultExternalAccountAlreadyLinked },
				{ "FBPSteamResult::k_EResultRemoteFileConflict", (int64)FBPSteamResult::k_EResultRemoteFileConflict },
				{ "FBPSteamResult::k_EResultIllegalPassword", (int64)FBPSteamResult::k_EResultIllegalPassword },
				{ "FBPSteamResult::k_EResultSameAsPreviousValue", (int64)FBPSteamResult::k_EResultSameAsPreviousValue },
				{ "FBPSteamResult::k_EResultAccountLogonDenied", (int64)FBPSteamResult::k_EResultAccountLogonDenied },
				{ "FBPSteamResult::k_EResultCannotUseOldPassword", (int64)FBPSteamResult::k_EResultCannotUseOldPassword },
				{ "FBPSteamResult::k_EResultInvalidLoginAuthCode", (int64)FBPSteamResult::k_EResultInvalidLoginAuthCode },
				{ "FBPSteamResult::k_EResultAccountLogonDeniedNoMail", (int64)FBPSteamResult::k_EResultAccountLogonDeniedNoMail },
				{ "FBPSteamResult::k_EResultHardwareNotCapableOfIPT", (int64)FBPSteamResult::k_EResultHardwareNotCapableOfIPT },
				{ "FBPSteamResult::k_EResultIPTInitError", (int64)FBPSteamResult::k_EResultIPTInitError },
				{ "FBPSteamResult::k_EResultParentalControlRestricted", (int64)FBPSteamResult::k_EResultParentalControlRestricted },
				{ "FBPSteamResult::k_EResultFacebookQueryError", (int64)FBPSteamResult::k_EResultFacebookQueryError },
				{ "FBPSteamResult::k_EResultExpiredLoginAuthCode", (int64)FBPSteamResult::k_EResultExpiredLoginAuthCode },
				{ "FBPSteamResult::k_EResultIPLoginRestrictionFailed", (int64)FBPSteamResult::k_EResultIPLoginRestrictionFailed },
				{ "FBPSteamResult::k_EResultAccountLockedDown", (int64)FBPSteamResult::k_EResultAccountLockedDown },
				{ "FBPSteamResult::k_EResultAccountLogonDeniedVerifiedEmailRequired", (int64)FBPSteamResult::k_EResultAccountLogonDeniedVerifiedEmailRequired },
				{ "FBPSteamResult::k_EResultNoMatchingURL", (int64)FBPSteamResult::k_EResultNoMatchingURL },
				{ "FBPSteamResult::k_EResultBadResponse", (int64)FBPSteamResult::k_EResultBadResponse },
				{ "FBPSteamResult::k_EResultRequirePasswordReEntry", (int64)FBPSteamResult::k_EResultRequirePasswordReEntry },
				{ "FBPSteamResult::k_EResultValueOutOfRange", (int64)FBPSteamResult::k_EResultValueOutOfRange },
				{ "FBPSteamResult::k_EResultUnexpectedError", (int64)FBPSteamResult::k_EResultUnexpectedError },
				{ "FBPSteamResult::k_EResultDisabled", (int64)FBPSteamResult::k_EResultDisabled },
				{ "FBPSteamResult::k_EResultInvalidCEGSubmission", (int64)FBPSteamResult::k_EResultInvalidCEGSubmission },
				{ "FBPSteamResult::k_EResultRestrictedDevice", (int64)FBPSteamResult::k_EResultRestrictedDevice },
				{ "FBPSteamResult::k_EResultRegionLocked", (int64)FBPSteamResult::k_EResultRegionLocked },
				{ "FBPSteamResult::k_EResultRateLimitExceeded", (int64)FBPSteamResult::k_EResultRateLimitExceeded },
				{ "FBPSteamResult::k_EResultAccountLoginDeniedNeedTwoFactor", (int64)FBPSteamResult::k_EResultAccountLoginDeniedNeedTwoFactor },
				{ "FBPSteamResult::k_EResultItemDeleted", (int64)FBPSteamResult::k_EResultItemDeleted },
				{ "FBPSteamResult::k_EResultAccountLoginDeniedThrottle", (int64)FBPSteamResult::k_EResultAccountLoginDeniedThrottle },
				{ "FBPSteamResult::k_EResultTwoFactorCodeMismatch", (int64)FBPSteamResult::k_EResultTwoFactorCodeMismatch },
				{ "FBPSteamResult::k_EResultTwoFactorActivationCodeMismatch", (int64)FBPSteamResult::k_EResultTwoFactorActivationCodeMismatch },
				{ "FBPSteamResult::k_EResultAccountAssociatedToMultiplePartners", (int64)FBPSteamResult::k_EResultAccountAssociatedToMultiplePartners },
				{ "FBPSteamResult::k_EResultNotModified", (int64)FBPSteamResult::k_EResultNotModified },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "k_EResultAccessDenied.Name", "FBPSteamResult::k_EResultAccessDenied" },
				{ "k_EResultAccountAssociatedToMultiplePartners.Name", "FBPSteamResult::k_EResultAccountAssociatedToMultiplePartners" },
				{ "k_EResultAccountDisabled.Name", "FBPSteamResult::k_EResultAccountDisabled" },
				{ "k_EResultAccountLockedDown.Name", "FBPSteamResult::k_EResultAccountLockedDown" },
				{ "k_EResultAccountLoginDeniedNeedTwoFactor.Name", "FBPSteamResult::k_EResultAccountLoginDeniedNeedTwoFactor" },
				{ "k_EResultAccountLoginDeniedThrottle.Name", "FBPSteamResult::k_EResultAccountLoginDeniedThrottle" },
				{ "k_EResultAccountLogonDenied.Name", "FBPSteamResult::k_EResultAccountLogonDenied" },
				{ "k_EResultAccountLogonDeniedNoMail.Name", "FBPSteamResult::k_EResultAccountLogonDeniedNoMail" },
				{ "k_EResultAccountLogonDeniedVerifiedEmailRequired.Name", "FBPSteamResult::k_EResultAccountLogonDeniedVerifiedEmailRequired" },
				{ "k_EResultAccountNotFeatured.Name", "FBPSteamResult::k_EResultAccountNotFeatured" },
				{ "k_EResultAccountNotFound.Name", "FBPSteamResult::k_EResultAccountNotFound" },
				{ "k_EResultAdministratorOK.Name", "FBPSteamResult::k_EResultAdministratorOK" },
				{ "k_EResultAlreadyLoggedInElsewhere.Name", "FBPSteamResult::k_EResultAlreadyLoggedInElsewhere" },
				{ "k_EResultAlreadyOwned.Name", "FBPSteamResult::k_EResultAlreadyOwned" },
				{ "k_EResultAlreadyRedeemed.Name", "FBPSteamResult::k_EResultAlreadyRedeemed" },
				{ "k_EResultBadResponse.Name", "FBPSteamResult::k_EResultBadResponse" },
				{ "k_EResultBanned.Name", "FBPSteamResult::k_EResultBanned" },
				{ "k_EResultBlocked.Name", "FBPSteamResult::k_EResultBlocked" },
				{ "k_EResultBusy.Name", "FBPSteamResult::k_EResultBusy" },
				{ "k_EResultCancelled.Name", "FBPSteamResult::k_EResultCancelled" },
				{ "k_EResultCannotUseOldPassword.Name", "FBPSteamResult::k_EResultCannotUseOldPassword" },
				{ "k_EResultConnectFailed.Name", "FBPSteamResult::k_EResultConnectFailed" },
				{ "k_EResultContentVersion.Name", "FBPSteamResult::k_EResultContentVersion" },
				{ "k_EResultDataCorruption.Name", "FBPSteamResult::k_EResultDataCorruption" },
				{ "k_EResultDisabled.Name", "FBPSteamResult::k_EResultDisabled" },
				{ "k_EResultDiskFull.Name", "FBPSteamResult::k_EResultDiskFull" },
				{ "k_EResultDuplicateName.Name", "FBPSteamResult::k_EResultDuplicateName" },
				{ "k_EResultDuplicateRequest.Name", "FBPSteamResult::k_EResultDuplicateRequest" },
				{ "k_EResultEncryptionFailure.Name", "FBPSteamResult::k_EResultEncryptionFailure" },
				{ "k_EResultExpired.Name", "FBPSteamResult::k_EResultExpired" },
				{ "k_EResultExpiredLoginAuthCode.Name", "FBPSteamResult::k_EResultExpiredLoginAuthCode" },
				{ "k_EResultExternalAccountAlreadyLinked.Name", "FBPSteamResult::k_EResultExternalAccountAlreadyLinked" },
				{ "k_EResultExternalAccountUnlinked.Name", "FBPSteamResult::k_EResultExternalAccountUnlinked" },
				{ "k_EResultFacebookQueryError.Name", "FBPSteamResult::k_EResultFacebookQueryError" },
				{ "k_EResultFail.Name", "FBPSteamResult::k_EResultFail" },
				{ "k_EResultFileNotFound.Name", "FBPSteamResult::k_EResultFileNotFound" },
				{ "k_EResultHandshakeFailed.Name", "FBPSteamResult::k_EResultHandshakeFailed" },
				{ "k_EResultHardwareNotCapableOfIPT.Name", "FBPSteamResult::k_EResultHardwareNotCapableOfIPT" },
				{ "k_EResultIgnored.Name", "FBPSteamResult::k_EResultIgnored" },
				{ "k_EResultIllegalPassword.Name", "FBPSteamResult::k_EResultIllegalPassword" },
				{ "k_EResultInsufficientPrivilege.Name", "FBPSteamResult::k_EResultInsufficientPrivilege" },
				{ "K_EResultInvalid.Name", "FBPSteamResult::K_EResultInvalid" },
				{ "k_EResultInvalidCEGSubmission.Name", "FBPSteamResult::k_EResultInvalidCEGSubmission" },
				{ "k_EResultInvalidEmail.Name", "FBPSteamResult::k_EResultInvalidEmail" },
				{ "k_EResultInvalidLoginAuthCode.Name", "FBPSteamResult::k_EResultInvalidLoginAuthCode" },
				{ "k_EResultInvalidName.Name", "FBPSteamResult::k_EResultInvalidName" },
				{ "k_EResultInvalidParam.Name", "FBPSteamResult::k_EResultInvalidParam" },
				{ "k_EResultInvalidPassword.Name", "FBPSteamResult::k_EResultInvalidPassword" },
				{ "k_EResultInvalidProtocolVer.Name", "FBPSteamResult::k_EResultInvalidProtocolVer" },
				{ "k_EResultInvalidState.Name", "FBPSteamResult::k_EResultInvalidState" },
				{ "k_EResultInvalidSteamID.Name", "FBPSteamResult::k_EResultInvalidSteamID" },
				{ "k_EResultIOFailure.Name", "FBPSteamResult::k_EResultIOFailure" },
				{ "k_EResultIPLoginRestrictionFailed.Name", "FBPSteamResult::k_EResultIPLoginRestrictionFailed" },
				{ "k_EResultIPNotFound.Name", "FBPSteamResult::k_EResultIPNotFound" },
				{ "k_EResultIPTInitError.Name", "FBPSteamResult::k_EResultIPTInitError" },
				{ "k_EResultItemDeleted.Name", "FBPSteamResult::k_EResultItemDeleted" },
				{ "k_EResultLimitExceeded.Name", "FBPSteamResult::k_EResultLimitExceeded" },
				{ "k_EResultLockingFailed.Name", "FBPSteamResult::k_EResultLockingFailed" },
				{ "k_EResultLoggedInElsewhere.Name", "FBPSteamResult::k_EResultLoggedInElsewhere" },
				{ "k_EResultLogonSessionReplaced.Name", "FBPSteamResult::k_EResultLogonSessionReplaced" },
				{ "k_EResultNoConnection.Name", "FBPSteamResult::k_EResultNoConnection" },
				{ "k_EResultNoMatch.Name", "FBPSteamResult::k_EResultNoMatch" },
				{ "k_EResultNoMatchingURL.Name", "FBPSteamResult::k_EResultNoMatchingURL" },
				{ "k_EResultNotLoggedOn.Name", "FBPSteamResult::k_EResultNotLoggedOn" },
				{ "k_EResultNotModified.Name", "FBPSteamResult::k_EResultNotModified" },
				{ "k_EResultOK.Name", "FBPSteamResult::k_EResultOK" },
				{ "k_EResultParentalControlRestricted.Name", "FBPSteamResult::k_EResultParentalControlRestricted" },
				{ "k_EResultPasswordRequiredToKickSession.Name", "FBPSteamResult::k_EResultPasswordRequiredToKickSession" },
				{ "k_EResultPasswordUnset.Name", "FBPSteamResult::k_EResultPasswordUnset" },
				{ "k_EResultPending.Name", "FBPSteamResult::k_EResultPending" },
				{ "k_EResultPersistFailed.Name", "FBPSteamResult::k_EResultPersistFailed" },
				{ "k_EResultPSNTicketInvalid.Name", "FBPSteamResult::k_EResultPSNTicketInvalid" },
				{ "k_EResultRateLimitExceeded.Name", "FBPSteamResult::k_EResultRateLimitExceeded" },
				{ "k_EResultRegionLocked.Name", "FBPSteamResult::k_EResultRegionLocked" },
				{ "k_EResultRemoteCallFailed.Name", "FBPSteamResult::k_EResultRemoteCallFailed" },
				{ "k_EResultRemoteDisconnect.Name", "FBPSteamResult::k_EResultRemoteDisconnect" },
				{ "k_EResultRemoteFileConflict.Name", "FBPSteamResult::k_EResultRemoteFileConflict" },
				{ "k_EResultRequirePasswordReEntry.Name", "FBPSteamResult::k_EResultRequirePasswordReEntry" },
				{ "k_EResultRestrictedDevice.Name", "FBPSteamResult::k_EResultRestrictedDevice" },
				{ "k_EResultRevoked.Name", "FBPSteamResult::k_EResultRevoked" },
				{ "k_EResultSameAsPreviousValue.Name", "FBPSteamResult::k_EResultSameAsPreviousValue" },
				{ "k_EResultServiceReadOnly.Name", "FBPSteamResult::k_EResultServiceReadOnly" },
				{ "k_EResultServiceUnavailable.Name", "FBPSteamResult::k_EResultServiceUnavailable" },
				{ "k_EResultShoppingCartNotFound.Name", "FBPSteamResult::k_EResultShoppingCartNotFound" },
				{ "k_EResultSuspended.Name", "FBPSteamResult::k_EResultSuspended" },
				{ "k_EResultTimeout.Name", "FBPSteamResult::k_EResultTimeout" },
				{ "k_EResultTryAnotherCM.Name", "FBPSteamResult::k_EResultTryAnotherCM" },
				{ "k_EResultTwoFactorActivationCodeMismatch.Name", "FBPSteamResult::k_EResultTwoFactorActivationCodeMismatch" },
				{ "k_EResultTwoFactorCodeMismatch.Name", "FBPSteamResult::k_EResultTwoFactorCodeMismatch" },
				{ "k_EResultUnexpectedError.Name", "FBPSteamResult::k_EResultUnexpectedError" },
				{ "k_EResultValueOutOfRange.Name", "FBPSteamResult::k_EResultValueOutOfRange" },
				{ "ModuleRelativePath", "Public/FBPSteamResult.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
				nullptr,
				"FBPSteamResult",
				"FBPSteamResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
