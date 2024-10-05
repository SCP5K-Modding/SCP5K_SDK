// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamResult() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamResult>()
	{
		return ESteamResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamResult(ESteamResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamResult_Hash() { return 212105081U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamResult::None", (int64)ESteamResult::None },
				{ "ESteamResult::OK", (int64)ESteamResult::OK },
				{ "ESteamResult::Fail", (int64)ESteamResult::Fail },
				{ "ESteamResult::NoConnection", (int64)ESteamResult::NoConnection },
				{ "ESteamResult::sultNoConnectionRetry", (int64)ESteamResult::sultNoConnectionRetry },
				{ "ESteamResult::InvalidPassword", (int64)ESteamResult::InvalidPassword },
				{ "ESteamResult::LoggedInElsewhere", (int64)ESteamResult::LoggedInElsewhere },
				{ "ESteamResult::InvalidProtocolVer", (int64)ESteamResult::InvalidProtocolVer },
				{ "ESteamResult::InvalidParam", (int64)ESteamResult::InvalidParam },
				{ "ESteamResult::FileNotFound", (int64)ESteamResult::FileNotFound },
				{ "ESteamResult::Busy", (int64)ESteamResult::Busy },
				{ "ESteamResult::InvalidState", (int64)ESteamResult::InvalidState },
				{ "ESteamResult::InvalidName", (int64)ESteamResult::InvalidName },
				{ "ESteamResult::InvalidEmail", (int64)ESteamResult::InvalidEmail },
				{ "ESteamResult::DuplicateName", (int64)ESteamResult::DuplicateName },
				{ "ESteamResult::AccessDenied", (int64)ESteamResult::AccessDenied },
				{ "ESteamResult::Timeout", (int64)ESteamResult::Timeout },
				{ "ESteamResult::Banned", (int64)ESteamResult::Banned },
				{ "ESteamResult::AccountNotFound", (int64)ESteamResult::AccountNotFound },
				{ "ESteamResult::InvalidSteamID", (int64)ESteamResult::InvalidSteamID },
				{ "ESteamResult::ServiceUnavailable", (int64)ESteamResult::ServiceUnavailable },
				{ "ESteamResult::NotLoggedOn", (int64)ESteamResult::NotLoggedOn },
				{ "ESteamResult::Pending", (int64)ESteamResult::Pending },
				{ "ESteamResult::EncryptionFailure", (int64)ESteamResult::EncryptionFailure },
				{ "ESteamResult::InsufficientPrivilege", (int64)ESteamResult::InsufficientPrivilege },
				{ "ESteamResult::LimitExceeded", (int64)ESteamResult::LimitExceeded },
				{ "ESteamResult::Revoked", (int64)ESteamResult::Revoked },
				{ "ESteamResult::Expired", (int64)ESteamResult::Expired },
				{ "ESteamResult::AlreadyRedeemed", (int64)ESteamResult::AlreadyRedeemed },
				{ "ESteamResult::DuplicateRequest", (int64)ESteamResult::DuplicateRequest },
				{ "ESteamResult::AlreadyOwned", (int64)ESteamResult::AlreadyOwned },
				{ "ESteamResult::IPNotFound", (int64)ESteamResult::IPNotFound },
				{ "ESteamResult::PersistFailed", (int64)ESteamResult::PersistFailed },
				{ "ESteamResult::LockingFailed", (int64)ESteamResult::LockingFailed },
				{ "ESteamResult::LogonSessionReplaced", (int64)ESteamResult::LogonSessionReplaced },
				{ "ESteamResult::ConnectFailed", (int64)ESteamResult::ConnectFailed },
				{ "ESteamResult::HandshakeFailed", (int64)ESteamResult::HandshakeFailed },
				{ "ESteamResult::IOFailure", (int64)ESteamResult::IOFailure },
				{ "ESteamResult::RemoteDisconnect", (int64)ESteamResult::RemoteDisconnect },
				{ "ESteamResult::ShoppingCartNotFound", (int64)ESteamResult::ShoppingCartNotFound },
				{ "ESteamResult::Blocked", (int64)ESteamResult::Blocked },
				{ "ESteamResult::Ignored", (int64)ESteamResult::Ignored },
				{ "ESteamResult::NoMatch", (int64)ESteamResult::NoMatch },
				{ "ESteamResult::AccountDisabled", (int64)ESteamResult::AccountDisabled },
				{ "ESteamResult::ServiceReadOnly", (int64)ESteamResult::ServiceReadOnly },
				{ "ESteamResult::AccountNotFeatured", (int64)ESteamResult::AccountNotFeatured },
				{ "ESteamResult::AdministratorOK", (int64)ESteamResult::AdministratorOK },
				{ "ESteamResult::ContentVersion", (int64)ESteamResult::ContentVersion },
				{ "ESteamResult::TryAnotherCM", (int64)ESteamResult::TryAnotherCM },
				{ "ESteamResult::PasswordRequiredToKickSession", (int64)ESteamResult::PasswordRequiredToKickSession },
				{ "ESteamResult::AlreadyLoggedInElsewhere", (int64)ESteamResult::AlreadyLoggedInElsewhere },
				{ "ESteamResult::Suspended", (int64)ESteamResult::Suspended },
				{ "ESteamResult::Cancelled", (int64)ESteamResult::Cancelled },
				{ "ESteamResult::DataCorruption", (int64)ESteamResult::DataCorruption },
				{ "ESteamResult::DiskFull", (int64)ESteamResult::DiskFull },
				{ "ESteamResult::RemoteCallFailed", (int64)ESteamResult::RemoteCallFailed },
				{ "ESteamResult::PasswordUnset", (int64)ESteamResult::PasswordUnset },
				{ "ESteamResult::ExternalAccountUnlinked", (int64)ESteamResult::ExternalAccountUnlinked },
				{ "ESteamResult::PSNTicketInvalid", (int64)ESteamResult::PSNTicketInvalid },
				{ "ESteamResult::ExternalAccountAlreadyLinked", (int64)ESteamResult::ExternalAccountAlreadyLinked },
				{ "ESteamResult::RemoteFileConflict", (int64)ESteamResult::RemoteFileConflict },
				{ "ESteamResult::IllegalPassword", (int64)ESteamResult::IllegalPassword },
				{ "ESteamResult::SameAsPreviousValue", (int64)ESteamResult::SameAsPreviousValue },
				{ "ESteamResult::AccountLogonDenied", (int64)ESteamResult::AccountLogonDenied },
				{ "ESteamResult::CannotUseOldPassword", (int64)ESteamResult::CannotUseOldPassword },
				{ "ESteamResult::InvalidLoginAuthCode", (int64)ESteamResult::InvalidLoginAuthCode },
				{ "ESteamResult::AccountLogonDeniedNoMail", (int64)ESteamResult::AccountLogonDeniedNoMail },
				{ "ESteamResult::HardwareNotCapableOfIPT", (int64)ESteamResult::HardwareNotCapableOfIPT },
				{ "ESteamResult::IPTInitError", (int64)ESteamResult::IPTInitError },
				{ "ESteamResult::ParentalControlRestricted", (int64)ESteamResult::ParentalControlRestricted },
				{ "ESteamResult::FacebookQueryError", (int64)ESteamResult::FacebookQueryError },
				{ "ESteamResult::ExpiredLoginAuthCode", (int64)ESteamResult::ExpiredLoginAuthCode },
				{ "ESteamResult::IPLoginRestrictionFailed", (int64)ESteamResult::IPLoginRestrictionFailed },
				{ "ESteamResult::AccountLockedDown", (int64)ESteamResult::AccountLockedDown },
				{ "ESteamResult::AccountLogonDeniedVerifiedEmailRequired", (int64)ESteamResult::AccountLogonDeniedVerifiedEmailRequired },
				{ "ESteamResult::NoMatchingURL", (int64)ESteamResult::NoMatchingURL },
				{ "ESteamResult::BadResponse", (int64)ESteamResult::BadResponse },
				{ "ESteamResult::RequirePasswordReEntry", (int64)ESteamResult::RequirePasswordReEntry },
				{ "ESteamResult::ValueOutOfRange", (int64)ESteamResult::ValueOutOfRange },
				{ "ESteamResult::UnexpectedError", (int64)ESteamResult::UnexpectedError },
				{ "ESteamResult::Disabled", (int64)ESteamResult::Disabled },
				{ "ESteamResult::InvalidCEGSubmission", (int64)ESteamResult::InvalidCEGSubmission },
				{ "ESteamResult::RestrictedDevice", (int64)ESteamResult::RestrictedDevice },
				{ "ESteamResult::RegionLocked", (int64)ESteamResult::RegionLocked },
				{ "ESteamResult::RateLimitExceeded", (int64)ESteamResult::RateLimitExceeded },
				{ "ESteamResult::AccountLoginDeniedNeedTwoFactor", (int64)ESteamResult::AccountLoginDeniedNeedTwoFactor },
				{ "ESteamResult::ItemDeleted", (int64)ESteamResult::ItemDeleted },
				{ "ESteamResult::AccountLoginDeniedThrottle", (int64)ESteamResult::AccountLoginDeniedThrottle },
				{ "ESteamResult::TwoFactorCodeMismatch", (int64)ESteamResult::TwoFactorCodeMismatch },
				{ "ESteamResult::TwoFactorActivationCodeMismatch", (int64)ESteamResult::TwoFactorActivationCodeMismatch },
				{ "ESteamResult::AccountAssociatedToMultiplePartners", (int64)ESteamResult::AccountAssociatedToMultiplePartners },
				{ "ESteamResult::NotModified", (int64)ESteamResult::NotModified },
				{ "ESteamResult::NoMobileDevice", (int64)ESteamResult::NoMobileDevice },
				{ "ESteamResult::TimeNotSynced", (int64)ESteamResult::TimeNotSynced },
				{ "ESteamResult::SmsCodeFailed", (int64)ESteamResult::SmsCodeFailed },
				{ "ESteamResult::AccountLimitExceeded", (int64)ESteamResult::AccountLimitExceeded },
				{ "ESteamResult::AccountActivityLimitExceeded", (int64)ESteamResult::AccountActivityLimitExceeded },
				{ "ESteamResult::PhoneActivityLimitExceeded", (int64)ESteamResult::PhoneActivityLimitExceeded },
				{ "ESteamResult::RefundToWallet", (int64)ESteamResult::RefundToWallet },
				{ "ESteamResult::EmailSendFailure", (int64)ESteamResult::EmailSendFailure },
				{ "ESteamResult::NotSettled", (int64)ESteamResult::NotSettled },
				{ "ESteamResult::NeedCaptcha", (int64)ESteamResult::NeedCaptcha },
				{ "ESteamResult::GSLTDenied", (int64)ESteamResult::GSLTDenied },
				{ "ESteamResult::GSOwnerDenied", (int64)ESteamResult::GSOwnerDenied },
				{ "ESteamResult::InvalidItemType", (int64)ESteamResult::InvalidItemType },
				{ "ESteamResult::IPBanned", (int64)ESteamResult::IPBanned },
				{ "ESteamResult::GSLTExpired", (int64)ESteamResult::GSLTExpired },
				{ "ESteamResult::InsufficientFunds", (int64)ESteamResult::InsufficientFunds },
				{ "ESteamResult::TooManyPending", (int64)ESteamResult::TooManyPending },
				{ "ESteamResult::NoSiteLicensesFound", (int64)ESteamResult::NoSiteLicensesFound },
				{ "ESteamResult::WGNetworkSendExceeded", (int64)ESteamResult::WGNetworkSendExceeded },
				{ "ESteamResult::AccountNotFriends", (int64)ESteamResult::AccountNotFriends },
				{ "ESteamResult::LimitedUserAccount", (int64)ESteamResult::LimitedUserAccount },
				{ "ESteamResult::CantRemoveItem", (int64)ESteamResult::CantRemoveItem },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccessDenied.Name", "ESteamResult::AccessDenied" },
				{ "AccountActivityLimitExceeded.Name", "ESteamResult::AccountActivityLimitExceeded" },
				{ "AccountAssociatedToMultiplePartners.Name", "ESteamResult::AccountAssociatedToMultiplePartners" },
				{ "AccountDisabled.Name", "ESteamResult::AccountDisabled" },
				{ "AccountLimitExceeded.Name", "ESteamResult::AccountLimitExceeded" },
				{ "AccountLockedDown.Name", "ESteamResult::AccountLockedDown" },
				{ "AccountLoginDeniedNeedTwoFactor.Name", "ESteamResult::AccountLoginDeniedNeedTwoFactor" },
				{ "AccountLoginDeniedThrottle.Name", "ESteamResult::AccountLoginDeniedThrottle" },
				{ "AccountLogonDenied.Name", "ESteamResult::AccountLogonDenied" },
				{ "AccountLogonDeniedNoMail.Name", "ESteamResult::AccountLogonDeniedNoMail" },
				{ "AccountLogonDeniedVerifiedEmailRequired.Name", "ESteamResult::AccountLogonDeniedVerifiedEmailRequired" },
				{ "AccountNotFeatured.Name", "ESteamResult::AccountNotFeatured" },
				{ "AccountNotFound.Name", "ESteamResult::AccountNotFound" },
				{ "AccountNotFriends.Name", "ESteamResult::AccountNotFriends" },
				{ "AdministratorOK.Name", "ESteamResult::AdministratorOK" },
				{ "AlreadyLoggedInElsewhere.Name", "ESteamResult::AlreadyLoggedInElsewhere" },
				{ "AlreadyOwned.Name", "ESteamResult::AlreadyOwned" },
				{ "AlreadyRedeemed.Name", "ESteamResult::AlreadyRedeemed" },
				{ "BadResponse.Name", "ESteamResult::BadResponse" },
				{ "Banned.Name", "ESteamResult::Banned" },
				{ "Blocked.Name", "ESteamResult::Blocked" },
				{ "BlueprintType", "true" },
				{ "Busy.Name", "ESteamResult::Busy" },
				{ "Cancelled.Name", "ESteamResult::Cancelled" },
				{ "CannotUseOldPassword.Name", "ESteamResult::CannotUseOldPassword" },
				{ "CantRemoveItem.Name", "ESteamResult::CantRemoveItem" },
				{ "ConnectFailed.Name", "ESteamResult::ConnectFailed" },
				{ "ContentVersion.Name", "ESteamResult::ContentVersion" },
				{ "DataCorruption.Name", "ESteamResult::DataCorruption" },
				{ "Disabled.Name", "ESteamResult::Disabled" },
				{ "DiskFull.Name", "ESteamResult::DiskFull" },
				{ "DuplicateName.Name", "ESteamResult::DuplicateName" },
				{ "DuplicateRequest.Name", "ESteamResult::DuplicateRequest" },
				{ "EmailSendFailure.Name", "ESteamResult::EmailSendFailure" },
				{ "EncryptionFailure.Name", "ESteamResult::EncryptionFailure" },
				{ "Expired.Name", "ESteamResult::Expired" },
				{ "ExpiredLoginAuthCode.Name", "ESteamResult::ExpiredLoginAuthCode" },
				{ "ExternalAccountAlreadyLinked.Name", "ESteamResult::ExternalAccountAlreadyLinked" },
				{ "ExternalAccountUnlinked.Name", "ESteamResult::ExternalAccountUnlinked" },
				{ "FacebookQueryError.Name", "ESteamResult::FacebookQueryError" },
				{ "Fail.Name", "ESteamResult::Fail" },
				{ "FileNotFound.Name", "ESteamResult::FileNotFound" },
				{ "GSLTDenied.Name", "ESteamResult::GSLTDenied" },
				{ "GSLTExpired.Name", "ESteamResult::GSLTExpired" },
				{ "GSOwnerDenied.Name", "ESteamResult::GSOwnerDenied" },
				{ "HandshakeFailed.Name", "ESteamResult::HandshakeFailed" },
				{ "HardwareNotCapableOfIPT.Name", "ESteamResult::HardwareNotCapableOfIPT" },
				{ "Ignored.Name", "ESteamResult::Ignored" },
				{ "IllegalPassword.Name", "ESteamResult::IllegalPassword" },
				{ "InsufficientFunds.Name", "ESteamResult::InsufficientFunds" },
				{ "InsufficientPrivilege.Name", "ESteamResult::InsufficientPrivilege" },
				{ "InvalidCEGSubmission.Name", "ESteamResult::InvalidCEGSubmission" },
				{ "InvalidEmail.Name", "ESteamResult::InvalidEmail" },
				{ "InvalidItemType.Name", "ESteamResult::InvalidItemType" },
				{ "InvalidLoginAuthCode.Name", "ESteamResult::InvalidLoginAuthCode" },
				{ "InvalidName.Name", "ESteamResult::InvalidName" },
				{ "InvalidParam.Name", "ESteamResult::InvalidParam" },
				{ "InvalidPassword.Name", "ESteamResult::InvalidPassword" },
				{ "InvalidProtocolVer.Name", "ESteamResult::InvalidProtocolVer" },
				{ "InvalidState.Name", "ESteamResult::InvalidState" },
				{ "InvalidSteamID.Name", "ESteamResult::InvalidSteamID" },
				{ "IOFailure.Name", "ESteamResult::IOFailure" },
				{ "IPBanned.Name", "ESteamResult::IPBanned" },
				{ "IPLoginRestrictionFailed.Name", "ESteamResult::IPLoginRestrictionFailed" },
				{ "IPNotFound.Name", "ESteamResult::IPNotFound" },
				{ "IPTInitError.Name", "ESteamResult::IPTInitError" },
				{ "ItemDeleted.Name", "ESteamResult::ItemDeleted" },
				{ "LimitedUserAccount.Name", "ESteamResult::LimitedUserAccount" },
				{ "LimitExceeded.Name", "ESteamResult::LimitExceeded" },
				{ "LockingFailed.Name", "ESteamResult::LockingFailed" },
				{ "LoggedInElsewhere.Name", "ESteamResult::LoggedInElsewhere" },
				{ "LogonSessionReplaced.Name", "ESteamResult::LogonSessionReplaced" },
				{ "ModuleRelativePath", "Public/ESteamResult.h" },
				{ "NeedCaptcha.Name", "ESteamResult::NeedCaptcha" },
				{ "NoConnection.Name", "ESteamResult::NoConnection" },
				{ "NoMatch.Name", "ESteamResult::NoMatch" },
				{ "NoMatchingURL.Name", "ESteamResult::NoMatchingURL" },
				{ "NoMobileDevice.Name", "ESteamResult::NoMobileDevice" },
				{ "None.Name", "ESteamResult::None" },
				{ "NoSiteLicensesFound.Name", "ESteamResult::NoSiteLicensesFound" },
				{ "NotLoggedOn.Name", "ESteamResult::NotLoggedOn" },
				{ "NotModified.Name", "ESteamResult::NotModified" },
				{ "NotSettled.Name", "ESteamResult::NotSettled" },
				{ "OK.Name", "ESteamResult::OK" },
				{ "ParentalControlRestricted.Name", "ESteamResult::ParentalControlRestricted" },
				{ "PasswordRequiredToKickSession.Name", "ESteamResult::PasswordRequiredToKickSession" },
				{ "PasswordUnset.Name", "ESteamResult::PasswordUnset" },
				{ "Pending.Name", "ESteamResult::Pending" },
				{ "PersistFailed.Name", "ESteamResult::PersistFailed" },
				{ "PhoneActivityLimitExceeded.Name", "ESteamResult::PhoneActivityLimitExceeded" },
				{ "PSNTicketInvalid.Name", "ESteamResult::PSNTicketInvalid" },
				{ "RateLimitExceeded.Name", "ESteamResult::RateLimitExceeded" },
				{ "RefundToWallet.Name", "ESteamResult::RefundToWallet" },
				{ "RegionLocked.Name", "ESteamResult::RegionLocked" },
				{ "RemoteCallFailed.Name", "ESteamResult::RemoteCallFailed" },
				{ "RemoteDisconnect.Name", "ESteamResult::RemoteDisconnect" },
				{ "RemoteFileConflict.Name", "ESteamResult::RemoteFileConflict" },
				{ "RequirePasswordReEntry.Name", "ESteamResult::RequirePasswordReEntry" },
				{ "RestrictedDevice.Name", "ESteamResult::RestrictedDevice" },
				{ "Revoked.Name", "ESteamResult::Revoked" },
				{ "SameAsPreviousValue.Name", "ESteamResult::SameAsPreviousValue" },
				{ "ServiceReadOnly.Name", "ESteamResult::ServiceReadOnly" },
				{ "ServiceUnavailable.Name", "ESteamResult::ServiceUnavailable" },
				{ "ShoppingCartNotFound.Name", "ESteamResult::ShoppingCartNotFound" },
				{ "SmsCodeFailed.Name", "ESteamResult::SmsCodeFailed" },
				{ "sultNoConnectionRetry.Name", "ESteamResult::sultNoConnectionRetry" },
				{ "Suspended.Name", "ESteamResult::Suspended" },
				{ "TimeNotSynced.Name", "ESteamResult::TimeNotSynced" },
				{ "Timeout.Name", "ESteamResult::Timeout" },
				{ "TooManyPending.Name", "ESteamResult::TooManyPending" },
				{ "TryAnotherCM.Name", "ESteamResult::TryAnotherCM" },
				{ "TwoFactorActivationCodeMismatch.Name", "ESteamResult::TwoFactorActivationCodeMismatch" },
				{ "TwoFactorCodeMismatch.Name", "ESteamResult::TwoFactorCodeMismatch" },
				{ "UnexpectedError.Name", "ESteamResult::UnexpectedError" },
				{ "ValueOutOfRange.Name", "ESteamResult::ValueOutOfRange" },
				{ "WGNetworkSendExceeded.Name", "ESteamResult::WGNetworkSendExceeded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamResult",
				"ESteamResult",
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
