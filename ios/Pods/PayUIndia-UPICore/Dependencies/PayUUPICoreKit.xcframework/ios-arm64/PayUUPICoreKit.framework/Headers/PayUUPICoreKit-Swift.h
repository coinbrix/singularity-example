// Generated by Apple Swift version 5.6 (swiftlang-5.6.0.323.62 clang-1316.0.20.8)
#ifndef PAYUUPICOREKIT_SWIFT_H
#define PAYUUPICOREKIT_SWIFT_H
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
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
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
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PayUUPICoreKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


typedef SWIFT_ENUM(NSInteger, NetworkEnvironment, open) {
  NetworkEnvironmentProduction = 0,
  NetworkEnvironmentTest = 1,
  NetworkEnvironmentMobiletest = 2,
  NetworkEnvironmentMobileDev = 3,
  NetworkEnvironmentSdkTest = 4,
  NetworkEnvironmentBizcheckouttest = 5,
};


SWIFT_CLASS("_TtC14PayUUPICoreKit7PayUAPI")
@interface PayUAPI : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;

SWIFT_CLASS("_TtC14PayUUPICoreKit21PayUActivityIndicator")
@interface PayUActivityIndicator : NSObject
- (void)setupActivityIndicatorOnView:(UIView * _Nonnull)view;
- (void)startOn:(UIView * _Nonnull)view;
- (void)stop;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit18PayUAnalyticsEvent")
@interface PayUAnalyticsEvent : NSObject
+ (void)transactionStarted;
+ (void)transactionFinished;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;
enum PayUPaymentVerificationMode : NSInteger;

SWIFT_CLASS("_TtC14PayUUPICoreKit19PayUAnalyticsSender")
@interface PayUAnalyticsSender : NSObject
+ (void)sendOneTimeAnalytics;
+ (void)sendTxnStatus:(NSString * _Nonnull)status;
+ (void)sendPaymentVerifidBy:(enum PayUPaymentVerificationMode)verifier;
+ (void)sendUserAction:(NSString * _Nonnull)action;
+ (void)sendTotalTxnTime:(NSInteger)time;
+ (void)sendPaymentVerifiedIn:(NSInteger)time;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC14PayUUPICoreKit10PayUBaseVC")
@interface PayUBaseVC : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class PayUUPIPaymentOptions;
@class PayUPaymentParam;
@class PayUSupportedIntentApp;

SWIFT_CLASS("_TtC14PayUUPICoreKit19PayUIntentPaymentVC")
@interface PayUIntentPaymentVC : PayUBaseVC
@property (nonatomic, strong) PayUUPIPaymentOptions * _Null_unspecified availableUpiOptions;
@property (nonatomic, strong) PayUPaymentParam * _Null_unspecified paymentParams;
@property (nonatomic, strong) PayUSupportedIntentApp * _Null_unspecified paymentApp;
@property (nonatomic) BOOL bypassCanOpenAppChecks;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit16PayULoaderBaseVC")
@interface PayULoaderBaseVC : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit23PayULoaderIntentPayment")
@interface PayULoaderIntentPayment : PayULoaderBaseVC
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit26PayULoaderUPIAuthorisation")
@interface PayULoaderUPIAuthorisation : PayULoaderBaseVC
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

enum PayUUPIType : NSInteger;
@class PayUSupportedCollectApp;

SWIFT_CLASS("_TtC14PayUUPICoreKit14PayUPaymentApp")
@interface PayUPaymentApp : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PHONEPE;)
+ (NSString * _Nonnull)PHONEPE SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull GPAY;)
+ (NSString * _Nonnull)GPAY SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PAYTM;)
+ (NSString * _Nonnull)PAYTM SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull BHIM;)
+ (NSString * _Nonnull)BHIM SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) enum PayUUPIType paymentType;
@property (nonatomic, readonly, strong) PayUSupportedCollectApp * _Nullable appData;
+ (PayUPaymentApp * _Nonnull)phonepeWithAppData:(PayUSupportedCollectApp * _Nonnull)appData SWIFT_WARN_UNUSED_RESULT;
+ (PayUPaymentApp * _Nonnull)gpayWithAppData:(PayUSupportedCollectApp * _Nonnull)appData SWIFT_WARN_UNUSED_RESULT;
+ (PayUPaymentApp * _Nonnull)paytmWithAppData:(PayUSupportedCollectApp * _Nonnull)appData SWIFT_WARN_UNUSED_RESULT;
+ (PayUPaymentApp * _Nonnull)bhimWithAppData:(PayUSupportedCollectApp * _Nonnull)appData SWIFT_WARN_UNUSED_RESULT;
+ (PayUPaymentApp * _Nonnull)gpayOmni SWIFT_WARN_UNUSED_RESULT;
+ (PayUPaymentApp * _Nonnull)unknown SWIFT_WARN_UNUSED_RESULT;
+ (PayUPaymentApp * _Nonnull)newType SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface PayUPaymentApp (SWIFT_EXTENSION(PayUUPICoreKit))
+ (PayUPaymentApp * _Nullable)fromCollectApp:(PayUSupportedCollectApp * _Nonnull)collectApp SWIFT_WARN_UNUSED_RESULT;
@end

@class UIImage;

@interface PayUPaymentApp (SWIFT_EXTENSION(PayUUPICoreKit))
@property (nonatomic, readonly, copy) NSString * _Nonnull checkoutDisplayName;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull loaderDisplayName;
@property (nonatomic, readonly, strong) UIImage * _Nonnull iconImage;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull suffixList;
@property (nonatomic, readonly, copy) NSString * _Nonnull validationRegex;
@property (nonatomic, readonly) BOOL isVPAValidationRequired;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit17PayUPaymentOption")
@interface PayUPaymentOption : NSObject
@property (nonatomic, readonly, copy) NSArray<PayUSupportedIntentApp *> * _Nullable supportedApps;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class PayUPureS2SModel;

SWIFT_CLASS("_TtC14PayUUPICoreKit26PayUPaymentResponseHandler")
@interface PayUPaymentResponseHandler : NSObject
@property (nonatomic, copy) void (^ _Nullable remainingSecondsCallback)(NSInteger);
@property (nonatomic) NSInteger allotedTimeForTxn;
@property (nonatomic, readonly) NSInteger remainingSeconds;
@property (nonatomic, readonly) NSInteger forceCheckStatusInterval;
- (nonnull instancetype)initWithConnectionData:(PayUPureS2SModel * _Nonnull)data remainingTime:(NSInteger)remainingTime OBJC_DESIGNATED_INITIALIZER;
- (void)cleanUp;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class PayUPaymentStatus;

@interface PayUPaymentResponseHandler (SWIFT_EXTENSION(PayUUPICoreKit))
- (void)consumePaymentStatus:(PayUPaymentStatus * _Nonnull)status forVerificationMode:(enum PayUPaymentVerificationMode)mode;
@end


@interface PayUPaymentResponseHandler (SWIFT_EXTENSION(PayUUPICoreKit))
- (void)checkPaymentStatus;
@property (nonatomic, readonly) BOOL shouldForceCheckPaymentStatus;
@property (nonatomic, readonly) BOOL shouldCheckPaymentStatus;
@property (nonatomic, readonly) BOOL shouldVerifyResponseFromSocket;
- (void)finishTransaction;
- (void)finishTransactionWithIsMerchantCancelling:(BOOL)isMerchantCancelling;
- (void)cancelTransactionWithCompletion:(void (^ _Nonnull)(PayUPaymentStatus * _Nonnull))completion;
- (void)checkPaymentStatusWithForcefully:(BOOL)forcefully completion:(void (^ _Nonnull)(PayUPaymentStatus * _Nonnull))completion;
@end

enum PayUPaymentStatusType : NSInteger;

SWIFT_CLASS("_TtC14PayUUPICoreKit17PayUPaymentStatus")
@interface PayUPaymentStatus : NSObject
@property (nonatomic, readonly) enum PayUPaymentStatusType type;
+ (PayUPaymentStatus * _Nonnull)pending SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, PayUPaymentStatusType, open) {
  PayUPaymentStatusTypePending = 0,
  PayUPaymentStatusTypeError = 1,
  PayUPaymentStatusTypeComplete = 2,
};

typedef SWIFT_ENUM(NSInteger, PayUPaymentVerificationMode, open) {
  PayUPaymentVerificationModeSocket = 0,
  PayUPaymentVerificationModeHttp = 1,
};

@class NSDate;

SWIFT_CLASS("_TtC14PayUUPICoreKit19PayUPersistentStore")
@interface PayUPersistentStore : NSObject
+ (void)saveRemainingTxnSecsBeforeMovingToBackground:(NSInteger)seconds txnUniqueId:(NSString * _Nonnull)txnUniqueId;
+ (void)removeRemainingTxnSecsBeforeMovingToBackground;
+ (void)saveBackgroundEnteringTimeStamp:(NSDate * _Nonnull)dateTime txnUniqueId:(NSString * _Nonnull)txnUniqueId;
+ (NSDate * _Nullable)getBackgroundEnteringTimeStampForTxnUniqueId:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
+ (void)removeBackgroundEnteringTimeStamp;
+ (void)saveSocketConnectionModel:(PayUPureS2SModel * _Nonnull)model;
+ (PayUPureS2SModel * _Nullable)getSocketConnectionModel SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit16PayUPureS2SModel")
@interface PayUPureS2SModel : NSObject
@property (nonatomic, copy) NSString * _Nonnull referenceId;
@property (nonatomic, copy) NSString * _Nonnull pushServiceUrl;
@property (nonatomic, copy) NSString * _Nonnull pushServiceUrlV2;
@property (nonatomic, copy) NSString * _Nonnull upiServicePollInterval;
@property (nonatomic, copy) NSString * _Nonnull sdkUpiPushExpiry;
@property (nonatomic, copy) NSString * _Nonnull sdkUpiVerificationInterval;
@property (nonatomic, copy) NSString * _Nonnull encodedPayuId;
@property (nonatomic, copy) NSString * _Nullable intentURIData;
@property (nonatomic, copy) NSString * _Nullable appName;
@property (nonatomic, copy) NSString * _Nullable amount;
@property (nonatomic, copy) NSString * _Nullable txnId;
@property (nonatomic, copy) NSString * _Nullable token;
@property (nonatomic, copy) NSString * _Nullable returnUrl;
@property (nonatomic, copy) NSString * _Nullable merchantName;
@property (nonatomic, copy) NSString * _Nullable merchantVpa;
@property (nonatomic, copy) NSString * _Nullable vpaRegex;
@property (nonatomic, copy) NSString * _Nullable result;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit12PayUSDKError")
@interface PayUSDKError : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull socketURLError;)
+ (NSString * _Nonnull)socketURLError SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull decodingError;)
+ (NSString * _Nonnull)decodingError SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull dataUnavailable;)
+ (NSString * _Nonnull)dataUnavailable SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull backButtonTxnCancelled;)
+ (NSString * _Nonnull)backButtonTxnCancelled SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull unknownErrorMsg;)
+ (NSString * _Nonnull)unknownErrorMsg SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull internetUnavailable;)
+ (NSString * _Nonnull)internetUnavailable SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;

SWIFT_CLASS("_TtC14PayUUPICoreKit12PayUSnackBar")
@interface PayUSnackBar : NSObject
- (void)showWithMessage:(NSString * _Nonnull)msg backgroundColor:(UIColor * _Nonnull)backgroundColor foreGroundColor:(UIColor * _Nonnull)foreGroundColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit23PayUSupportedCollectApp")
@interface PayUSupportedCollectApp : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull handles;
- (nullable instancetype)initWithItem:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nonnull)item OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAppName:(NSString * _Nonnull)appName handles:(NSArray<NSString *> * _Nonnull)handles OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit22PayUSupportedIntentApp")
@interface PayUSupportedIntentApp : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull scheme;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name scheme:(NSString * _Nonnull)scheme OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit21PayUThirdPartyManager")
@interface PayUThirdPartyManager : NSObject
+ (void)makePaymentWithApp:(PayUSupportedIntentApp * _Nonnull)app withIntentModel:(PayUPureS2SModel * _Nonnull)model appSwitchingStatus:(void (^ _Nonnull)(BOOL))appSwitchingStatus;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit23PayUTxnVerificationInfo")
@interface PayUTxnVerificationInfo : NSObject
- (nonnull instancetype)initWithUrlStr:(NSString * _Nonnull)urlStr mihpayid:(NSString * _Nonnull)mihpayid token:(NSString * _Nullable)token returnUrlStr:(NSString * _Nullable)returnUrlStr OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit16PayUUPIAnalytics")
@interface PayUUPIAnalytics : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PayUUPIAnalytics * _Nonnull shared;)
+ (PayUUPIAnalytics * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSString * _Nullable analyticsString;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURL;

SWIFT_CLASS("_TtC14PayUUPICoreKit11PayUUPICore")
@interface PayUUPICore : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PayUUPICore * _Nonnull shared;)
+ (PayUUPICore * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic) enum NetworkEnvironment environment;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@property (nonatomic, copy) void (^ _Nullable backPressed)(void);
@property (nonatomic, copy) NSString * _Nullable upiSdkVersion;
@property (nonatomic, copy) NSDate * _Nullable txnStartTime;
+ (NSArray<PayUSupportedIntentApp *> * _Nonnull)getInstalledAppsListForUpiOptions:(PayUUPIPaymentOptions * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)getURIForApp:(PayUSupportedIntentApp * _Nonnull)app fromModel:(PayUPureS2SModel * _Nonnull)model SWIFT_WARN_UNUSED_RESULT;
+ (PayULoaderUPIAuthorisation * _Nonnull)getPayUCollectLoaderScreen SWIFT_WARN_UNUSED_RESULT;
+ (PayULoaderIntentPayment * _Nonnull)getPayUIntentPLoaderScreen SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getSchemeOfApp:(NSString * _Nonnull)appName withAllUpiOptions:(PayUUPIPaymentOptions * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canUseIntentForApp:(PayUSupportedIntentApp * _Nonnull)app withUpiOptions:(PayUUPIPaymentOptions * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canUseUpiCollectWithPaymentOptions:(PayUUPIPaymentOptions * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canUseGpayOmniWithPaymentOptions:(PayUUPIPaymentOptions * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canUseGpayCollectWithPaymentOptions:(PayUUPIPaymentOptions * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canUseGpayAppWithPaymentOptions:(PayUUPIPaymentOptions * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit16PayUUPICoreUtils")
@interface PayUUPICoreUtils : NSObject
+ (NSDictionary<NSString *, NSString *> * _Nonnull)getMandatoryParamsForUnderscorePaymentFromParams:(PayUPaymentParam * _Nonnull)params SWIFT_WARN_UNUSED_RESULT;
+ (NSDictionary<NSString *, NSString *> * _Nonnull)getMandatoryTPVParamsForUnderscorePaymentFromParams:(PayUPaymentParam * _Nonnull)params SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nonnull)getInfoURL SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nonnull)getSecureURL SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getVersionOfBundle:(NSBundle * _Nonnull)bundle SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<PayUSupportedCollectApp *> * _Nonnull)getDefaultUPICollectAppsWithHandles SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit21PayUUPIPaymentOptions")
@interface PayUUPIPaymentOptions : NSObject
@property (nonatomic, readonly, strong) PayUPaymentOption * _Nullable upi;
@property (nonatomic, readonly, strong) PayUPaymentOption * _Nullable tez;
@property (nonatomic, readonly, strong) PayUPaymentOption * _Nullable tezOmni;
@property (nonatomic, readonly, strong) PayUPaymentOption * _Nullable intent;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, PayUUPIType, open) {
  PayUUPITypePhonepe = 0,
  PayUUPITypeGpay = 1,
  PayUUPITypePaytm = 2,
  PayUUPITypeBhim = 3,
  PayUUPITypeGpayOmni = 4,
  PayUUPITypeNewType = 5,
  PayUUPITypeUnknown = 6,
};


SWIFT_CLASS("_TtC14PayUUPICoreKit20PayUValidateVPAModel")
@interface PayUValidateVPAModel : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull status;
@property (nonatomic, readonly, copy) NSString * _Nullable msg;
@property (nonatomic, readonly, copy) NSString * _Nullable vpa;
@property (nonatomic, readonly, copy) NSString * _Nullable payerAccountName;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14PayUUPICoreKit13PayUValidator")
@interface PayUValidator : NSObject
+ (BOOL)isValidMobile:(NSString * _Nonnull)mobile SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
