#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef IOSUNITY_SWIFT_H
#define IOSUNITY_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="iOSUnity",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
/// Enumeration of accrual types
typedef SWIFT_ENUM(NSInteger, DTDAccrualType, open) {
  DTDAccrualTypeEarned = 0,
  DTDAccrualTypeBought = 1,
};

enum DTDLogLevel : NSInteger;
@class NSString;
@protocol DTDIdentifiersListener;
@class DTDAnalyticsConfiguration;
@protocol DTDRemoteConfigListener;
@class DTDCustomEventParameters;
@class DTDStartProgressionEventParameters;
@class DTDFinishProgressionEventParameters;
@class SKPaymentTransaction;
@class SKProduct;
@class DTDSocialNetwork;
@class DTDReferralProperty;

SWIFT_CLASS("_TtC8iOSUnity12DTDAnalytics")
@interface DTDAnalytics : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Set the log level in the console
/// <ul>
///   <li>
///     Available levels: Unknown, No, Error, Warning, Info, Debug,
///   </li>
/// </ul>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum DTDLogLevel logLevel;)
+ (enum DTDLogLevel)logLevel SWIFT_WARN_UNUSED_RESULT;
+ (void)setLogLevel:(enum DTDLogLevel)newValue;
/// Enable COPPA (Children’s Online Privacy Protection Act) compliant for the application.
+ (void)coppaControlEnable;
/// Get current device identifier
+ (void)deviceIdHandler:(void (^ _Nonnull)(NSString * _Nonnull))completionHandler;
/// Get current SDK version
+ (void)sdkVersionHandler:(void (^ _Nonnull)(NSString * _Nonnull))completionHandler;
/// Get tracking availability
+ (void)trackingAvailabilityHandler:(void (^ _Nonnull)(BOOL))completionHandler;
/// Set tracking availability
+ (void)trackingAvailability:(BOOL)value;
/// Get custom user identifier
+ (void)userIdHandler:(void (^ _Nonnull)(NSString * _Nonnull))completionHandler;
/// Set delegate for receive devtodev identifiers
+ (void)setIdentifiersListenerWithListener:(id <DTDIdentifiersListener> _Nullable)listener;
/// Set callback for notification about initialization finished
+ (void)setInitializationCompleteCallback:(void (^ _Nullable)(void))callback;
/// Set custom user identifier
+ (void)userId:(NSString * _Nonnull)userId;
/// Replace custom user identifier
+ (void)replaceFromUserId:(NSString * _Nonnull)fromUserId toUserId:(NSString * _Nonnull)toUserId;
/// Get the current user level.
+ (void)currentLevelHandler:(void (^ _Nonnull)(NSInteger))completionHandler;
/// Set the current user level. Required if level feature used in the app.
+ (void)currentLevel:(NSInteger)currentLevel;
/// Player has reached a new level
/// \param level reached level
///
+ (void)levelUp:(NSInteger)level;
/// Player has reached a new level
/// \param level reached level
///
/// \param balances map with the currency names and amounts
///
+ (void)levelUp:(NSInteger)level withBalances:(NSDictionary<NSString *, NSNumber *> * _Nonnull)balances;
/// Send current user balance
/// \param balance map with the currency names and amounts
///
+ (void)currentBalanceWithBalance:(NSDictionary<NSString *, NSNumber *> * _Nonnull)balance;
/// Initialization SDK
/// \param applicationKey Get it from http://devtodev.com/
///
/// \param configuration See DTDAnalyticsConfiguration
///
+ (void)applicationKey:(NSString * _Nonnull)applicationKey configuration:(DTDAnalyticsConfiguration * _Nonnull)configuration;
/// Initialization SDK
/// \param applicationKey Get it from http://devtodev.com/
///
+ (void)applicationKey:(NSString * _Nonnull)applicationKey;
/// Initialization SDK with start AB-Test Module
/// \param applicationKey Get it from http://devtodev.com/
///
/// \param configuration See DTDAnalyticsConfiguration
///
/// \param abConfigListener See DTDRemoteConfigFetchListenerProtocol
///
+ (void)applicationKey:(NSString * _Nonnull)applicationKey configuration:(DTDAnalyticsConfiguration * _Nonnull)configuration abConfigListener:(id <DTDRemoteConfigListener> _Nonnull)abConfigListener;
/// Initialization SDK with start AB-Test Module
/// \param applicationKey Get it from http://devtodev.com/
///
/// \param abConfigListener See DTDRemoteConfigFetchListenerProtocol
///
+ (void)applicationKey:(NSString * _Nonnull)applicationKey abConfigListener:(id <DTDRemoteConfigListener> _Nonnull)abConfigListener;
/// You can use the following method to report data with additional parameters
/// \param eventName name of sending event
///
+ (void)customEvent:(NSString * _Nonnull)eventName;
/// You can use the following method to report data with additional parameters
/// \param eventName name of sending event
///
/// \param parameters set of event parameters. Values can be only primitive types
///
+ (void)customEvent:(NSString * _Nonnull)eventName withParameters:(DTDCustomEventParameters * _Nonnull)parameters;
+ (void)sendBufferedEvents;
/// In-app purchase with a definite article ID.
/// \param purchaseId unique purchase Id
///
/// \param purchaseType purchase type or group
///
/// \param purchaseAmount count of purchased gods
///
/// \param purchasePrice cost of purchased goods (total cost - if several goods were purchased)
///
/// \param purchaseCurrency currency name
///
+ (void)virtualCurrencyPaymentWithPurchaseId:(NSString * _Nonnull)purchaseId purchaseType:(NSString * _Nonnull)purchaseType purchaseAmount:(NSInteger)purchaseAmount purchasePrice:(NSInteger)purchasePrice purchaseCurrency:(NSString * _Nonnull)purchaseCurrency;
/// In-app purchase with a definite article ID.
/// \param purchaseId unique purchase Id
///
/// \param purchaseType purchase type or group
///
/// \param purchaseAmount count of purchased gods
///
/// \param resources map with resources
///
+ (void)virtualCurrencyPaymentWithPurchaseId:(NSString * _Nonnull)purchaseId purchaseType:(NSString * _Nonnull)purchaseType purchaseAmount:(NSInteger)purchaseAmount resources:(NSDictionary<NSString *, NSNumber *> * _Nonnull)resources;
/// To track the average amount of in-game currency earned or purchased during a level,
/// it is necessary to send a special event after each time an in-game account is replenished.
/// \param currencyName currency name (max. 24 symbols)
///
/// \param currencyAmount the amount an account has been credited with
///
/// \param source the source of the currency
///
/// \param accrualType the way the currency was obtained
///
+ (void)currencyName:(NSString * _Nonnull)currencyName currencyAmount:(NSInteger)currencyAmount source:(NSString * _Nonnull)source accrualType:(enum DTDAccrualType)accrualType;
/// The beginning of a progression event
/// \param eventName name of sending event
///
+ (void)startProgressionEvent:(NSString * _Nonnull)eventName;
/// The beginning of a progression event
/// \param eventName name of sending event
///
/// \param parameters start params of sending event
///
+ (void)startProgressionEvent:(NSString * _Nonnull)eventName withParameters:(DTDStartProgressionEventParameters * _Nonnull)parameters;
/// The end of a progression event
/// \param eventName name of sending event
///
+ (void)finishProgressionEvent:(NSString * _Nonnull)eventName;
/// The end of a progression event
/// \param eventName name of sending event
///
/// \param parameters finish params of sending event
///
+ (void)finishProgressionEvent:(NSString * _Nonnull)eventName withParameters:(DTDFinishProgressionEventParameters * _Nonnull)parameters;
/// Register transactions made through the platform’s payment system.
/// \param orderId transaction ID
///
/// \param price in-app price (in user’s country currency)
///
/// \param productId in-app name
///
/// \param currencyCode payment currency (ISO 4217)
///
+ (void)realCurrencyPaymentWithOrderId:(NSString * _Nonnull)orderId price:(double)price productId:(NSString * _Nonnull)productId currencyCode:(NSString * _Nonnull)currencyCode;
/// Get information about if need to restore transactions
+ (void)isRestoreTransactionHistoryRequiredWithCompletionHandler:(void (^ _Nonnull)(BOOL))completionHandler;
/// Register restored completed transactions
/// \param transactions SKPaymentTransaction list
///
+ (void)subscriptionHistoryWithTransactions:(NSArray<SKPaymentTransaction *> * _Nonnull)transactions;
/// Register subscriptions made through the payment system of the platform.
/// \param transaction subscription transaction ‘SKPaymentTransaction’
///
/// \param product subscription product ‘SKProduct’
///
+ (void)subscriptionPaymentWithTransaction:(SKPaymentTransaction * _Nonnull)transaction product:(SKProduct * _Nonnull)product;
/// Tracks the existence of a connection with a social network. Use pre-defined or custom values as an identifier .
/// \param socialNetwork social network Id
///
+ (void)socialNetworkConnect:(DTDSocialNetwork * _Nonnull)socialNetwork;
/// Tracks the existence of posts to a social network.
/// \param socialNetwork social network Id
///
/// \param reason the reason of posting
///
+ (void)socialNetworkPost:(DTDSocialNetwork * _Nonnull)socialNetwork withReason:(NSString * _Nonnull)reason;
/// Event tracks if the tutorial has been completed or skipped.
/// \param step tutorial step
///
+ (void)tutorialStep:(NSInteger)step;
/// Tracks user’s referral data
/// \param utmData Dictionary with referrer values
///
+ (void)referrer:(NSDictionary<DTDReferralProperty *, NSString *> * _Nonnull)utmData;
/// Tracking ad impression
/// \param network The name of the ad network that delivered the impression
///
/// \param revenue Reward for displaying a banner in USD
///
/// \param placement Placement of the banner
///
/// \param unit Banner title
///
+ (void)adImpressionWithNetwork:(NSString * _Nonnull)network revenue:(double)revenue placement:(NSString * _Nullable)placement unit:(NSString * _Nullable)unit;
@end


@interface DTDAnalytics (SWIFT_EXTENSION(iOSUnity))
+ (void)testLogs;
+ (void)setTestProxyUrlWithUrl:(NSString * _Nonnull)url;
+ (void)getTestProxyUrlWithUrlHandler:(void (^ _Nonnull)(NSString * _Nonnull))urlHandler;
+ (void)setTestCustomUrlWithUrl:(NSString * _Nonnull)url;
+ (void)getTestCustomUrlWithUrlHandler:(void (^ _Nonnull)(NSString * _Nonnull))urlHandler;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable loggerMessageClosure)(NSString * _Nonnull);)
+ (void (^ _Nullable)(NSString * _Nonnull))loggerMessageClosure SWIFT_WARN_UNUSED_RESULT;
+ (void)setLoggerMessageClosure:(void (^ _Nullable)(NSString * _Nonnull))newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkFolderPath;)
+ (NSString * _Nonnull)sdkFolderPath SWIFT_WARN_UNUSED_RESULT;
+ (void)clearKeychain;
@end

@class NSNumber;
enum DTDTrackingStatus : NSInteger;

SWIFT_CLASS("_TtC8iOSUnity25DTDAnalyticsConfiguration")
@interface DTDAnalyticsConfiguration : NSObject
/// Started log level state
@property (nonatomic) enum DTDLogLevel logLevel;
/// Started custom user id
@property (nonatomic, copy) NSString * _Nullable userId;
/// Started user level
@property (nonatomic, strong) NSNumber * _Nullable currentLevel;
/// Started tracking availability status
@property (nonatomic) enum DTDTrackingStatus trackingAvailability;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class DTDVerifyResponse;

SWIFT_CLASS("_TtC8iOSUnity12DTDAntiCheat")
@interface DTDAntiCheat : NSObject
+ (void)verifyPaymentWithReceiptString:(NSString * _Nonnull)receiptString completionHandler:(void (^ _Nonnull)(DTDVerifyResponse * _Nonnull))completionHandler;
+ (void)verifyPaymentCompletion:(void (^ _Nonnull)(DTDVerifyResponse * _Nonnull))completionHandler;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
@end


/// Custom event parameters
SWIFT_CLASS("_TtC8iOSUnity24DTDCustomEventParameters")
@interface DTDCustomEventParameters : NSObject
/// Insert Bool parameter
/// \param key name (max. 32 symbols)
///
/// \param value bool value
///
- (void)addBool:(NSString * _Nonnull)key value:(BOOL)value;
/// Insert Int parameter
/// \param key name (max. 32 symbols)
///
/// \param value Int value
///
- (void)addInt:(NSString * _Nonnull)key value:(NSInteger)value;
/// Insert String parameter
/// \param key name (max. 32 symbols)
///
/// \param value String value (max. 255 symbols)
///
- (void)addString:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
/// Insert Double parameter
/// \param key name (max. 32 symbols)
///
/// \param value Double value
///
- (void)addDouble:(NSString * _Nonnull)key value:(double)value;
/// Return all setted parametrs
- (NSDictionary<NSString *, id> * _Nonnull)getAllParameters SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8iOSUnity16DTDEngineWrapper")
@interface DTDEngineWrapper : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) void (^ _Nullable engineLoggerMessageClosure)(enum DTDLogLevel, NSString * _Nonnull);)
+ (void (^ _Nullable)(enum DTDLogLevel, NSString * _Nonnull))engineLoggerMessageClosure SWIFT_WARN_UNUSED_RESULT;
+ (void)setEngineLoggerMessageClosure:(void (^ _Nullable)(enum DTDLogLevel, NSString * _Nonnull))newValue;
+ (void)destroySDK;
+ (void)setSDKVersionWithVersion:(NSString * _Nonnull)version;
+ (void)enableEditorMode;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull unitySdkFolderPath;)
+ (NSString * _Nonnull)unitySdkFolderPath SWIFT_WARN_UNUSED_RESULT;
+ (void)testStringWithValue:(NSString * _Nonnull)value;
+ (void)engineSubscriptionHistory:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nonnull)transactions;
+ (void)engineSubscriprtionPaymentWithProductId:(NSString * _Nonnull)productId transactionId:(NSString * _Nonnull)transactionId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8iOSUnity35DTDFinishProgressionEventParameters")
@interface DTDFinishProgressionEventParameters : NSObject
/// Parameter of the status of a completed event.
@property (nonatomic) BOOL successfulCompletion;
/// The duration of game location completion by a player.
/// If not be set, SDK calculate it automatically.
@property (nonatomic) NSInteger duration;
/// Resources which a user spent in this event.
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull spent;
/// Resources which a user earned in this event.
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull earned;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Delegate for receive devtodev identifiers
SWIFT_PROTOCOL("_TtP8iOSUnity22DTDIdentifiersListener_")
@protocol DTDIdentifiersListener
@optional
/// For recive devtodev Id
- (void)didReceiveDevtodevIdWith:(int64_t)devtodevId;
@end

/// SDK Logging levels
typedef SWIFT_ENUM(NSInteger, DTDLogLevel, open) {
/// Unknown log state
  DTDLogLevelUnknown = 0,
/// No logs
  DTDLogLevelNo = 1,
/// Errors that prevent the correct working of sdk
  DTDLogLevelError = 2,
/// Warnings that don’t prevent the correct sdk work
  DTDLogLevelWarning = 3,
/// DB operations, Network operations
  DTDLogLevelInfo = 4,
/// Create events, request statuses
  DTDLogLevelDebug = 5,
};

typedef SWIFT_ENUM_NAMED(NSInteger, ReceiptStatus, "DTDReceiptStatus", open) {
/// Valid
  ReceiptStatusReceiptValid = 0,
/// Not valid
  ReceiptStatusReceiptNotValid = 1,
/// Server error
  ReceiptStatusReceiptServerError = 2,
/// Sandbox
  ReceiptStatusReceiptSandbox = 3,
/// Internal error
  ReceiptStatusReceiptInternalError = 4,
};


/// Urchin Tracking Module (UTM) parameters are five variants of URL parameters
/// used by marketers to track the effectiveness of online marketing campaigns across traffic sources and publishing media.
SWIFT_CLASS("_TtC8iOSUnity19DTDReferralProperty")
@interface DTDReferralProperty : NSObject <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
/// Identifies which site sent the traffic, and is a required parameter.
/// Example: utm_source=Google
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDReferralProperty * _Nonnull source;)
+ (DTDReferralProperty * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
/// Identifies a specific product promotion or strategic campaign.
/// Example: utm_campaign=spring_sale
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDReferralProperty * _Nonnull campaign;)
+ (DTDReferralProperty * _Nonnull)campaign SWIFT_WARN_UNUSED_RESULT;
/// Identifies what specifically was clicked to bring the user to the site, such as a banner ad or a text link.
/// It is often used for A/B testing and content-targeted ads.
/// Example: utm_content=logolink or utm_content=textlink
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDReferralProperty * _Nonnull content;)
+ (DTDReferralProperty * _Nonnull)content SWIFT_WARN_UNUSED_RESULT;
/// Identifies what type of link was used, such as cost per click or email.
/// Example: utm_medium=cpc
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDReferralProperty * _Nonnull medium;)
+ (DTDReferralProperty * _Nonnull)medium SWIFT_WARN_UNUSED_RESULT;
/// Identifies search terms.
/// utm_term=running+shoes
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDReferralProperty * _Nonnull term;)
+ (DTDReferralProperty * _Nonnull)term SWIFT_WARN_UNUSED_RESULT;
/// The name of ReferralProperty
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@property (nonatomic, readonly) NSUInteger hash;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end

@class DTDRemoteConfigCollection;

/// Static class for working with remote configuration and AB-test management
SWIFT_CLASS("_TtC8iOSUnity15DTDRemoteConfig")
@interface DTDRemoteConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// AB test configuration wait time. Default 0.0 (Unlimited)
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) double remoteConfigWaiting;)
+ (double)remoteConfigWaiting SWIFT_WARN_UNUSED_RESULT;
+ (void)setRemoteConfigWaiting:(double)newValue;
/// Experiment group waiting time. Default 10.0
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) double groupDefinitionWaiting;)
+ (double)groupDefinitionWaiting SWIFT_WARN_UNUSED_RESULT;
+ (void)setGroupDefinitionWaiting:(double)newValue;
/// Default configuration parameters
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSDictionary<NSString *, id> * _Nonnull defaults;)
+ (NSDictionary<NSString *, id> * _Nonnull)defaults SWIFT_WARN_UNUSED_RESULT;
+ (void)setDefaults:(NSDictionary<NSString *, id> * _Nonnull)newValue;
/// Remote configuration parameters
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDRemoteConfigCollection * _Nonnull config;)
+ (DTDRemoteConfigCollection * _Nonnull)config SWIFT_WARN_UNUSED_RESULT;
/// Apply configuration change, run experiment
+ (void)applyConfig;
/// A debug method for saving a test experiment after restarting the application
+ (void)cacheTestExperiment;
/// Reset configuration, cancel experiment
+ (void)resetConfig;
@end

/// Result of a configuration change
typedef SWIFT_ENUM(NSInteger, DTDRemoteConfigChangeResult, open) {
/// An error occurred while changing the configuration
  DTDRemoteConfigChangeResultFailure = 0,
/// The configuration has been successfully changed
  DTDRemoteConfigChangeResultSuccess = 1,
};

@class DTDRemoteConfigValue;

/// Wrapper for remote parameters collection. Enables access to configuration values by using subscripting syntax.
SWIFT_CLASS("_TtC8iOSUnity25DTDRemoteConfigCollection")
@interface DTDRemoteConfigCollection : NSObject
/// Check if current configuration have value for a key
- (BOOL)hasKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (DTDRemoteConfigValue * _Nonnull)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(DTDRemoteConfigValue * _Nonnull)newValue forKeyedSubscript:(NSString * _Nonnull)key;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface DTDRemoteConfigCollection (SWIFT_EXTENSION(iOSUnity))
- (NSDictionary<NSString *, DTDRemoteConfigValue *> * _Nonnull)getRawConfig SWIFT_WARN_UNUSED_RESULT;
@end


enum DTDRemoteConfigReceiveResult : NSInteger;

/// A listener for working with configuration
SWIFT_PROTOCOL("_TtP8iOSUnity23DTDRemoteConfigListener_")
@protocol DTDRemoteConfigListener
/// The method is called when the configuration has been received
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     result: The result of receiving the configuration
///   </li>
/// </ul>
- (void)onReceivedResult:(enum DTDRemoteConfigReceiveResult)result;
/// The method is called when the configuration might change
- (void)onPrepareToChange;
/// The method is called when there was a change in the remote configuration
/// \param result Result of a configuration change
///
/// \param error Informing error
///
- (void)onChangedResult:(enum DTDRemoteConfigChangeResult)result error:(NSError * _Nullable)error;
@end

typedef SWIFT_ENUM(NSInteger, DTDRemoteConfigReceiveResult, open) {
/// An error occurred while receiving the configuration
  DTDRemoteConfigReceiveResultFailure = 0,
/// The configuration has been successfully receiving
  DTDRemoteConfigReceiveResultSuccess = 1,
/// The configuration has been successfully receiving, but experimnets list is empty
  DTDRemoteConfigReceiveResultEmpty = 2,
};

/// Source of configuration values
typedef SWIFT_ENUM(NSInteger, DTDRemoteConfigSource, open) {
/// Empty value
  DTDRemoteConfigSourceEmpty = 0,
/// Remote value
  DTDRemoteConfigSourceRemote = 1,
/// Default value
  DTDRemoteConfigSourceDefaults = 2,
};


/// Wrapper for remote parameter values, with methods to get parameter values as different types.
SWIFT_CLASS("_TtC8iOSUnity20DTDRemoteConfigValue")
@interface DTDRemoteConfigValue : NSObject
@property (nonatomic) id _Nonnull value;
/// Identifies the source of the value.
@property (nonatomic, readonly) enum DTDRemoteConfigSource source;
/// Gets the value as a string.
@property (nonatomic, readonly, copy) NSString * _Nullable stringValue;
/// Gets the value as a float.
@property (nonatomic, readonly) float floatValue;
/// Gets the value as a double.
@property (nonatomic, readonly) double doubleValue;
/// Gets the value as a integer.
@property (nonatomic, readonly) int32_t int32Value;
/// Gets the value as a integer.
@property (nonatomic, readonly) int64_t int64Value;
/// Gets the value as a integer.
@property (nonatomic, readonly) NSInteger integerValue;
/// Gets the value as a bool.
@property (nonatomic, readonly) BOOL boolValue;
/// Get object description
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8iOSUnity16DTDSocialNetwork")
@interface DTDSocialNetwork : NSObject
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
/// The name of social network
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// https://www.facebook.com
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull facebook;)
+ (DTDSocialNetwork * _Nonnull)facebook SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull vkontakte;)
+ (DTDSocialNetwork * _Nonnull)vkontakte SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull twitter;)
+ (DTDSocialNetwork * _Nonnull)twitter SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull googleplus;)
+ (DTDSocialNetwork * _Nonnull)googleplus SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull whatsapp;)
+ (DTDSocialNetwork * _Nonnull)whatsapp SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull viber;)
+ (DTDSocialNetwork * _Nonnull)viber SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull evernote;)
+ (DTDSocialNetwork * _Nonnull)evernote SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull googlemail;)
+ (DTDSocialNetwork * _Nonnull)googlemail SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull linkedin;)
+ (DTDSocialNetwork * _Nonnull)linkedin SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull pinterest;)
+ (DTDSocialNetwork * _Nonnull)pinterest SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull qzone;)
+ (DTDSocialNetwork * _Nonnull)qzone SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull reddit;)
+ (DTDSocialNetwork * _Nonnull)reddit SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull renren;)
+ (DTDSocialNetwork * _Nonnull)renren SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DTDSocialNetwork * _Nonnull tumblr;)
+ (DTDSocialNetwork * _Nonnull)tumblr SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// By default difficulty = 0 and source = nil
SWIFT_CLASS("_TtC8iOSUnity34DTDStartProgressionEventParameters")
@interface DTDStartProgressionEventParameters : NSObject
/// Previous location from which a player came
@property (nonatomic, copy) NSString * _Nullable source;
/// Set the level of complexity of a game location
- (void)setDifficultyWithDifficulty:(NSInteger)difficulty;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// SDK Tracking status
typedef SWIFT_ENUM(NSInteger, DTDTrackingStatus, open) {
/// Unknown tracking status
  DTDTrackingStatusUnknown = 0,
/// Enable tracking
  DTDTrackingStatusEnable = 1,
/// Disable tracking
  DTDTrackingStatusDisable = 2,
};


SWIFT_CLASS("_TtC8iOSUnity11DTDUserCard")
@interface DTDUserCard : NSObject
/// Set User cheater
+ (void)setCheater:(BOOL)cheater;
/// Set User tester
+ (void)setTester:(BOOL)tester;
/// Convenience method for setting a single [String] property in devtodev user.
/// \param key property name
///
/// \param value value
///
+ (void)setString:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
/// Convenience method for setting a single [Bool] property in devtodev user.
/// \param key property name
///
/// \param value value
///
+ (void)setBool:(NSString * _Nonnull)key value:(BOOL)value;
/// Convenience method for setting a single [Int] property in devtodev user.
/// \param key property name
///
/// \param value value
///
+ (void)setInt:(NSString * _Nonnull)key value:(NSInteger)value;
/// Convenience method for setting a single [Double] property in devtodev user.
/// \param key property name
///
/// \param value value
///
+ (void)setDouble:(NSString * _Nonnull)key value:(double)value;
/// Convenience method for getting a single property by key in devtodev user.
/// \param key property name
///
/// \param completionHandler callback with any value
///
+ (void)getValueWithKey:(NSString * _Nonnull)key :(void (^ _Nonnull)(id _Nullable))completionHandler;
/// Remove a property and they value from the current user’s profile in devtodev user.
/// \param property property key
///
+ (void)unsetProperty:(NSString * _Nonnull)property;
/// Remove a list of properties and their values from the current user’s profile in devtodev user.
/// The properties array must only contain String names of properties. For properties that don’t exist there will be no effect.
/// \param properties properties array
///
+ (void)unset:(NSArray<NSString *> * _Nonnull)properties;
/// Convenience method for incrementing a single numeric property by the specified amount.
/// \param key property name
///
/// \param value amount to increment by
///
+ (void)increment:(NSString * _Nonnull)key byInt:(NSInteger)value;
/// Convenience method for incrementing a single numeric property by the specified amount.
/// \param key property name
///
/// \param value amount to increment by
///
+ (void)increment:(NSString * _Nonnull)key byDouble:(double)value;
/// Delete current user’s record from devtodev.
+ (void)clearUser;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8iOSUnity17DTDVerifyResponse")
@interface DTDVerifyResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable verificationResult;
@property (nonatomic, readonly) enum ReceiptStatus receiptStatus;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end





#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
