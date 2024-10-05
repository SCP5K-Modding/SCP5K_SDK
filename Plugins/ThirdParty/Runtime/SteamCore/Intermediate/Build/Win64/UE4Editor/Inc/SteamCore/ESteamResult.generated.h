// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamResult_generated_h
#error "ESteamResult.generated.h already included, missing '#pragma once' in ESteamResult.h"
#endif
#define STEAMCORE_ESteamResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamResult_h


#define FOREACH_ENUM_ESTEAMRESULT(op) \
	op(ESteamResult::None) \
	op(ESteamResult::OK) \
	op(ESteamResult::Fail) \
	op(ESteamResult::NoConnection) \
	op(ESteamResult::sultNoConnectionRetry) \
	op(ESteamResult::InvalidPassword) \
	op(ESteamResult::LoggedInElsewhere) \
	op(ESteamResult::InvalidProtocolVer) \
	op(ESteamResult::InvalidParam) \
	op(ESteamResult::FileNotFound) \
	op(ESteamResult::Busy) \
	op(ESteamResult::InvalidState) \
	op(ESteamResult::InvalidName) \
	op(ESteamResult::InvalidEmail) \
	op(ESteamResult::DuplicateName) \
	op(ESteamResult::AccessDenied) \
	op(ESteamResult::Timeout) \
	op(ESteamResult::Banned) \
	op(ESteamResult::AccountNotFound) \
	op(ESteamResult::InvalidSteamID) \
	op(ESteamResult::ServiceUnavailable) \
	op(ESteamResult::NotLoggedOn) \
	op(ESteamResult::Pending) \
	op(ESteamResult::EncryptionFailure) \
	op(ESteamResult::InsufficientPrivilege) \
	op(ESteamResult::LimitExceeded) \
	op(ESteamResult::Revoked) \
	op(ESteamResult::Expired) \
	op(ESteamResult::AlreadyRedeemed) \
	op(ESteamResult::DuplicateRequest) \
	op(ESteamResult::AlreadyOwned) \
	op(ESteamResult::IPNotFound) \
	op(ESteamResult::PersistFailed) \
	op(ESteamResult::LockingFailed) \
	op(ESteamResult::LogonSessionReplaced) \
	op(ESteamResult::ConnectFailed) \
	op(ESteamResult::HandshakeFailed) \
	op(ESteamResult::IOFailure) \
	op(ESteamResult::RemoteDisconnect) \
	op(ESteamResult::ShoppingCartNotFound) \
	op(ESteamResult::Blocked) \
	op(ESteamResult::Ignored) \
	op(ESteamResult::NoMatch) \
	op(ESteamResult::AccountDisabled) \
	op(ESteamResult::ServiceReadOnly) \
	op(ESteamResult::AccountNotFeatured) \
	op(ESteamResult::AdministratorOK) \
	op(ESteamResult::ContentVersion) \
	op(ESteamResult::TryAnotherCM) \
	op(ESteamResult::PasswordRequiredToKickSession) \
	op(ESteamResult::AlreadyLoggedInElsewhere) \
	op(ESteamResult::Suspended) \
	op(ESteamResult::Cancelled) \
	op(ESteamResult::DataCorruption) \
	op(ESteamResult::DiskFull) \
	op(ESteamResult::RemoteCallFailed) \
	op(ESteamResult::PasswordUnset) \
	op(ESteamResult::ExternalAccountUnlinked) \
	op(ESteamResult::PSNTicketInvalid) \
	op(ESteamResult::ExternalAccountAlreadyLinked) \
	op(ESteamResult::RemoteFileConflict) \
	op(ESteamResult::IllegalPassword) \
	op(ESteamResult::SameAsPreviousValue) \
	op(ESteamResult::AccountLogonDenied) \
	op(ESteamResult::CannotUseOldPassword) \
	op(ESteamResult::InvalidLoginAuthCode) \
	op(ESteamResult::AccountLogonDeniedNoMail) \
	op(ESteamResult::HardwareNotCapableOfIPT) \
	op(ESteamResult::IPTInitError) \
	op(ESteamResult::ParentalControlRestricted) \
	op(ESteamResult::FacebookQueryError) \
	op(ESteamResult::ExpiredLoginAuthCode) \
	op(ESteamResult::IPLoginRestrictionFailed) \
	op(ESteamResult::AccountLockedDown) \
	op(ESteamResult::AccountLogonDeniedVerifiedEmailRequired) \
	op(ESteamResult::NoMatchingURL) \
	op(ESteamResult::BadResponse) \
	op(ESteamResult::RequirePasswordReEntry) \
	op(ESteamResult::ValueOutOfRange) \
	op(ESteamResult::UnexpectedError) \
	op(ESteamResult::Disabled) \
	op(ESteamResult::InvalidCEGSubmission) \
	op(ESteamResult::RestrictedDevice) \
	op(ESteamResult::RegionLocked) \
	op(ESteamResult::RateLimitExceeded) \
	op(ESteamResult::AccountLoginDeniedNeedTwoFactor) \
	op(ESteamResult::ItemDeleted) \
	op(ESteamResult::AccountLoginDeniedThrottle) \
	op(ESteamResult::TwoFactorCodeMismatch) \
	op(ESteamResult::TwoFactorActivationCodeMismatch) \
	op(ESteamResult::AccountAssociatedToMultiplePartners) \
	op(ESteamResult::NotModified) \
	op(ESteamResult::NoMobileDevice) \
	op(ESteamResult::TimeNotSynced) \
	op(ESteamResult::SmsCodeFailed) \
	op(ESteamResult::AccountLimitExceeded) \
	op(ESteamResult::AccountActivityLimitExceeded) \
	op(ESteamResult::PhoneActivityLimitExceeded) \
	op(ESteamResult::RefundToWallet) \
	op(ESteamResult::EmailSendFailure) \
	op(ESteamResult::NotSettled) \
	op(ESteamResult::NeedCaptcha) \
	op(ESteamResult::GSLTDenied) \
	op(ESteamResult::GSOwnerDenied) \
	op(ESteamResult::InvalidItemType) \
	op(ESteamResult::IPBanned) \
	op(ESteamResult::GSLTExpired) \
	op(ESteamResult::InsufficientFunds) \
	op(ESteamResult::TooManyPending) \
	op(ESteamResult::NoSiteLicensesFound) \
	op(ESteamResult::WGNetworkSendExceeded) \
	op(ESteamResult::AccountNotFriends) \
	op(ESteamResult::LimitedUserAccount) \
	op(ESteamResult::CantRemoveItem) 

enum class ESteamResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
