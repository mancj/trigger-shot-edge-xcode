//
//  PAGConfig.h
//  PAGAdSDK
//
//  Created by bytedance on 2022/5/9.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PAGAdSDKThemeStatus) {
    PAGAdSDKThemeStatus_Normal = 0, //Light mode
    PAGAdSDKThemeStatus_Night  = 1, //Dark mode
};

typedef NS_ENUM(NSInteger, PAGChildDirectedType) {
    PAGChildDirectedTypeDefault = -1,//default
    PAGChildDirectedTypeNonChild = 0,// user is not a child
    PAGChildDirectedTypeChild = 1,// user is a child
};

typedef NS_ENUM(NSInteger, PAGDoNotSellType) {
    PAGDoNotSellTypeDefault = -1,//default
    PAGDoNotSellTypeSell = 0,//“sale” of personal information is permitted
    PAGDoNotSellTypeNotSell = 1,//user has opted out of “sale” of personal information
};

typedef NS_ENUM(NSInteger, PAGGDPRConsentType) {
    PAGGDPRConsentTypeDefault = -1,//default
    PAGGDPRConsentTypeNoConsent = 0,//user did not consent
    PAGGDPRConsentTypeConsent = 1,//user provided consent
};

NS_ASSUME_NONNULL_BEGIN

///Pangle SDK configuration class
@interface PAGConfig : NSObject

///appId the unique identifier of the App
///@warning required
@property (nonatomic, copy) NSString *appID;

+ (instancetype)new UNAVAILABLE_ATTRIBUTE;
- (instancetype)init UNAVAILABLE_ATTRIBUTE;
/// Initialization method of PAGConfig
+ (instancetype)shareConfig;

@end

@interface PAGConfig (Settings)

///Set the COPPA of the user, COPPA is the short of Children's Online Privacy Protection Rule, the interface only works in the United States.
@property (nonatomic, assign) PAGChildDirectedType childDirected;

///Custom set the GDPR of the user,GDPR is the short of General Data Protection Regulation,the interface only works in The European.
@property (nonatomic, assign) PAGGDPRConsentType GDPRConsent;

/// Custom set the CCPA of the user,CCPA is the short of General Data Protection Regulation,the interface only works in USA.
@property (nonatomic, assign) PAGDoNotSellType doNotSell;

@property (nonatomic, assign) PAGAdSDKThemeStatus  themeStatus;

/// Custom set the debugLog to print debug Log.
/// debugLog NO: close debug log, YES: open debug log.
@property (nonatomic, assign) BOOL debugLog;

/// App logo image. If set, it will be displayed in the App open ad.
@property (nonatomic, strong, nullable) UIImage *appLogoImage;

/// additional user information.
@property (nonatomic, copy) NSString *userDataString;

///Whether to allow SDK to modify the category and options of AVAudioSession when playing audio, default is NO.
///The category set by the SDK is AVAudioSessionCategoryAmbient, and the options are AVAudioSessionCategoryOptionDuckOthers
@property (nonatomic, assign) BOOL allowModifyAudioSessionSetting;

@end

NS_ASSUME_NONNULL_END
